

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 08:44:07 2038
 */
/* Compiler settings for ComServer.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IMath,0x564dfde1,0xbf06,0x4654,0xa6,0xe3,0x22,0x29,0xa9,0x56,0x9a,0xb7);


MIDL_DEFINE_GUID(IID, IID_IMath2,0x103978ed,0x3f9c,0x444b,0xab,0x63,0x4c,0x05,0xfa,0x75,0x5c,0x85);


MIDL_DEFINE_GUID(IID, LIBID_ComServerLib,0x6c8a161f,0xeb0f,0x46a4,0xa8,0xf6,0x97,0x43,0x6f,0x3c,0xa8,0xca);


MIDL_DEFINE_GUID(CLSID, CLSID_Math,0x8c43d580,0xcda2,0x4ea2,0xa4,0x3c,0x54,0x2f,0xb3,0xb9,0x91,0x1e);


MIDL_DEFINE_GUID(CLSID, CLSID_Math2,0xd5dcec7f,0x8e73,0x4e0b,0x85,0xc2,0xf0,0x75,0x63,0xed,0x71,0x58);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



