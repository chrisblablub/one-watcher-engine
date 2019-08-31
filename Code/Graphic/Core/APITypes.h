/* 
 * ============================================================
 * Copyright (C) Christian Hamm. All Rights Reserved.
 * ============================================================
 */

#pragma once
#ifndef API_TYPES_H
#define API_TYPES_H

#include <Graphic/GraphicCommon.h>

namespace env
{

    enum PRIMITIVE_TYPE
    {
        PRIMITIVE_TYPE_POINTLIST = 0,
        PRIMITIVE_TYPE_LINELIST,
        PRIMITIVE_TYPE_LINESTRIP,
        PRIMITIVE_TYPE_TRIANGLELIST,
        PRIMITIVE_TYPE_TRIANGLESTRIP,
        PRIMITIVE_TYPE_TRIANGLEFAN
    };

    enum RENDERSTATE_TYPE
    {
        RENDERSTATE_TYPE_ZENABLE = 0,
        RENDERSTATE_TYPE_ZWRITEENABLE,
        RENDERSTATE_TYPE_FILLMODE,
        RENDERSTATE_TYPE_ALPHATESTENABLE,
        RENDERSTATE_TYPE_SRCBLEND,
        RENDERSTATE_TYPE_DESTBLEND,
        RENDERSTATE_TYPE_CULLMODE,
        RENDERSTATE_TYPE_ZFUNC,
        RENDERSTATE_TYPE_ALPHAREF,
        RENDERSTATE_TYPE_ALPHAFUNC,
        RENDERSTATE_TYPE_ALPHABLENDENABLE,
        RENDERSTATE_TYPE_STENCILENABLE,
        RENDERSTATE_TYPE_STENCILFAIL,
        RENDERSTATE_TYPE_STENCILZFAIL,
        RENDERSTATE_TYPE_STENCILPASS,
        RENDERSTATE_TYPE_STENCILFUNC,
        RENDERSTATE_TYPE_STENCILREF,
        RENDERSTATE_TYPE_STENCILREADMASK,
        RENDERSTATE_TYPE_STENCILWRITEMASK,
        RENDERSTATE_TYPE_COLORWRITEENABLE,
        RENDERSTATE_TYPE_BLENDOP,
        RENDERSTATE_TYPE_SCISSORTESTENABLE,
        RENDERSTATE_TYPE_SRGBWRITEENABLE,
        RENDERSTATE_TYPE_SEPARATEALPHABLENDENABLE,
        RENDERSTATE_TYPE_SRCBLENDALPHA,
        RENDERSTATE_TYPE_DESTBLENDALPHA,
        RENDERSTATE_TYPE_BLENDOPALPHA,
        RENDERSTATE_TYPE_END
    };

    enum SAMPLERSTATE_TYPE
    {
        SAMPLERSTATE_TYPE_ADDRESSU = 0,
        SAMPLERSTATE_TYPE_ADDRESSV,
        SAMPLERSTATE_TYPE_ADDRESSW,
        SAMPLERSTATE_TYPE_MAGFILTER,
        SAMPLERSTATE_TYPE_MINFILTER,
        SAMPLERSTATE_TYPE_MIPFILTER,
        SAMPLERSTATE_TYPE_MAXMIPLEVEL,
        SAMPLERSTATE_TYPE_MAXANISOTROPY,
        SAMPLERSTATE_TYPE_SRGBTEXTURE,
        SAMPLERSTATE_TYPE_END
    };

    enum TEXTUREADDRESS_TYPE
    {
        TEXTUREADDRESS_TYPE_WRAP = 0,
        TEXTUREADDRESS_TYPE_MIRROR,
        TEXTUREADDRESS_TYPE_CLAMP,
    };

    enum TEXTUREFILTER_TYPE
    {
        TEXTUREFILTER_TYPE_NONE = 0,
        TEXTUREFILTER_TYPE_POINT,
        TEXTUREFILTER_TYPE_LINEAR,
        TEXTUREFILTER_TYPE_ANISOTROPIC
    };

    enum TEXTUREFORMAT_TYPE
    {
        TEXTUREFORMAT_TYPE_A8R8G8B8 = 0,
        TEXTUREFORMAT_TYPE_X8R8G8B8,
        TEXTUREFORMAT_TYPE_R16F,
        TEXTUREFORMAT_TYPE_R32F,
        TEXTUREFORMAT_TYPE_A16B16G16R16F,
        TEXTUREFORMAT_TYPE_A32B32G32R32F,
        TEXTUREFORMAT_TYPE_R10G10B10A2,
        TEXTUREFORMAT_TYPE_R11G11B10,
        TEXTUREFORMAT_TYPE_INDEX16,
        TEXTUREFORMAT_TYPE_INDEX32,
        TEXTUREFORMAT_TYPE_D24S8
        
    };

    enum BLEND_TYPE
    {
        BLEND_TYPE_ZERO = 0,
        BLEND_TYPE_ONE,
        BLEND_TYPE_SRC_COLOR,
        BLEND_TYPE_INV_SRC_COLOR,
        BLEND_TYPE_SRC_ALPHA,
        BLEND_TYPE_INV_SRC_ALPHA,
        BLEND_TYPE_DEST_ALPHA,
        BLEND_TYPE_INV_DEST_ALPHA,
        BLEND_TYPE_DEST_COLOR,
        BLEND_TYPE_INV_DEST_COLOR
    };

    enum BLENDOP_TYPE
    {
        BLENDOP_TYPE_ADD = 0,
        BLENDOP_TYPE_SUBTRACT,
        BLENDOP_TYPE_REVSUBTRACT,
        BLENDOP_TYPE_MIN,
        BLENDOP_TYPE_MAX
    };

    enum FILLMODE_TYPE
    {
        FILLMODE_TYPE_SOLID = 0,
        FILLMODE_TYPE_WIREFRAME
    };

    enum CULLMODE_TYPE
    {
        CULLMODE_TYPE_NONE = 0,
        CULLMODE_TYPE_FRONT,
        CULLMODE_TYPE_BACK
    };

    enum STENCILOP_TYPE
    {
        STENCILOP_TYPE_KEEP = 0,
        STENCILOP_TYPE_ZERO,
        STENCILOP_TYPE_REPLACE,
        STENCILOP_TYPE_INCR_SAT,
        STENCILOP_TYPE_DECR_SAT,
        STENCILOP_TYPE_INVERT,
        STENCILOP_TYPE_INCR,
        STENCILOP_TYPE_DECR
    };

    enum COMPARISON_TYPE
    {
        COMPARISON_TYPE_LESS = 0,
        COMPARISON_TYPE_LESSEQUAL,
        COMPARISON_TYPE_GREATER,
        COMPARISON_TYPE_GREATEREQUAL,
        COMPARISON_TYPE_NOTEQUAL,
        COMPARISON_TYPE_EQUAL,
        COMPARISON_TYPE_ALWAYS
    };

    enum MEMORY_TYPE
    {
        MEMORY_TYPE_DEFAULT = 0,
        MEMORY_TYPE_MANAGED,
        MEMORY_TYPE_SYSTEMMEM
    };

    enum TRANSFORM_TYPE
    {
        TRANSFORM_TYPE_VIEW = 0,
        TRANSFORM_TYPE_PROJECTION,
        TRANSFORM_TYPE_WORLD
    };

    enum ERROR_TYPE
    {
        ERROR_TYPE_OK = 0,
        ERROR_TYPE_DEVICELOST,
        ERROR_TYPE_DRIVERINTERNALERROR,
        ERROR_TYPE_DEVICENOTRESET
    };


// #define USAGE_TYPE_RENDERTARGET       (0x00000001L)
// #define USAGE_TYPE_DYNAMIC            (0x00000200L)
// #define	USAGE_TYPE_AUTOGENMIPMAP      (0x00000400L)
// #define USAGE_TYPE_WRITEONLY          (0x00000008L)

    enum USAGE_TYPE
    {
        USAGE_TYPE_CPUREADACCESS = 1,
        USAGE_TYPE_CPUWRITEACCESS = 2,
        USAGE_TYPE_GPUREADACCESS = 4,
        USAGE_TYPE_GPUWRITEACCESS = 8,

        USAGE_TYPE_VERTEXINDEXBUFFERS = USAGE_TYPE_CPUWRITEACCESS | USAGE_TYPE_GPUREADACCESS,
    };

#define LOCK_TYPE_READ                ((unsigned long)(1 << 1))
#define LOCK_TYPE_WRITE               ((unsigned long)(1 << 2))
#define LOCK_TYPE_WRITEDISCARD        ((unsigned long)(1 << 3))

#define CLEAR_TYPE_TARGET             (0x00000001l)
#define CLEAR_TYPE_ZBUFFER            (0x00000002l)  
#define CLEAR_TYPE_STENCIL            (0x00000004l)

} // env

#endif // API_TYPES_H