/*

  Copyright(c) 2012-2016 Intel Corporation. All rights reserved.
  All rights reserved.

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions
  are met:

    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in
      the documentation and/or other materials provided with the
      distribution.
    * Neither the name of Intel Corporation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

/* SVEN Instrumentation API implementation */

#ifndef SVEN_INLINE_INCLUDED
#define SVEN_INLINE_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif

#if defined(SVEN_PCFG_ENABLE_LOCATION_RECORD)

/**
 * Update File Location in sven handle
 * @param h sven handle pointer
 * @param f file id (16 bit)
 * @param l line number in file (16 bit)
 */
SVEN_INLINE psven_eventlocation_t SVEN_CALLCONV
sventx_MakeFileLocation32(psven_handle_t h, sven_u16_t f, sven_u16_t l)
{
    h->svh_location.el_format.elt_size =
    h->svh_location.el_format.elt_addr = 0;
    h->svh_location.el_u.loc32.etls_source_location.etls_fileID = f;
    h->svh_location.el_u.loc32.etls_source_location.etls_lineNo = l;

    return &h->svh_location;
}

/**
 * Update File Location in sven handle
 * @param h sven handle pointer
 * @param f file id (32 bit)
 * @param l line number in file (32 bit)
 */
SVEN_INLINE psven_eventlocation_t SVEN_CALLCONV
sventx_MakeFileLocation64(psven_handle_t h, sven_u32_t f, sven_u32_t l)
{
    h->svh_location.el_format.elt_size = 1;
    h->svh_location.el_format.elt_addr = 0;
    h->svh_location.el_u.loc64.etls_source_location.etls_fileID = f;
    h->svh_location.el_u.loc64.etls_source_location.etls_lineNo = l;

    return &h->svh_location;
}

/**
 * Update address Location in sven handle
 * @param h sven handle pointer
 * @param p address at instrumentation point
 */
SVEN_INLINE psven_eventlocation_t SVEN_CALLCONV
sventx_MakeAddressLocation(psven_handle_t h, void * p)
{
#if defined(SVEN_PCFG_ENABLE_64BIT_ADDR)
    h->svh_location.el_format.elt_addr = 1;
    h->svh_location.el_format.elt_size = 1;
    h->svh_location.el_u.loc64.etls_code_location = (sven_u64_t)p;
#else
    h->svh_location.el_format.elt_addr = 1;
    h->svh_location.el_format.elt_size = 0;
    h->svh_location.el_u.loc32.etls_code_location = (sven_u32_t)p;
#endif

    return &h->svh_location;

}

#endif /* defined(SVEN_PCFG_ENABLE_LOCATION_RECORD) */

/**
 * Setup handle for 0 parameters passed to catid message event.
 */
SVEN_INLINE void SVEN_CALLCONV sventx_MakeParam0(psven_handle_t h)
{
    h->svh_param_count = 0;
}
/**
 * Setup handle for 1 parameter passed to catid message event.
 */
SVEN_INLINE void SVEN_CALLCONV sventx_MakeParam1(psven_handle_t h, sven_u32_t p1)
{
    h->svh_param_count = 1;
    h->svh_param[0]= p1;
}

/**
 * Setup handle for 2 parameters passed to catid message event.
 */
SVEN_INLINE void SVEN_CALLCONV sventx_MakeParam2(psven_handle_t h,
                                   sven_u32_t p1,
                                   sven_u32_t p2)
{
    h->svh_param_count = 2;
    h->svh_param[0]= p1;
    h->svh_param[1]= p2;
}

/**
 * Setup handle for 3 parameters passed to catid message event.
 */
SVEN_INLINE void SVEN_CALLCONV sventx_MakeParam3(psven_handle_t h,
                                   sven_u32_t p1,
                                   sven_u32_t p2,
                                   sven_u32_t p3)
{
    h->svh_param_count = 3;
    h->svh_param[0]= p1;
    h->svh_param[1]= p2;
    h->svh_param[2]= p3;
}

/**
 * Setup handle for 4 parameters passed to catid message event.
 */
SVEN_INLINE void SVEN_CALLCONV sventx_MakeParam4(psven_handle_t h,
                                   sven_u32_t p1,
                                   sven_u32_t p2,
                                   sven_u32_t p3,
                                   sven_u32_t p4)
{
    h->svh_param_count = 4;
    h->svh_param[0]= p1;
    h->svh_param[1]= p2;
    h->svh_param[2]= p3;
    h->svh_param[3]= p4;
}

/**
 * Setup handle for 5 parameters passed to catid message event.
 */
SVEN_INLINE void SVEN_CALLCONV sventx_MakeParam5(psven_handle_t h,
                                   sven_u32_t p1,
                                   sven_u32_t p2,
                                   sven_u32_t p3,
                                   sven_u32_t p4,
                                   sven_u32_t p5)
{
    h->svh_param_count = 5;
    h->svh_param[0]= p1;
    h->svh_param[1]= p2;
    h->svh_param[2]= p3;
    h->svh_param[3]= p4;
    h->svh_param[4]= p5;
}

/**
 * Setup handle for 6 parameters passed to catid message event.
 */
SVEN_INLINE void SVEN_CALLCONV sventx_MakeParam6(psven_handle_t h,
                                   sven_u32_t p1,
                                   sven_u32_t p2,
                                   sven_u32_t p3,
                                   sven_u32_t p4,
                                   sven_u32_t p5,
                                   sven_u32_t p6)
{
    h->svh_param_count = 6;
    h->svh_param[0]= p1;
    h->svh_param[1]= p2;
    h->svh_param[2]= p3;
    h->svh_param[3]= p4;
    h->svh_param[4]= p5;
    h->svh_param[5]= p6;
}

#ifdef __cplusplus
} /* extern C */
#endif

#endif
