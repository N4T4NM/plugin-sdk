/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

// Audio
#include "rage/audEntity.h"

// Render
#include "rage/grcDrawMode.h"
#include "rage/grcTexture.h"
#include "rage/grcTextureFactory.h"

// Math
#include "rage/Math.h"
#include "rage/Matrix34.h"
#include "rage/Matrix44.h"
#include "rage/Quaternion.h"
#include "rage/Vector2.h"
#include "rage/Vector3.h"
#include "rage/Vector4.h"
#include "rage/Color32.h"
#include "rage/fwRect.h"

// Misc
#include "rage/pgRef.h"
#include "rage/pgDictionary.h"

// Physics
#include "rage/phConstrainedCollider.h"

template<typename T>
T* GetD3DDevice() {
    return *gpatternt(T*, "68 ? ? ? ? 8B 08 68 ? ? ? ? 6A 14", 1);
}

template<typename T>
T GetHWnd() {
    return *gpatternt(T, "A1 ? ? ? ? 85 C0 74 08 57", 1);
}

namespace rage {
    extern int32_t& screenWidth;
    extern int32_t& screenHeight;
    extern uint32_t atStringHash(const char* str, uint32_t initValue = 0);

    extern void grcBindTexture(const rage::grcTexture* tex);
    extern void grcBegin(grcDrawMode dm, int32_t count);
    extern void grcVertex(float x, float y, float z, float nx, float ny, float nz, Color32 const& c, float s, float t);
    extern void grcEnd();
}
