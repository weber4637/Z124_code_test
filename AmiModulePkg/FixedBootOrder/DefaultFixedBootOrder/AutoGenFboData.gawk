#***********************************************************************
#*                                                                     *
#*   Copyright (c) 1985-2019, American Megatrends International LLC.   *
#*                                                                     *
#*      All rights reserved. Subject to AMI licensing agreement.       *
#*                                                                     *
#***********************************************************************
#**********************************************************************
## @file
#  To generate FixedBootOrder Bcp Data into DefaultFixedBootOrder.sd
#  and FboGroupFrom.vfr
#**********************************************************************

BEGIN {
########Global parameter and Template Area########
LegacyPrioritiesTemplate=\
"UINT16 LegacyPriorities[%d];\n" ;

UefiPrioritiesTemplate=\
"UINT16 UefiPriorities[%d];\n" ;

DualPrioritiesTemplate=\
"UINT16 DualPriorities[%d];\n" ;

UefiTemplate=\
"suppressif ideqvallist FixedBootPriorities.BootMode == 0 2 3 4 5;\n%s"\
"    oneof varid = FixedBootPriorities.UefiPriorities[Device%d],\n"\
"    questionid = %d,\n"\
"    prompt = STRING_TOKEN(STR_UEFI_BOOT_ORDER_%d),\n"\
"    help = STRING_TOKEN(STR_BOOT_OPTION_HELP),\n%s"\
"    endoneof;\n"\
"endif;\n\n" ;

LegacyTemplate=\
"suppressif ideqvallist FixedBootPriorities.BootMode == 1 2 3 4 5;\n%s"\
"    oneof varid = FixedBootPriorities.LegacyPriorities[Device%d],\n"\
"    questionid = %d,\n"\
"    prompt = STRING_TOKEN(STR_LEGACY_BOOT_ORDER_%d),\n"\
"    help = STRING_TOKEN(STR_BOOT_OPTION_HELP),\n%s"\
"    endoneof;\n"\
"endif;\n\n" ;

DualTemplate=\
"suppressif ideqvallist FixedBootPriorities.BootMode == 0 1 3 4 5;\n%s"\
"    oneof varid = FixedBootPriorities.DualPriorities[Device%d],\n"\
"    questionid = %d,\n"\
"    prompt = STRING_TOKEN(STR_DUAL_BOOT_ORDER_%d),\n"\
"    help = STRING_TOKEN(STR_BOOT_OPTION_HELP),\n%s"\
"    endoneof;\n"\
"endif;\n\n" ;

LegacyFakeTemplate=\
"suppressif TRUE;\n"\
"    oneof varid = FixedBootPriorities.LegacyPriorities[Device%d],\n"\
"    prompt = STRING_TOKEN(STR_DUAL_BOOT_ORDER_1),\n"\
"    help = STRING_TOKEN(STR_BOOT_OPTION_HELP),\n"\
"    option text = STRING_TOKEN(STR_BOOT_HDD), value = 0xFF, flags = INTERACTIVE;\n"\
"    endoneof;\n"\
"endif;\n\n" ;

UefiFakeTemplate=\
"suppressif TRUE;\n"\
"    oneof varid = FixedBootPriorities.UefiPriorities[Device%d],\n"\
"    prompt = STRING_TOKEN(STR_DUAL_BOOT_ORDER_1),\n"\
"    help = STRING_TOKEN(STR_BOOT_OPTION_HELP),\n"\
"    option text = STRING_TOKEN(STR_BOOT_HDD), value = 0xFF, flags = INTERACTIVE;\n"\
"    endoneof;\n"\
"endif;\n\n" ;

DualFakeTemplate=\
"suppressif TRUE;\n"\
"    oneof varid = FixedBootPriorities.DualPriorities[Device%d],\n"\
"    prompt = STRING_TOKEN(STR_DUAL_BOOT_ORDER_1),\n"\
"    help = STRING_TOKEN(STR_BOOT_OPTION_HELP),\n"\
"    option text = STRING_TOKEN(STR_BOOT_HDD), value = 0xFF, flags = INTERACTIVE;\n"\
"    endoneof;\n"\
"endif;\n\n" ;

Seperate=\
"SEPARATOR \n"\
"SUBTITLE(STRING_TOKEN(STR_BCP_%s_DEFAULT_SUBTITLE)) \n" ;

OptionTemplate=\
"        option text = STRING_TOKEN(STR_BOOT_%s), value = %s_VALUE, flags = INTERACTIVE | %s;\n"

DualTokenOptionTemplate=\
"        option text = STRING_TOKEN(STR_BOOT_DUAL_%s), value = %s_VALUE, flags = INTERACTIVE | %s;\n"

DisabledOptionTemplate =\
"        option text = STRING_TOKEN(STR_DISABLED), value = %s_DISABLED_VALUE, flags = INTERACTIVE | %s;\n"

UefiGroupGotoTemplate=\
"suppressif ideqvallist FixedBootPriorities.BootMode == 0;\n"\
"    suppressif ideqvallist FIXED_BOOT_GROUP.Uefi%s == 0;\n"\
"        suppressif ideqvallist FBO_SUBMENU_SHOW.Uefi%s == 0;\n"\
"            goto \n"\
"                formsetguid = FBO_GROUP_FORM_FORM_SET_GUID, \n"\
"                formid = AUTO_ID(%s_BOOT_FORM_ID),\n"\
"                question = 0, \n"\
"                prompt = STRING_TOKEN(STR_%s_BOOT_ORDER_SUBTITLE),\n"\
"                help = STRING_TOKEN(STR_%s_BOOT_ORDER_HELP);\n"\
"        endif;\n"\
"    endif;\n"\
"endif;\n\n"

LegacyGroupGotoTemplate=\
"suppressif ideqvallist FixedBootPriorities.BootMode == 1;\n"\
"    suppressif ideqvallist FIXED_BOOT_GROUP.Legacy%s == 0;\n"\
"        suppressif ideqvallist FBO_SUBMENU_SHOW.Legacy%s == 0;\n"\
"            goto \n"\
"                formsetguid = FBO_GROUP_FORM_FORM_SET_GUID, \n"\
"                formid = AUTO_ID(%s_BOOT_FORM_ID),\n"\
"                question = 0, \n"\
"                prompt = STRING_TOKEN(STR_%s_BOOT_ORDER_SUBTITLE),\n"\
"                help = STRING_TOKEN(STR_%s_BOOT_ORDER_HELP);\n"\
"        endif;\n"\
"    endif;\n"\
"endif;\n\n"
            
GroupFormTemplate=\
"form formid = %s_BOOT_FORM_ID,\n"\
"    title = STRING_TOKEN(STR_%s_BOOT_ORDER_SUBTITLE);\n"\
"    label  %s_BOOT_FORM_LABEL;\n"\
"    label  %s_BOOT_FORM_LABEL_END;\n"\
"endform;\n\n"

##################################################
#Uefi sequence = { 0:HDD, 1:HDD, 2:NVME, 3:CD/CDD(OD), 4:SD, 5:USB_HDD, 6:USB_OD, 7:USB_KEY, 8:USB_FDD, 9:USB_LAN, 10:NETWORK, 11:DISABLED]    
    split("1,6,5,7,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20", DualValues, ",") ;
    split("1,6,5,7,11,11,11,11,11,11", LegacyValues, ",") ;
    split("1,6,5,7,11,11,11,11,11,11", UefiValues, ",") ;

    key = strtonum(FBO_START_KEY) ;
    if ( TYPE == "UEFI" )
    {
        key += 0x80 ;
        Template = UefiTemplate ;
    }
    else if ( TYPE == "LEGACY" )
    {
        key += 0x0 ;
        Template = LegacyTemplate ;
    }
    else if ( TYPE == "DUAL" )
    {
        key += 0x100 ;
        Template = DualTemplate ;
    }
    else if ( TYPE == "UEFI_GROUP_GOTO" )
        Template = UefiGroupGotoTemplate ;
    else if ( TYPE == "LEGACY_GROUP_GOTO" )
        Template = LegacyGroupGotoTemplate ;
    else if ( TYPE == "UEFI_GROUP_FORM" || TYPE == "LEGACY_GROUP_FORM" )
        Template = GroupFormTemplate ;
    else if ( TYPE == "LegacyPriorities" )
        Template = LegacyPrioritiesTemplate ;
    else if ( TYPE == "UefiPriorities" )
        Template = UefiPrioritiesTemplate ;
    else if ( TYPE == "DualPriorities" )
        Template = DualPrioritiesTemplate ;
        
    ##Seperate = sprintf(Seperate, TYPE) ;

    DevCount = split(DEVICE, dev, "+") ;
    for ( i = DevCount ; i >=1 ; i-- )
    {
        if ( dev[i] == "" || dev[i] == " " )
            DevCount-- ;
    }

    # Find out the disabled group and strip the suffix attribute
    for ( i = 0 ; i <= DevCount ; i++ )
    {
        GroupIndex[i] = i ;
        if( sub("_DISABLED", "", dev[i]) && DISABLED)
            GroupIndex[i] = 0xFF ; #Disabled
    }

    if ( TYPE == "UEFI" || TYPE == "LEGACY" || TYPE == "DUAL" )
    {
        for ( i = 1 ; i <= DevCount ; i++ )
        {
            Option = "";
            for ( x = 1 ; x <= DevCount ; x++ )
            {
                  OptionTemplateStr = "0" ;
                  #brnxxxx 20230407 if( GroupIndex[i] == x )
                  #brnxxxx 20230407  OptionTemplateStr = "DEFAULT" ;

		if ( TYPE == "DUAL" )
		{
		    if (x == DualValues[i] ) 
	                OptionTemplateStr = "DEFAULT" ;
        }
		else if ( TYPE == "UEFI" )
		{
		    if (x == UefiValues[i] ) 
	                OptionTemplateStr = "DEFAULT" ;
        }
		else if ( TYPE == "LEGACY" )
		{
		    if (x == LegacyValues[i] ) 
	                OptionTemplateStr = "DEFAULT" ;
        }
            if ( (TYPE == "UEFI" || TYPE == "LEGACY") && DUAL_TOKEN == "11")
                    OptionTemplate = DualTokenOptionTemplate ;

                Data = sprintf(OptionTemplate, dev[x], dev[x], OptionTemplateStr) ;
                Option = Option Data ; 
            }
            if(DISABLED)
            {
                DisabledOptionTemplateStr = "0" ;             
                #brnxxxx 20230330if( GroupIndex[i] != i ) # This group disabled by default
                #brnxxxx 20230330    DisabledOptionTemplateStr = "DEFAULT" ;
                #brnxxxx 20230330 >>>>               
                if ( TYPE == "DUAL" )
                {
                    DisabledOptionTemplateStr = "0" ;
                    if ( DualValues[i] == 20 )
                        DisabledOptionTemplateStr = "DEFAULT" ;
                }
                else if ( TYPE == "UEFI" )
                {
                    DisabledOptionTemplateStr = "0" ;
                    if ( UefiValues[i] == 11 )
                        DisabledOptionTemplateStr = "DEFAULT" ;
                }
                else if ( TYPE == "LEGACY" )
                {
                    DisabledOptionTemplateStr = "0" ;
                    if ( LegacyValues[i] == 11 )
                       DisabledOptionTemplateStr = "DEFAULT" ;
                }                
                #brnxxxx 20230330 <<<<
                
                Data = sprintf(DisabledOptionTemplate, TYPE, DisabledOptionTemplateStr) ;
                Option = Option Data ;
            }
        
            OptionData = sprintf(Template, "", i, key+i-1, i, Option) ;
            InsertGroup = InsertGroup "\n" OptionData ;
        }
        
        if(TYPE == "UEFI")
        {
            if(i <= 16)
            {
                OptionData = sprintf(UefiFakeTemplate, i, Option) ;
                InsertGroup = InsertGroup "\n" OptionData ;
            }
        }else if(TYPE == "LEGACY")
        {
            if(i <= 16)
            {
                OptionData = sprintf(LegacyFakeTemplate, i, Option) ;
                InsertGroup = InsertGroup "\n" OptionData ;
            }
        }else if(TYPE == "DUAL")
        {
            if(i <= 32)
            {
                OptionData = sprintf(DualFakeTemplate, i, Option) ;
                InsertGroup = InsertGroup "\n" OptionData ;
            }
        }        
    }
    else if ( TYPE == "UEFI_GROUP_GOTO" || TYPE == "LEGACY_GROUP_GOTO" ) 
    {
        for ( i = 1 ; i <= DevCount ; i++ )
        {   
            if ( TYPE == "UEFI_GROUP_GOTO" )
                Group = sprintf(Template, substr(dev[i], 6), substr(dev[i], 6), dev[i], dev[i], dev[i]) ;
            else
                Group = sprintf(Template, dev[i], dev[i], dev[i], dev[i], dev[i]) ;
            InsertGroup = InsertGroup "\n" Group ;
        }
    }
    else if ( TYPE == "UEFI_GROUP_FORM" || TYPE == "LEGACY_GROUP_FORM" ) 
    {
        for ( i = 1 ; i <= DevCount ; i++ )
        {
            if ( TYPE == "LEGACY_GROUP_FORM" )
                Group = sprintf(Template, dev[i], dev[i], dev[i], dev[i]) ;
            else
                Group = sprintf(Template, dev[i], dev[i], dev[i], dev[i]) ;
            InsertGroup = InsertGroup "\n" Group ;
        }
    }
    else if ( TYPE == "LegacyPriorities" || TYPE == "UefiPriorities" || TYPE == "DualPriorities") 
    {
        Group = sprintf(Template, DevCount+1) ;
        InsertGroup = InsertGroup "\n" Group ;
    }

    
    ## clear temp AutoGenFboData.sd"
    print > "Build/AutoGenFboData.sd"
}

{
    if ( TYPE == "UEFI" )
        sub(/MAKEFILE_INSERT_UEFI_OPTION_ITEM_FLAG/, InsertGroup);
    else if ( TYPE == "LEGACY" )
        sub(/MAKEFILE_INSERT_LEGACY_OPTION_ITEM_FLAG/, InsertGroup);
    else if ( TYPE == "DUAL" )
        sub(/MAKEFILE_INSERT_DUAL_OPTION_ITEM_FLAG/, InsertGroup); 
    else if ( TYPE == "UEFI_GROUP_GOTO" )
        sub(/MAKEFILE_INSERT_UEFI_GROUP_FORM_GOTO_ITEM_FLAG/, InsertGroup); 
    else if ( TYPE == "LEGACY_GROUP_GOTO" )
        sub(/MAKEFILE_INSERT_LEGACY_GROUP_FORM_GOTO_ITEM_FLAG/, InsertGroup); 
    else if ( TYPE == "UEFI_GROUP_FORM" )
        sub(/MAKEFILE_INSERT_UEFI_GROUP_FORM_ITEM_FLAG/, InsertGroup); 
    else if ( TYPE == "LEGACY_GROUP_FORM" )
        sub(/MAKEFILE_INSERT_LEGACY_GROUP_FORM_ITEM_FLAG/, InsertGroup);         
    else if ( TYPE == "LegacyPriorities" )
        sub(/MAKEFILE_INSERT_LEGACY_PRIORITIES_NUM/, InsertGroup);     
    else if ( TYPE == "UefiPriorities" )
        sub(/MAKEFILE_INSERT_UEFI_PRIORITIES_NUM/, InsertGroup);   
    else if ( TYPE == "DualPriorities" )
        sub(/MAKEFILE_INSERT_DUAL_PRIORITIES_NUM/, InsertGroup);  
    print >> "Build/AutoGenFboData.sd"

}


END {
    close("Build/AutoGenFboData.sd")
}
