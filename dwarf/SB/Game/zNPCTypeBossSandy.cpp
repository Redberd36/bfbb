/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
static float sSinTable[16]; // size: 0x40, address: 0x5E1E80
static unsigned char sUseBossCam; // size: 0x1, address: 0x50F0B8
static unsigned char sWasUsingBossCam; // size: 0x1, address: 0x50F0BC
static unsigned char sOthersHaventBeenAdded; // size: 0x1, address: 0x510114
static unsigned char sPCWasBubbleBouncing; // size: 0x1, address: 0x510118
static float sPCHeightDiff; // size: 0x4, address: 0x50F0C0
static float sHeadPopOffFactor; // size: 0x4, address: 0x50F0C4
static float sRadiusOfRing; // size: 0x4, address: 0x51011C
static float sElbowDropTimer; // size: 0x4, address: 0x510120
static float sChaseTimer; // size: 0x4, address: 0x510124
static signed int sNumAttacks; // size: 0x4, address: 0x510128
static signed int sDidClothesline; // size: 0x4, address: 0x51012C
static float sElbowDropThreshold; // size: 0x4, address: 0x510130
static class SandyLimbSpring sLeftArmSpring; // size: 0x14, address: 0x5E1EC0
static class SandyLimbSpring sRightArmSpring; // size: 0x14, address: 0x5E1EE0
static class SandyLimbSpring sLeftLegSpring; // size: 0x14, address: 0x5E1F00
static class SandyLimbSpring sRightLegSpring; // size: 0x14, address: 0x5E1F20
static class zNPCBSandy * sSandyPtr; // size: 0x4, address: 0x510134
static class xVec3 * sCamSubTarget; // size: 0x4, address: 0x510138
static class xVec3 sCamSubTargetFixed; // size: 0xC, address: 0x0
static float sCurrYaw; // size: 0x4, address: 0x51013C
static float sCurrHeight; // size: 0x4, address: 0x510140
static float sCurrRadius; // size: 0x4, address: 0x510144
static float sCurrPitch; // size: 0x4, address: 0x510148
static float sCurrYawOffset; // size: 0x4, address: 0x0
static float sCurrCamInterp; // size: 0x4, address: 0x0
static signed int sBone[13]; // size: 0x34, address: 0x4E0810
static signed int sPreLeftHandBone; // size: 0x4, address: 0x0
static signed int sLeftHandBones[4]; // size: 0x10, address: 0x4E0850
static signed int sPreRightHandBone; // size: 0x4, address: 0x0
static signed int sRightHandBones[4]; // size: 0x10, address: 0x4E0860
static signed int sPreLeftFootBone; // size: 0x4, address: 0x0
static signed int sLeftFootBones[2]; // size: 0x8, address: 0x50F0C8
static signed int sPreRightFootBone; // size: 0x4, address: 0x0
static signed int sRightFootBones[2]; // size: 0x8, address: 0x50F0D0
static float sBoundRadius[13]; // size: 0x34, address: 0x4E0870
static class xVec3 sBoneOffset[13]; // size: 0x9C, address: 0x4E08B0
static char * sNFSoundLabel[30]; // size: 0x78, address: 0x4E0950
static unsigned int sNFSoundValue[30]; // size: 0x78, address: 0x5E1F40
static unsigned int sCurrNFSound; // size: 0x4, address: 0x51014C
static class tweak_callback newsfish_cb; // size: 0x28, address: 0x0
static class tweak_callback shockwave_cb; // size: 0x28, address: 0x0
static class BossDamageEffectRecord BDErecord[4]; // size: 0x420, address: 0x5E1FC0
struct /* @anon10 */ {
    // total size: 0x34
} __vt__28zNPCGoalBossSandyClothesline; // size: 0x34, address: 0x50C980
class zGlobals globals; // size: 0x2050, address: 0x52C8F0
unsigned int g_hash_bossanim[78]; // size: 0x138, address: 0x5DE220
class xQCControl xqc_def_ctrl; // size: 0x3C, address: 0x5A1710
class xGrid colls_grid; // size: 0x34, address: 0x5CEBD0
class xGrid colls_oso_grid; // size: 0x34, address: 0x5CEC10
enum _CurrentPlayer gCurrentPlayer; // size: 0x4, address: 0x50F3EC
class tagiRenderArrays gRenderArr; // size: 0x5280, address: 0x533950
class NPCSndTrax g_sndTrax_BossSandy[]; // size: 0x0, address: 0x5CFA18
signed int clotheslineCB(class xGoal *, void *, enum en_trantype *, float, void *); // size: 0x0, address: 0x330480
signed int runToRopeCB(class xGoal *, void *, enum en_trantype *, float, void *); // size: 0x0, address: 0x330590
signed int getUpCB(class xGoal *, void *, enum en_trantype *, float, void *); // size: 0x0, address: 0x330660
signed int sitCB(class xGoal *, void *, enum en_trantype *, float, void *); // size: 0x0, address: 0x330810
signed int leapCB(class xGoal *, void *, enum en_trantype *, float, void *); // size: 0x0, address: 0x330950
signed int elbowDropCB(class xGoal *, void *, enum en_trantype *, float, void *); // size: 0x0, address: 0x330A10
signed int noHeadCB(class xGoal *, void *, enum en_trantype *, float, void *); // size: 0x0, address: 0x330B90
signed int meleeCB(class xGoal *, void *, enum en_trantype *, float, void *); // size: 0x0, address: 0x330C30
signed int chaseCB(class xGoal *, void *, enum en_trantype *, float, void *); // size: 0x0, address: 0x330EB0
signed int tauntCB(class xGoal *, void *, enum en_trantype *, float, void *); // size: 0x0, address: 0x331210
signed int idleCB(class xGoal *, void *, enum en_trantype *, float, void *); // size: 0x0, address: 0x331360
unsigned int gActiveHeap; // size: 0x4, address: 0x50FA44
signed int BoundEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *); // size: 0x0, address: 0x333580
unsigned int HeadNotShocked(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x336990
unsigned int HeadIsShocked(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x3369B0
void xAnimDefaultBeforeEnter(class xAnimPlay *, class xAnimState *); // size: 0x0, address: 0x213A90
unsigned int HeadNotCarried(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x3369C0
unsigned int HeadIsCarried(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x3369E0
char * g_strz_bossanim[78]; // size: 0x138, address: 0x4E0580
struct /* @anon6 */ {
    // total size: 0x34
} __vt__26zNPCGoalBossSandyRunToRope; // size: 0x34, address: 0x50C9C0
struct /* @anon2 */ {
    // total size: 0x34
} __vt__22zNPCGoalBossSandyGetUp; // size: 0x34, address: 0x50CA00
struct /* @anon11 */ {
    // total size: 0x34
} __vt__20zNPCGoalBossSandySit; // size: 0x34, address: 0x50CA40
struct /* @anon7 */ {
    // total size: 0x34
} __vt__21zNPCGoalBossSandyLeap; // size: 0x34, address: 0x50CA80
struct /* @anon1 */ {
    // total size: 0x34
} __vt__26zNPCGoalBossSandyElbowDrop; // size: 0x34, address: 0x50CAC0
struct /* @anon9 */ {
    // total size: 0x34
} __vt__23zNPCGoalBossSandyNoHead; // size: 0x34, address: 0x50CB00
struct /* @anon3 */ {
    // total size: 0x34
} __vt__22zNPCGoalBossSandyMelee; // size: 0x34, address: 0x50CB40
struct /* @anon0 */ {
    // total size: 0x34
} __vt__22zNPCGoalBossSandyChase; // size: 0x34, address: 0x50CB80
struct /* @anon8 */ {
    // total size: 0x34
} __vt__22zNPCGoalBossSandyTaunt; // size: 0x34, address: 0x50CBC0
struct /* @anon4 */ {
    // total size: 0x34
} __vt__21zNPCGoalBossSandyIdle; // size: 0x34, address: 0x50CC00
struct /* @anon5 */ {
    // total size: 0xD8
} __vt__10zNPCBSandy; // size: 0xD8, address: 0x50CC40
class xMarkerAsset {
    // total size: 0xC
public:
    class xVec3 pos; // offset 0x0, size 0xC
};
class xModelInstance {
    // total size: 0x6C
public:
    class xModelInstance * Next; // offset 0x0, size 0x4
    class xModelInstance * Parent; // offset 0x4, size 0x4
    class xModelPool * Pool; // offset 0x8, size 0x4
    class xAnimPlay * Anim; // offset 0xC, size 0x4
    class RpAtomic * Data; // offset 0x10, size 0x4
    unsigned int PipeFlags; // offset 0x14, size 0x4
    float RedMultiplier; // offset 0x18, size 0x4
    float GreenMultiplier; // offset 0x1C, size 0x4
    float BlueMultiplier; // offset 0x20, size 0x4
    float Alpha; // offset 0x24, size 0x4
    float FadeStart; // offset 0x28, size 0x4
    float FadeEnd; // offset 0x2C, size 0x4
    class xSurface * Surf; // offset 0x30, size 0x4
    class xModelBucket * * Bucket; // offset 0x34, size 0x4
    class xModelInstance * BucketNext; // offset 0x38, size 0x4
    class xLightKit * LightKit; // offset 0x3C, size 0x4
    void * Object; // offset 0x40, size 0x4
    unsigned short Flags; // offset 0x44, size 0x2
    unsigned char BoneCount; // offset 0x46, size 0x1
    unsigned char BoneIndex; // offset 0x47, size 0x1
    unsigned char * BoneRemap; // offset 0x48, size 0x4
    class RwMatrixTag * Mat; // offset 0x4C, size 0x4
    class xVec3 Scale; // offset 0x50, size 0xC
    unsigned int modelID; // offset 0x5C, size 0x4
    unsigned int shadowID; // offset 0x60, size 0x4
    class RpAtomic * shadowmapAtomic; // offset 0x64, size 0x4
    class /* @class */ {
        // total size: 0x4
    public:
        class xVec3 * verts; // offset 0x0, size 0x4
    } anim_coll; // offset 0x68, size 0x4
};
class RwMatrixTag {
    // total size: 0x40
public:
    class RwV3d right; // offset 0x0, size 0xC
    unsigned int flags; // offset 0xC, size 0x4
    class RwV3d up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class RwV3d at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
    class RwV3d pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
class RwLLLink {
    // total size: 0x8
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
class xGoal : public xListItem, public xFactoryInst {
    // total size: 0x3C
public:
    class xPsyche * psyche; // offset 0x18, size 0x4
    signed int goalID; // offset 0x1C, size 0x4
    enum en_GOALSTATE stat; // offset 0x20, size 0x4
    signed int flg_able; // offset 0x24, size 0x4
    signed int (* fun_process)(class xGoal *, void *, enum en_trantype *, float, void *); // offset 0x28, size 0x4
    signed int (* fun_precalc)(class xGoal *, void *, float, void *); // offset 0x2C, size 0x4
    signed int (* fun_chkRule)(class xGoal *, void *, enum en_trantype *, float, void *); // offset 0x30, size 0x4
    void * cbdata; // offset 0x34, size 0x4
};
class iEnv {
    // total size: 0x30
public:
    class RpWorld * world; // offset 0x0, size 0x4
    class RpWorld * collision; // offset 0x4, size 0x4
    class RpWorld * fx; // offset 0x8, size 0x4
    class RpWorld * camera; // offset 0xC, size 0x4
    class xJSPHeader * jsp; // offset 0x10, size 0x4
    class RpLight * light[2]; // offset 0x14, size 0x8
    class RwFrame * light_frame[2]; // offset 0x1C, size 0x8
    signed int memlvl; // offset 0x24, size 0x4
};
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};
class zNPCBSandy : public zNPCBoss {
    // total size: 0xE60
public:
    class xEnt * * boundList; // offset 0x2B4, size 0x4
    unsigned int * boundFlags; // offset 0x2B8, size 0x4
    float * boundEmitTimer; // offset 0x2BC, size 0x4
    unsigned int bossFlags; // offset 0x2C0, size 0x4
    class xVec3 currDir; // offset 0x2C4, size 0xC
    float currVel; // offset 0x2D0, size 0x4
    signed int hitPoints; // offset 0x2D4, size 0x4
    signed int round; // offset 0x2D8, size 0x4
    class xVec3 ringCorner[8]; // offset 0x2DC, size 0x60
    class xVec3 ringEdgeCenter[8]; // offset 0x33C, size 0x60
    class xVec3 ropeNormal[8]; // offset 0x39C, size 0x60
    class xVec3 bouncePoint[8]; // offset 0x3FC, size 0x60
    class xEnt * ropeObject[8][4]; // offset 0x45C, size 0x80
    class xEnt * ropeObjectLo[8]; // offset 0x4DC, size 0x20
    class xEnt * ropeSb; // offset 0x4FC, size 0x4
    class xEnt * ropeSbDamaged; // offset 0x500, size 0x4
    class xEnt * turnbuckle[8]; // offset 0x504, size 0x20
    float edgeAlpha[8]; // offset 0x524, size 0x20
    float scoreboardAlpha; // offset 0x544, size 0x4
    signed int fromRope; // offset 0x548, size 0x4
    signed int toRope; // offset 0x54C, size 0x4
    float limbLength; // offset 0x550, size 0x4
    class RwRaster * helmetRaster; // offset 0x554, size 0x4
    class RwRaster * feetRaster; // offset 0x558, size 0x4
    class RwRaster * targetRaster; // offset 0x55C, size 0x4
    class RxObjSpace3DVertex iconVert[4]; // offset 0x560, size 0x90
    class xVec3 targetPos; // offset 0x5F0, size 0xC
    class xQuat qHead; // offset 0x600, size 0x10
    class xQuat qBoulder; // offset 0x610, size 0x10
    class xVec3 pHead; // offset 0x620, size 0xC
    class xVec3 pBoulder; // offset 0x62C, size 0xC
    float magnetizeTime; // offset 0x638, size 0x4
    class xVec3 shockPos; // offset 0x63C, size 0xC
    class xParEmitterCustomSettings dustEddieSetting; // offset 0x648, size 0x16C
    class zParEmitter * dustEddieEmitter; // offset 0x7B4, size 0x4
    class zParEmitter * shockwaveEmitter; // offset 0x7B8, size 0x4
    class xEnt * hangingScoreboard; // offset 0x7BC, size 0x4
    class xEnt * bustedScoreboard; // offset 0x7C0, size 0x4
    class xEnt * crashedScoreboard; // offset 0x7C4, size 0x4
    class xEntBoulder * headBoulder; // offset 0x7C8, size 0x4
    class zShrapnelAsset * scoreboardShrap; // offset 0x7CC, size 0x4
    class zShrapnelAsset * sboardSecondShrap; // offset 0x7D0, size 0x4
    class zShrapnelAsset * sboardThirdShrap; // offset 0x7D4, size 0x4
    class zShrapnelAsset * lightRigShrap; // offset 0x7D8, size 0x4
    class xEnt * lightRig[4]; // offset 0x7DC, size 0x10
    class zCutsceneMgr * round1Csn; // offset 0x7EC, size 0x4
    class zCutsceneMgr * round2Csn; // offset 0x7F0, size 0x4
    class zCutsceneMgr * round3Csn; // offset 0x7F4, size 0x4
    float csnTimer; // offset 0x7F8, size 0x4
    class _tagLightningAdd sparks[6]; // offset 0x7FC, size 0x180
    class zLightning * wireLight[2]; // offset 0x97C, size 0x8
    class xVec3 endPoints[4][2]; // offset 0x984, size 0x60
    class xMat4x3 sparkTransform[2][2]; // offset 0x9F0, size 0x100
    float timeToNextBolt[2]; // offset 0xAF0, size 0x8
    float maxLightningWait[2]; // offset 0xAF8, size 0x8
    unsigned int springSndID; // offset 0xB00, size 0x4
    unsigned int ambientSndID; // offset 0xB04, size 0x4
    float jawTime; // offset 0xB08, size 0x4
    float jawLevel; // offset 0xB0C, size 0x4
    float jawThreshold; // offset 0xB10, size 0x4
    void * jawData; // offset 0xB14, size 0x4
    signed int isBeat; // offset 0xB18, size 0x4
    class xVec3 laserPoint[16]; // offset 0xB1C, size 0xC0
    class xFXRibbon laserShow; // offset 0xBDC, size 0x140
    class curve_node curveNode[2]; // offset 0xD1C, size 0x18
    float curveNodeAlpha; // offset 0xD34, size 0x4
    float curveNodeR; // offset 0xD38, size 0x4
    float curveNodeG; // offset 0xD3C, size 0x4
    float curveNodeB; // offset 0xD40, size 0x4
    class zNPCNewsFish * newsfish; // offset 0xD44, size 0x4
    unsigned int nfFlags; // offset 0xD48, size 0x4
    float shockRadius; // offset 0xD4C, size 0x4
    float shockwaveGrowthRate; // offset 0xD50, size 0x4
    float shockwaveMaxRadius; // offset 0xD54, size 0x4
    float edropTurnMinTime; // offset 0xD58, size 0x4
    float edropShockwaveTime; // offset 0xD5C, size 0x4
    signed int firstTimeR1Csn; // offset 0xD60, size 0x4
    signed int firstUpdate; // offset 0xD64, size 0x4
    class zEntPickup * underwear[3]; // offset 0xD68, size 0xC
    class xBinaryCamera bossCam; // offset 0xD80, size 0x70
    class xBinaryCamera specialBossCam; // offset 0xDF0, size 0x70
};
class xEnt : public xBase {
    // total size: 0xD0
public:
    class xEntAsset * asset; // offset 0x10, size 0x4
    unsigned short idx; // offset 0x14, size 0x2
    unsigned short num_updates; // offset 0x16, size 0x2
    unsigned char flags; // offset 0x18, size 0x1
    unsigned char miscflags; // offset 0x19, size 0x1
    unsigned char subType; // offset 0x1A, size 0x1
    unsigned char pflags; // offset 0x1B, size 0x1
    unsigned char moreFlags; // offset 0x1C, size 0x1
    unsigned char isCulled; // offset 0x1D, size 0x1
    unsigned char driving_count; // offset 0x1E, size 0x1
    unsigned char num_ffx; // offset 0x1F, size 0x1
    unsigned char collType; // offset 0x20, size 0x1
    unsigned char collLev; // offset 0x21, size 0x1
    unsigned char chkby; // offset 0x22, size 0x1
    unsigned char penby; // offset 0x23, size 0x1
    class xModelInstance * model; // offset 0x24, size 0x4
    class xModelInstance * collModel; // offset 0x28, size 0x4
    class xModelInstance * camcollModel; // offset 0x2C, size 0x4
    class xLightKit * lightKit; // offset 0x30, size 0x4
    void (* update)(class xEnt *, class xScene *, float); // offset 0x34, size 0x4
    void (* endUpdate)(class xEnt *, class xScene *, float); // offset 0x38, size 0x4
    void (* bupdate)(class xEnt *, class xVec3 *); // offset 0x3C, size 0x4
    void (* move)(class xEnt *, class xScene *, float, class xEntFrame *); // offset 0x40, size 0x4
    void (* render)(class xEnt *); // offset 0x44, size 0x4
    class xEntFrame * frame; // offset 0x48, size 0x4
    class xEntCollis * collis; // offset 0x4C, size 0x4
    class xGridBound gridb; // offset 0x50, size 0x14
    class xBound bound; // offset 0x64, size 0x4C
    void (* transl)(class xEnt *, class xVec3 *, class xMat4x3 *); // offset 0xB0, size 0x4
    class xFFX * ffx; // offset 0xB4, size 0x4
    class xEnt * driver; // offset 0xB8, size 0x4
    signed int driveMode; // offset 0xBC, size 0x4
    class xShadowSimpleCache * simpShadow; // offset 0xC0, size 0x4
    class xEntShadow * entShadow; // offset 0xC4, size 0x4
    class anim_coll_data * anim_coll; // offset 0xC8, size 0x4
    void * user_data; // offset 0xCC, size 0x4
};
class zFragLightning {
    // total size: 0x10
public:
    class zFragLightningAsset * fasset; // offset 0x0, size 0x4
    class xModelInstance * startParent; // offset 0x4, size 0x4
    class xModelInstance * endParent; // offset 0x8, size 0x4
    class zLightning * lightning; // offset 0xC, size 0x4
};
class RwCamera {
    // total size: 0x190
public:
    class RwObjectHasFrame object; // offset 0x0, size 0x14
    enum RwCameraProjection projectionType; // offset 0x14, size 0x4
    class RwCamera * (* beginUpdate)(class RwCamera *); // offset 0x18, size 0x4
    class RwCamera * (* endUpdate)(class RwCamera *); // offset 0x1C, size 0x4
    class RwMatrixTag viewMatrix; // offset 0x20, size 0x40
    class RwRaster * frameBuffer; // offset 0x60, size 0x4
    class RwRaster * zBuffer; // offset 0x64, size 0x4
    class RwV2d viewWindow; // offset 0x68, size 0x8
    class RwV2d recipViewWindow; // offset 0x70, size 0x8
    class RwV2d viewOffset; // offset 0x78, size 0x8
    float nearPlane; // offset 0x80, size 0x4
    float farPlane; // offset 0x84, size 0x4
    float fogPlane; // offset 0x88, size 0x4
    float zScale; // offset 0x8C, size 0x4
    float zShift; // offset 0x90, size 0x4
    class RwFrustumPlane frustumPlanes[6]; // offset 0x94, size 0x78
    class RwBBox frustumBoundBox; // offset 0x10C, size 0x18
    class RwV3d frustumCorners[8]; // offset 0x124, size 0x60
};
class _zPortal : public xBase {
    // total size: 0x14
public:
    class xPortalAsset * passet; // offset 0x10, size 0x4
};
class xQCControl {
    // total size: 0x3C
public:
    float world_xmin; // offset 0x0, size 0x4
    float world_ymin; // offset 0x4, size 0x4
    float world_zmin; // offset 0x8, size 0x4
    float world_xmax; // offset 0xC, size 0x4
    float world_ymax; // offset 0x10, size 0x4
    float world_zmax; // offset 0x14, size 0x4
    float world_xsz; // offset 0x18, size 0x4
    float world_ysz; // offset 0x1C, size 0x4
    float world_zsz; // offset 0x20, size 0x4
    float scale_x; // offset 0x24, size 0x4
    float scale_y; // offset 0x28, size 0x4
    float scale_z; // offset 0x2C, size 0x4
    float center_x; // offset 0x30, size 0x4
    float center_y; // offset 0x34, size 0x4
    float center_z; // offset 0x38, size 0x4
};
class xCutsceneZbufferHack {
    // total size: 0x44
public:
    char * name; // offset 0x0, size 0x4
    class xCutsceneZbuffer times[4]; // offset 0x4, size 0x40
};
class xVec3 {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class xBase {
    // total size: 0x10
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    class xLinkAsset * link; // offset 0x8, size 0x4
    signed int (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *); // offset 0xC, size 0x4
};
class xParEmitter : public xBase {
    // total size: 0x78
public:
    class xParEmitterAsset * tasset; // offset 0x10, size 0x4
    class xParGroup * group; // offset 0x14, size 0x4
    class xParEmitterPropsAsset * prop; // offset 0x18, size 0x4
    unsigned char rate_mode; // offset 0x1C, size 0x1
    float rate; // offset 0x20, size 0x4
    float rate_time; // offset 0x24, size 0x4
    float rate_fraction; // offset 0x28, size 0x4
    float rate_fraction_cull; // offset 0x2C, size 0x4
    unsigned char emit_flags; // offset 0x30, size 0x1
    unsigned char emit_pad[3]; // offset 0x31, size 0x3
    unsigned char rot[3]; // offset 0x34, size 0x3
    class xModelTag tag; // offset 0x38, size 0x20
    float oocull_distance_sqr; // offset 0x58, size 0x4
    float distance_to_cull_sqr; // offset 0x5C, size 0x4
    void * attachTo; // offset 0x60, size 0x4
    class xParSys * parSys; // offset 0x64, size 0x4
    void * emit_volume; // offset 0x68, size 0x4
    class xVec3 last_attach_loc; // offset 0x6C, size 0xC
};
class zone_data {
    // total size: 0xC
public:
    float distance; // offset 0x0, size 0x4
    float height; // offset 0x4, size 0x4
    float height_focus; // offset 0x8, size 0x4
};
class zNPCVillager : public zNPCCommon {
    // total size: 0x2B0
public:
    class HiThere hithere; // offset 0x2A0, size 0x8
    class ztaskbox * converse; // offset 0x2A8, size 0x4
    signed int current_talk_anim; // offset 0x2AC, size 0x4
};
class /* @class */ {
    // total size: 0x4
public:
    unsigned char enabled : 8; // offset 0x0, size 0x1
    unsigned int dummy : 24; // offset 0x0, size 0x4
};
class zFragBone {
    // total size: 0x10
public:
    signed int index; // offset 0x0, size 0x4
    class xVec3 offset; // offset 0x4, size 0xC
};
class RwTexture {
    // total size: 0x58
public:
    class RwRaster * raster; // offset 0x0, size 0x4
    class RwTexDictionary * dict; // offset 0x4, size 0x4
    class RwLLLink lInDictionary; // offset 0x8, size 0x8
    char name[32]; // offset 0x10, size 0x20
    char mask[32]; // offset 0x30, size 0x20
    unsigned int filterAddressing; // offset 0x50, size 0x4
    signed int refCount; // offset 0x54, size 0x4
};
class xMemPool {
    // total size: 0x1C
public:
    void * FreeList; // offset 0x0, size 0x4
    unsigned short NextOffset; // offset 0x4, size 0x2
    unsigned short Flags; // offset 0x6, size 0x2
    void * UsedList; // offset 0x8, size 0x4
    void (* InitCB)(class xMemPool *, void *); // offset 0xC, size 0x4
    void * Buffer; // offset 0x10, size 0x4
    unsigned short Size; // offset 0x14, size 0x2
    unsigned short NumRealloc; // offset 0x16, size 0x2
    unsigned int Total; // offset 0x18, size 0x4
};
enum en_trantype {
    GOAL_TRAN_NONE = 0,
    GOAL_TRAN_SET = 1,
    GOAL_TRAN_PUSH = 2,
    GOAL_TRAN_POP = 3,
    GOAL_TRAN_POPTO = 4,
    GOAL_TRAN_POPALL = 5,
    GOAL_TRAN_POPBASE = 6,
    GOAL_TRAN_POPSAFE = 7,
    GOAL_TRAN_SWAP = 8,
    GOAL_TRAN_NOMORE = 9,
    GOAL_TRAN_FORCE = 2147483647,
};
class RpWorld {
    // total size: 0x70
public:
    class RwObject object; // offset 0x0, size 0x8
    unsigned int flags; // offset 0x8, size 0x4
    enum RpWorldRenderOrder renderOrder; // offset 0xC, size 0x4
    class RpMaterialList matList; // offset 0x10, size 0xC
    class RpSector * rootSector; // offset 0x1C, size 0x4
    signed int numTexCoordSets; // offset 0x20, size 0x4
    signed int numClumpsInWorld; // offset 0x24, size 0x4
    class RwLLLink * currentClumpLink; // offset 0x28, size 0x4
    class RwLinkList clumpList; // offset 0x2C, size 0x8
    class RwLinkList lightList; // offset 0x34, size 0x8
    class RwLinkList directionalLightList; // offset 0x3C, size 0x8
    class RwV3d worldOrigin; // offset 0x44, size 0xC
    class RwBBox boundingBox; // offset 0x50, size 0x18
    class RpWorldSector * (* renderCallBack)(class RpWorldSector *); // offset 0x68, size 0x4
    class RxPipeline * pipeline; // offset 0x6C, size 0x4
};
class _tagPadAnalog {
    // total size: 0x2
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
};
class curve_node {
    // total size: 0xC
public:
    float time; // offset 0x0, size 0x4
    class iColor_tag color; // offset 0x4, size 0x4
    float scale; // offset 0x8, size 0x4
};
class zFragLightningAsset : public zFragAsset {
    // total size: 0x68
public:
    class zFragLocation start; // offset 0x18, size 0x24
    class zFragLocation end; // offset 0x3C, size 0x24
    unsigned int startParentID; // offset 0x60, size 0x4
    unsigned int endParentID; // offset 0x64, size 0x4
};
class RxNodeMethods {
    // total size: 0x1C
public:
    signed int (* nodeBody)(class RxPipelineNode *, class RxPipelineNodeParam *); // offset 0x0, size 0x4
    signed int (* nodeInit)(class RxNodeDefinition *); // offset 0x4, size 0x4
    void (* nodeTerm)(class RxNodeDefinition *); // offset 0x8, size 0x4
    signed int (* pipelineNodeInit)(class RxPipelineNode *); // offset 0xC, size 0x4
    void (* pipelineNodeTerm)(class RxPipelineNode *); // offset 0x10, size 0x4
    signed int (* pipelineNodeConfig)(class RxPipelineNode *, class RxPipeline *); // offset 0x14, size 0x4
    unsigned int (* configMsgHandler)(class RxPipelineNode *, unsigned int, unsigned int, void *); // offset 0x18, size 0x4
};
class xAnimState {
    // total size: 0x4C
public:
    class xAnimState * Next; // offset 0x0, size 0x4
    char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int Flags; // offset 0xC, size 0x4
    unsigned int UserFlags; // offset 0x10, size 0x4
    float Speed; // offset 0x14, size 0x4
    class xAnimFile * Data; // offset 0x18, size 0x4
    class xAnimEffect * Effects; // offset 0x1C, size 0x4
    class xAnimTransitionList * Default; // offset 0x20, size 0x4
    class xAnimTransitionList * List; // offset 0x24, size 0x4
    float * BoneBlend; // offset 0x28, size 0x4
    float * TimeSnap; // offset 0x2C, size 0x4
    float FadeRecip; // offset 0x30, size 0x4
    unsigned short * FadeOffset; // offset 0x34, size 0x4
    void * CallbackData; // offset 0x38, size 0x4
    class xAnimMultiFile * MultiFile; // offset 0x3C, size 0x4
    void (* BeforeEnter)(class xAnimPlay *, class xAnimState *); // offset 0x40, size 0x4
    void (* StateCallback)(class xAnimState *, class xAnimSingle *, void *); // offset 0x44, size 0x4
    void (* BeforeAnimMatrices)(class xAnimPlay *, class xQuat *, class xVec3 *, signed int); // offset 0x48, size 0x4
};
class xAnimMultiFileEntry {
    // total size: 0x8
public:
    unsigned int ID; // offset 0x0, size 0x4
    class xAnimFile * File; // offset 0x4, size 0x4
};
class xAnimActiveEffect {
    // total size: 0x8
public:
    class xAnimEffect * Effect; // offset 0x0, size 0x4
    unsigned int Handle; // offset 0x4, size 0x4
};
class RwFrame {
    // total size: 0xB0
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink inDirtyListLink; // offset 0x8, size 0x8
    class RwMatrixTag modelling; // offset 0x10, size 0x40
    class RwMatrixTag ltm; // offset 0x50, size 0x40
    class RwLinkList objectList; // offset 0x90, size 0x8
    class RwFrame * child; // offset 0x98, size 0x4
    class RwFrame * next; // offset 0x9C, size 0x4
    class RwFrame * root; // offset 0xA0, size 0x4
};
class RxPipelineCluster {
    // total size: 0x8
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
class RxOutputSpec {
    // total size: 0xC
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
class xEntCollis {
    // total size: 0x5B4
public:
    unsigned char chk; // offset 0x0, size 0x1
    unsigned char pen; // offset 0x1, size 0x1
    unsigned char env_sidx; // offset 0x2, size 0x1
    unsigned char env_eidx; // offset 0x3, size 0x1
    unsigned char npc_sidx; // offset 0x4, size 0x1
    unsigned char npc_eidx; // offset 0x5, size 0x1
    unsigned char dyn_sidx; // offset 0x6, size 0x1
    unsigned char dyn_eidx; // offset 0x7, size 0x1
    unsigned char stat_sidx; // offset 0x8, size 0x1
    unsigned char stat_eidx; // offset 0x9, size 0x1
    unsigned char idx; // offset 0xA, size 0x1
    class xCollis colls[18]; // offset 0xC, size 0x5A0
    void (* post)(class xEnt *, class xScene *, float, class xEntCollis *); // offset 0x5AC, size 0x4
    unsigned int (* depenq)(class xEnt *, class xEnt *, class xScene *, float, class xCollis *); // offset 0x5B0, size 0x4
};
class tweak_info {
    // total size: 0x28
public:
    class substr name; // offset 0x0, size 0x8
    void * value; // offset 0x8, size 0x4
    class tweak_callback * cb; // offset 0xC, size 0x4
    void * context; // offset 0x10, size 0x4
    unsigned char type; // offset 0x14, size 0x1
    unsigned char value_size; // offset 0x15, size 0x1
    unsigned short flags; // offset 0x16, size 0x2
    union { // inferred
        class /* @class */ {
            // total size: 0xC
        public:
            signed int value_def; // offset 0x0, size 0x4
            signed int value_min; // offset 0x4, size 0x4
            signed int value_max; // offset 0x8, size 0x4
        } int_context; // offset 0x18, size 0xC
        class /* @class */ {
            // total size: 0xC
        public:
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int value_min; // offset 0x4, size 0x4
            unsigned int value_max; // offset 0x8, size 0x4
        } uint_context; // offset 0x18, size 0xC
        class /* @class */ {
            // total size: 0xC
        public:
            float value_def; // offset 0x0, size 0x4
            float value_min; // offset 0x4, size 0x4
            float value_max; // offset 0x8, size 0x4
        } float_context; // offset 0x18, size 0xC
        class /* @class */ {
            // total size: 0x1
        public:
            unsigned char value_def; // offset 0x0, size 0x1
        } bool_context; // offset 0x18, size 0x1
        class /* @class */ {
            // total size: 0x10
        public:
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int labels_size; // offset 0x4, size 0x4
            char * * labels; // offset 0x8, size 0x4
            void * values; // offset 0xC, size 0x4
        } select_context; // offset 0x18, size 0x10
        class /* @class */ {
            // total size: 0x8
        public:
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int mask; // offset 0x4, size 0x4
        } flag_context; // offset 0x18, size 0x8
        class /* @class */ {
            // total size: 0x10
        public:
            unsigned char pad[16]; // offset 0x0, size 0x10
        } all_context; // offset 0x18, size 0x10
    };
};
class zNPCGoalBossSandySit : public zNPCGoalCommon {
    // total size: 0x58
public:
    float timeInGoal; // offset 0x4C, size 0x4
    float totalTime; // offset 0x50, size 0x4
    unsigned int sitFlags; // offset 0x54, size 0x4
};
class xPortalAsset : public xBaseAsset {
    // total size: 0x18
public:
    unsigned int assetCameraID; // offset 0x8, size 0x4
    unsigned int assetMarkerID; // offset 0xC, size 0x4
    float ang; // offset 0x10, size 0x4
    unsigned int sceneID; // offset 0x14, size 0x4
};
class zMovePoint : public xMovePoint {
    // total size: 0x30
};
class xParEmitterAsset : public xBaseAsset {
    // total size: 0x54
public:
    unsigned char emit_flags; // offset 0x8, size 0x1
    unsigned char emit_type; // offset 0x9, size 0x1
    unsigned short pad; // offset 0xA, size 0x2
    unsigned int propID; // offset 0xC, size 0x4
    union { // inferred
        class xPECircle e_circle; // offset 0x10, size 0x14
        class _tagEmitSphere e_sphere; // offset 0x10, size 0x4
        class _tagEmitRect e_rect; // offset 0x10, size 0x8
        class _tagEmitLine e_line; // offset 0x10, size 0x1C
        class _tagEmitVolume e_volume; // offset 0x10, size 0x4
        class _tagEmitOffsetPoint e_offsetp; // offset 0x10, size 0xC
        class xPEVCyl e_vcyl; // offset 0x10, size 0xC
        class xPEEntBone e_entbone; // offset 0x10, size 0x18
        class xPEEntBound e_entbound; // offset 0x10, size 0xC
    };
    unsigned int attachToID; // offset 0x2C, size 0x4
    class xVec3 pos; // offset 0x30, size 0xC
    class xVec3 vel; // offset 0x3C, size 0xC
    float vel_angle_variation; // offset 0x48, size 0x4
    unsigned int cull_mode; // offset 0x4C, size 0x4
    float cull_dist_sqr; // offset 0x50, size 0x4
};
class xUpdateCullMgr {
    // total size: 0x2C
public:
    unsigned int entCount; // offset 0x0, size 0x4
    unsigned int entActive; // offset 0x4, size 0x4
    void * * ent; // offset 0x8, size 0x4
    class xUpdateCullEnt * * mgr; // offset 0xC, size 0x4
    unsigned int mgrCount; // offset 0x10, size 0x4
    unsigned int mgrCurr; // offset 0x14, size 0x4
    class xUpdateCullEnt * mgrList; // offset 0x18, size 0x4
    unsigned int grpCount; // offset 0x1C, size 0x4
    class xUpdateCullGroup * grpList; // offset 0x20, size 0x4
    void (* activateCB)(void *); // offset 0x24, size 0x4
    void (* deactivateCB)(void *); // offset 0x28, size 0x4
};
class block_data {
    // total size: 0x8
public:
    unsigned char prev; // offset 0x0, size 0x1
    unsigned char next; // offset 0x1, size 0x1
    unsigned short flags; // offset 0x2, size 0x2
    void * data; // offset 0x4, size 0x4
};
class xMat4x3 : public xMat3x3 {
    // total size: 0x40
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
class RwRaster {
    // total size: 0x34
public:
    class RwRaster * parent; // offset 0x0, size 0x4
    unsigned char * cpPixels; // offset 0x4, size 0x4
    unsigned char * palette; // offset 0x8, size 0x4
    signed int width; // offset 0xC, size 0x4
    signed int height; // offset 0x10, size 0x4
    signed int depth; // offset 0x14, size 0x4
    signed int stride; // offset 0x18, size 0x4
    signed short nOffsetX; // offset 0x1C, size 0x2
    signed short nOffsetY; // offset 0x1E, size 0x2
    unsigned char cType; // offset 0x20, size 0x1
    unsigned char cFlags; // offset 0x21, size 0x1
    unsigned char privateFlags; // offset 0x22, size 0x1
    unsigned char cFormat; // offset 0x23, size 0x1
    unsigned char * originalPixels; // offset 0x24, size 0x4
    signed int originalWidth; // offset 0x28, size 0x4
    signed int originalHeight; // offset 0x2C, size 0x4
    signed int originalStride; // offset 0x30, size 0x4
};
class zFrag {
    // total size: 0x84
public:
    enum zFragType type; // offset 0x0, size 0x4
    class zFragInfo info; // offset 0x4, size 0x60
    float delay; // offset 0x64, size 0x4
    float alivetime; // offset 0x68, size 0x4
    float lifetime; // offset 0x6C, size 0x4
    void (* update)(class zFrag *, float); // offset 0x70, size 0x4
    class xModelInstance * parent[2]; // offset 0x74, size 0x8
    class zFrag * prev; // offset 0x7C, size 0x4
    class zFrag * next; // offset 0x80, size 0x4
};
class NPCSndTrax {
    // total size: 0xC
public:
    enum en_NPC_SOUND typ_sound; // offset 0x0, size 0x4
    char * nam_sound; // offset 0x4, size 0x4
    unsigned int aid_sound; // offset 0x8, size 0x4
};
class RpAtomic {
    // total size: 0x70
public:
    class RwObjectHasFrame object; // offset 0x0, size 0x14
    class RwResEntry * repEntry; // offset 0x14, size 0x4
    class RpGeometry * geometry; // offset 0x18, size 0x4
    class RwSphere boundingSphere; // offset 0x1C, size 0x10
    class RwSphere worldBoundingSphere; // offset 0x2C, size 0x10
    class RpClump * clump; // offset 0x3C, size 0x4
    class RwLLLink inClumpLink; // offset 0x40, size 0x8
    class RpAtomic * (* renderCallBack)(class RpAtomic *); // offset 0x48, size 0x4
    class RpInterpolator interpolator; // offset 0x4C, size 0x14
    unsigned short renderFrame; // offset 0x60, size 0x2
    unsigned short pad; // offset 0x62, size 0x2
    class RwLinkList llWorldSectorsInAtomic; // offset 0x64, size 0x8
    class RxPipeline * pipeline; // offset 0x6C, size 0x4
};
class xGridBound {
    // total size: 0x14
public:
    void * data; // offset 0x0, size 0x4
    unsigned short gx; // offset 0x4, size 0x2
    unsigned short gz; // offset 0x6, size 0x2
    unsigned char ingrid; // offset 0x8, size 0x1
    unsigned char oversize; // offset 0x9, size 0x1
    unsigned char deleted; // offset 0xA, size 0x1
    unsigned char gpad; // offset 0xB, size 0x1
    class xGridBound * * head; // offset 0xC, size 0x4
    class xGridBound * next; // offset 0x10, size 0x4
};
class xEntDrive {
    // total size: 0x7C
public:
    unsigned int flags; // offset 0x0, size 0x4
    float otm; // offset 0x4, size 0x4
    float otmr; // offset 0x8, size 0x4
    float os; // offset 0xC, size 0x4
    float tm; // offset 0x10, size 0x4
    float tmr; // offset 0x14, size 0x4
    float s; // offset 0x18, size 0x4
    class xEnt * odriver; // offset 0x1C, size 0x4
    class xEnt * driver; // offset 0x20, size 0x4
    class xEnt * driven; // offset 0x24, size 0x4
    class xVec3 op; // offset 0x28, size 0xC
    class xVec3 p; // offset 0x34, size 0xC
    class xVec3 q; // offset 0x40, size 0xC
    float yaw; // offset 0x4C, size 0x4
    class xVec3 dloc; // offset 0x50, size 0xC
    class tri_data tri; // offset 0x5C, size 0x20
};
class zFragAsset {
    // total size: 0x18
public:
    enum zFragType type; // offset 0x0, size 0x4
    unsigned int id; // offset 0x4, size 0x4
    unsigned int parentID[2]; // offset 0x8, size 0x8
    float lifetime; // offset 0x10, size 0x4
    float delay; // offset 0x14, size 0x4
};
class xParGroup {
    // total size: 0x0
};
struct /* @anon0 */ {
    // total size: 0x34
};
class RwFrustumPlane {
    // total size: 0x14
public:
    class RwPlane plane; // offset 0x0, size 0x10
    unsigned char closestX; // offset 0x10, size 0x1
    unsigned char closestY; // offset 0x11, size 0x1
    unsigned char closestZ; // offset 0x12, size 0x1
    unsigned char pad; // offset 0x13, size 0x1
};
class ztaskbox : public xBase {
    // total size: 0x24
public:
    class /* @class */ {
        // total size: 0x4
    public:
        unsigned char enabled : 8; // offset 0x0, size 0x1
        unsigned int dummy : 24; // offset 0x0, size 0x4
    } flag; // offset 0x10, size 0x4
    class asset_type * asset; // offset 0x14, size 0x4
    enum state_enum state; // offset 0x18, size 0x4
    class callback * cb; // offset 0x1C, size 0x4
    class ztaskbox * current; // offset 0x20, size 0x4
};
class RwTexDictionary {
    // total size: 0x18
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
class xAnimFile {
    // total size: 0x20
public:
    class xAnimFile * Next; // offset 0x0, size 0x4
    char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int FileFlags; // offset 0xC, size 0x4
    float Duration; // offset 0x10, size 0x4
    float TimeOffset; // offset 0x14, size 0x4
    unsigned short BoneCount; // offset 0x18, size 0x2
    unsigned char NumAnims[2]; // offset 0x1A, size 0x2
    void * * RawData; // offset 0x1C, size 0x4
};
class RwRGBA {
    // total size: 0x4
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
class RxNodeDefinition {
    // total size: 0x40
public:
    char * name; // offset 0x0, size 0x4
    class RxNodeMethods nodeMethods; // offset 0x4, size 0x1C
    class RxIoSpec io; // offset 0x20, size 0x14
    unsigned int pipelineNodePrivateDataSize; // offset 0x34, size 0x4
    enum RxNodeDefEditable editable; // offset 0x38, size 0x4
    signed int InputPipesCnt; // offset 0x3C, size 0x4
};
class RwResEntry {
    // total size: 0x18
public:
    class RwLLLink link; // offset 0x0, size 0x8
    signed int size; // offset 0x8, size 0x4
    void * owner; // offset 0xC, size 0x4
    class RwResEntry * * ownerRef; // offset 0x10, size 0x4
    void (* destroyNotify)(class RwResEntry *); // offset 0x14, size 0x4
};
class /* @class */ {
    // total size: 0x4
public:
    class xVec3 * verts; // offset 0x0, size 0x4
};
class xEntMotionMPData {
    // total size: 0xC
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int mp_id; // offset 0x4, size 0x4
    float speed; // offset 0x8, size 0x4
};
class xParEmitterPropsAsset : public xBaseAsset {
    // total size: 0x138
public:
    unsigned int parSysID; // offset 0x8, size 0x4
    union { // inferred
        class xParInterp rate; // offset 0xC, size 0x14
        class xParInterp value[1]; // offset 0xC, size 0x14
    };
    class xParInterp life; // offset 0x20, size 0x14
    class xParInterp size_birth; // offset 0x34, size 0x14
    class xParInterp size_death; // offset 0x48, size 0x14
    class xParInterp color_birth[4]; // offset 0x5C, size 0x50
    class xParInterp color_death[4]; // offset 0xAC, size 0x50
    class xParInterp vel_scale; // offset 0xFC, size 0x14
    class xParInterp vel_angle; // offset 0x110, size 0x14
    class xVec3 vel; // offset 0x124, size 0xC
    unsigned int emit_limit; // offset 0x130, size 0x4
    float emit_limit_reset_time; // offset 0x134, size 0x4
};
class zLightning {
    // total size: 0x234
public:
    unsigned int type; // offset 0x0, size 0x4
    unsigned int flags; // offset 0x4, size 0x4
    union { // inferred
        class /* @class */ {
            // total size: 0x220
        public:
            class xVec3 base_point[16]; // offset 0x0, size 0xC0
            class xVec3 point[16]; // offset 0xC0, size 0xC0
            signed short total_points; // offset 0x180, size 0x2
            signed short end_points; // offset 0x182, size 0x2
            float arc_height; // offset 0x184, size 0x4
            class xVec3 arc_normal; // offset 0x188, size 0xC
            float thickness[16]; // offset 0x194, size 0x40
            union { // inferred
                class _tagLightningLine line; // offset 0x1D4, size 0x4
                class _tagLightningRot rot; // offset 0x1D4, size 0x48
                class _tagLightningZeus zeus; // offset 0x1D4, size 0xC
            };
            float rand_radius; // offset 0x21C, size 0x4
        } legacy; // offset 0x8, size 0x220
        class /* @class */ {
            // total size: 0x58
        public:
            class xVec3 endPoint[2]; // offset 0x0, size 0x18
            class xVec3 direction; // offset 0x18, size 0xC
            float length; // offset 0x24, size 0x4
            float scale; // offset 0x28, size 0x4
            float width; // offset 0x2C, size 0x4
            float endParam[2]; // offset 0x30, size 0x8
            float endVel[2]; // offset 0x38, size 0x8
            float paramSpan[2]; // offset 0x40, size 0x8
            float arc_height; // offset 0x48, size 0x4
            class xVec3 arc_normal; // offset 0x4C, size 0xC
        } func; // offset 0x8, size 0x58
    };
    class iColor_tag color; // offset 0x228, size 0x4
    float time_left; // offset 0x22C, size 0x4
    float time_total; // offset 0x230, size 0x4
};
class xAnimSingle {
    // total size: 0x40
public:
    unsigned int SingleFlags; // offset 0x0, size 0x4
    class xAnimState * State; // offset 0x4, size 0x4
    float Time; // offset 0x8, size 0x4
    float CurrentSpeed; // offset 0xC, size 0x4
    float BilinearLerp[2]; // offset 0x10, size 0x8
    class xAnimEffect * Effect; // offset 0x18, size 0x4
    unsigned int ActiveCount; // offset 0x1C, size 0x4
    float LastTime; // offset 0x20, size 0x4
    class xAnimActiveEffect * ActiveList; // offset 0x24, size 0x4
    class xAnimPlay * Play; // offset 0x28, size 0x4
    class xAnimTransition * Sync; // offset 0x2C, size 0x4
    class xAnimTransition * Tran; // offset 0x30, size 0x4
    class xAnimSingle * Blend; // offset 0x34, size 0x4
    float BlendFactor; // offset 0x38, size 0x4
    unsigned int pad; // offset 0x3C, size 0x4
};
class xLinkAsset {
    // total size: 0x20
public:
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
class xScene {
    // total size: 0x70
public:
    unsigned int sceneID; // offset 0x0, size 0x4
    unsigned short flags; // offset 0x4, size 0x2
    unsigned short num_ents; // offset 0x6, size 0x2
    unsigned short num_trigs; // offset 0x8, size 0x2
    unsigned short num_stats; // offset 0xA, size 0x2
    unsigned short num_dyns; // offset 0xC, size 0x2
    unsigned short num_npcs; // offset 0xE, size 0x2
    unsigned short num_act_ents; // offset 0x10, size 0x2
    unsigned short num_nact_ents; // offset 0x12, size 0x2
    float gravity; // offset 0x14, size 0x4
    float drag; // offset 0x18, size 0x4
    float friction; // offset 0x1C, size 0x4
    unsigned short num_ents_allocd; // offset 0x20, size 0x2
    unsigned short num_trigs_allocd; // offset 0x22, size 0x2
    unsigned short num_stats_allocd; // offset 0x24, size 0x2
    unsigned short num_dyns_allocd; // offset 0x26, size 0x2
    unsigned short num_npcs_allocd; // offset 0x28, size 0x2
    class xEnt * * trigs; // offset 0x2C, size 0x4
    class xEnt * * stats; // offset 0x30, size 0x4
    class xEnt * * dyns; // offset 0x34, size 0x4
    class xEnt * * npcs; // offset 0x38, size 0x4
    class xEnt * * act_ents; // offset 0x3C, size 0x4
    class xEnt * * nact_ents; // offset 0x40, size 0x4
    class xEnv * env; // offset 0x44, size 0x4
    class xMemPool mempool; // offset 0x48, size 0x1C
    class xBase * (* resolvID)(unsigned int); // offset 0x64, size 0x4
    char * (* base2Name)(class xBase *); // offset 0x68, size 0x4
    char * (* id2Name)(unsigned int); // offset 0x6C, size 0x4
};
class xEntERData {
    // total size: 0x44
public:
    class xVec3 a; // offset 0x0, size 0xC
    class xVec3 b; // offset 0xC, size 0xC
    class xVec3 dir; // offset 0x18, size 0xC
    float et; // offset 0x24, size 0x4
    float wet; // offset 0x28, size 0x4
    float rt; // offset 0x2C, size 0x4
    float wrt; // offset 0x30, size 0x4
    float p; // offset 0x34, size 0x4
    float brt; // offset 0x38, size 0x4
    float ert; // offset 0x3C, size 0x4
    signed int state; // offset 0x40, size 0x4
};
class RwPlane {
    // total size: 0x10
public:
    class RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
};
class xJSPHeader {
    // total size: 0x18
public:
    char idtag[4]; // offset 0x0, size 0x4
    unsigned int version; // offset 0x4, size 0x4
    unsigned int jspNodeCount; // offset 0x8, size 0x4
    class RpClump * clump; // offset 0xC, size 0x4
    class xClumpCollBSPTree * colltree; // offset 0x10, size 0x4
    class xJSPNodeInfo * jspNodeList; // offset 0x14, size 0x4
};
class xGroupAsset : public xBaseAsset {
    // total size: 0xC
public:
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
};
class RpVertexNormal {
    // total size: 0x4
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
    signed char z; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
};
class RxPipelineNode {
    // total size: 0x28
public:
    class RxNodeDefinition * nodeDef; // offset 0x0, size 0x4
    unsigned int numOutputs; // offset 0x4, size 0x4
    unsigned int * outputs; // offset 0x8, size 0x4
    class RxPipelineCluster * * slotClusterRefs; // offset 0xC, size 0x4
    unsigned int * slotsContinue; // offset 0x10, size 0x4
    void * privateData; // offset 0x14, size 0x4
    unsigned int * inputToClusterSlot; // offset 0x18, size 0x4
    class RxPipelineNodeTopSortData * topSortData; // offset 0x1C, size 0x4
    void * initializationData; // offset 0x20, size 0x4
    unsigned int initializationDataSize; // offset 0x24, size 0x4
};
class xPar {
    // total size: 0x60
public:
    class xPar * m_next; // offset 0x0, size 0x4
    class xPar * m_prev; // offset 0x4, size 0x4
    float m_lifetime; // offset 0x8, size 0x4
    unsigned char m_c[4]; // offset 0xC, size 0x4
    class xVec3 m_pos; // offset 0x10, size 0xC
    float m_size; // offset 0x1C, size 0x4
    class xVec3 m_vel; // offset 0x20, size 0xC
    float m_sizeVel; // offset 0x2C, size 0x4
    unsigned char m_flag; // offset 0x30, size 0x1
    unsigned char m_mode; // offset 0x31, size 0x1
    unsigned char m_texIdx[2]; // offset 0x32, size 0x2
    unsigned char m_rotdeg[3]; // offset 0x34, size 0x3
    unsigned char pad8; // offset 0x37, size 0x1
    float totalLifespan; // offset 0x38, size 0x4
    class xParEmitterAsset * m_asset; // offset 0x3C, size 0x4
    float m_cvel[4]; // offset 0x40, size 0x10
    float m_cfl[4]; // offset 0x50, size 0x10
};
class xCutsceneBreak {
    // total size: 0x8
public:
    float Time; // offset 0x0, size 0x4
    signed int Index; // offset 0x4, size 0x4
};
class tri_data {
    // total size: 0xC
public:
    unsigned int index; // offset 0x0, size 0x4
    float r; // offset 0x4, size 0x4
    float d; // offset 0x8, size 0x4
};
class _tagiPad {
    // total size: 0x4
public:
    signed int port; // offset 0x0, size 0x4
};
class RpLight {
    // total size: 0x40
public:
    class RwObjectHasFrame object; // offset 0x0, size 0x14
    float radius; // offset 0x14, size 0x4
    class RwRGBAReal color; // offset 0x18, size 0x10
    float minusCosAngle; // offset 0x28, size 0x4
    class RwLinkList WorldSectorsInLight; // offset 0x2C, size 0x8
    class RwLLLink inWorld; // offset 0x34, size 0x8
    unsigned short lightFrame; // offset 0x3C, size 0x2
    unsigned short pad; // offset 0x3E, size 0x2
};
class zNPCGoalBossSandyIdle : public zNPCGoalCommon {
    // total size: 0x50
public:
    float timeInGoal; // offset 0x4C, size 0x4
};
class zShrapnelAsset {
    // total size: 0xC
public:
    signed int fassetCount; // offset 0x0, size 0x4
    unsigned int shrapnelID; // offset 0x4, size 0x4
    void (* initCB)(class zShrapnelAsset *, class xModelInstance *, class xVec3 *, void (*)(class zFrag *, class zFragAsset *)); // offset 0x8, size 0x4
};
class RxPipeline {
    // total size: 0x34
public:
    signed int locked; // offset 0x0, size 0x4
    unsigned int numNodes; // offset 0x4, size 0x4
    class RxPipelineNode * nodes; // offset 0x8, size 0x4
    unsigned int packetNumClusterSlots; // offset 0xC, size 0x4
    enum rxEmbeddedPacketState embeddedPacketState; // offset 0x10, size 0x4
    class RxPacket * embeddedPacket; // offset 0x14, size 0x4
    unsigned int numInputRequirements; // offset 0x18, size 0x4
    class RxPipelineRequiresCluster * inputRequirements; // offset 0x1C, size 0x4
    void * superBlock; // offset 0x20, size 0x4
    unsigned int superBlockSize; // offset 0x24, size 0x4
    unsigned int entryPoint; // offset 0x28, size 0x4
    unsigned int pluginId; // offset 0x2C, size 0x4
    unsigned int pluginData; // offset 0x30, size 0x4
};
struct /* @anon1 */ {
    // total size: 0x34
};
class zParEmitter : public xParEmitter {
    // total size: 0x78
};
class zNPCNewsFish : public zNPCVillager {
    // total size: 0x530
public:
    class say_data said[71]; // offset 0x2B0, size 0x238
    unsigned char was_reset; // offset 0x4E8, size 0x1
    unsigned int soundHandle; // offset 0x4EC, size 0x4
    unsigned int currSoundID; // offset 0x4F0, size 0x4
    unsigned int nextSoundID; // offset 0x4F4, size 0x4
    float jawTime; // offset 0x4F8, size 0x4
    void * jawData; // offset 0x4FC, size 0x4
    unsigned int newsfishFlags; // offset 0x500, size 0x4
    class xVec2 onScreenCoords; // offset 0x504, size 0x8
    class xVec2 offScreenCoords; // offset 0x50C, size 0x8
    class xVec2 screenCoords; // offset 0x514, size 0x8
    float screenSize; // offset 0x51C, size 0x4
    float screenRot; // offset 0x520, size 0x4
    float appearSpeed; // offset 0x524, size 0x4
    float disappearSpeed; // offset 0x528, size 0x4
    float screenLerp; // offset 0x52C, size 0x4
};
class RxCluster {
    // total size: 0x1C
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short stride; // offset 0x2, size 0x2
    void * data; // offset 0x4, size 0x4
    void * currentData; // offset 0x8, size 0x4
    unsigned int numAlloced; // offset 0xC, size 0x4
    unsigned int numUsed; // offset 0x10, size 0x4
    class RxPipelineCluster * clusterRef; // offset 0x14, size 0x4
    unsigned int attributes; // offset 0x18, size 0x4
};
class SandyLimbSpring {
    // total size: 0x14
public:
    float node1; // offset 0x0, size 0x4
    float vel1; // offset 0x4, size 0x4
    float node2; // offset 0x8, size 0x4
    float vel2; // offset 0xC, size 0x4
    class xBound * bound; // offset 0x10, size 0x4
};
class _tagEmitOffsetPoint {
    // total size: 0xC
public:
    class xVec3 offset; // offset 0x0, size 0xC
};
class xEntShadow {
    // total size: 0x28
public:
    class xVec3 pos; // offset 0x0, size 0xC
    class xVec3 vec; // offset 0xC, size 0xC
    class RpAtomic * shadowModel; // offset 0x18, size 0x4
    float dst_cast; // offset 0x1C, size 0x4
    float radius[2]; // offset 0x20, size 0x8
};
class xAnimTransition {
    // total size: 0x2C
public:
    class xAnimTransition * Next; // offset 0x0, size 0x4
    class xAnimState * Dest; // offset 0x4, size 0x4
    unsigned int (* Conditional)(class xAnimTransition *, class xAnimSingle *, void *); // offset 0x8, size 0x4
    unsigned int (* Callback)(class xAnimTransition *, class xAnimSingle *, void *); // offset 0xC, size 0x4
    unsigned int Flags; // offset 0x10, size 0x4
    unsigned int UserFlags; // offset 0x14, size 0x4
    float SrcTime; // offset 0x18, size 0x4
    float DestTime; // offset 0x1C, size 0x4
    unsigned short Priority; // offset 0x20, size 0x2
    unsigned short QueuePriority; // offset 0x22, size 0x2
    float BlendRecip; // offset 0x24, size 0x4
    unsigned short * BlendOffset; // offset 0x28, size 0x4
};
class RxPipelineNodeParam {
    // total size: 0x8
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
};
class asset_type {
    // total size: 0x0
};
class /* @class */ {
    // total size: 0xC
public:
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int value_min; // offset 0x4, size 0x4
    unsigned int value_max; // offset 0x8, size 0x4
};
class zFragLocInfo {
    // total size: 0x20
public:
    union { // inferred
        class zFragBone bone; // offset 0x0, size 0x10
        class xModelTag tag; // offset 0x0, size 0x20
    };
};
class config {
    // total size: 0x3C
public:
    class zone_data zone_rest; // offset 0x0, size 0xC
    class zone_data zone_above; // offset 0xC, size 0xC
    class zone_data zone_below; // offset 0x18, size 0xC
    float move_speed; // offset 0x24, size 0x4
    float turn_speed; // offset 0x28, size 0x4
    float stick_speed; // offset 0x2C, size 0x4
    float stick_yaw_vel; // offset 0x30, size 0x4
    float max_yaw_vel; // offset 0x34, size 0x4
    float margin_angle; // offset 0x38, size 0x4
};
class zNPCGoalBossSandyChase : public zNPCGoalCommon {
    // total size: 0x50
public:
    float timeInGoal; // offset 0x4C, size 0x4
};
class config {
    // total size: 0x10
public:
    float life_time; // offset 0x0, size 0x4
    unsigned int blend_src; // offset 0x4, size 0x4
    unsigned int blend_dst; // offset 0x8, size 0x4
    float pivot; // offset 0xC, size 0x4
};
class xMovePoint : public xBase {
    // total size: 0x30
public:
    class xMovePointAsset * asset; // offset 0x10, size 0x4
    class xVec3 * pos; // offset 0x14, size 0x4
    class xMovePoint * * nodes; // offset 0x18, size 0x4
    class xMovePoint * prev; // offset 0x1C, size 0x4
    unsigned int node_wt_sum; // offset 0x20, size 0x4
    unsigned char on; // offset 0x24, size 0x1
    unsigned char pad[2]; // offset 0x25, size 0x2
    float delay; // offset 0x28, size 0x4
    class xSpline3 * spl; // offset 0x2C, size 0x4
};
class XCSNNosey {
    // total size: 0xC
public:
    void * userdata; // offset 0x4, size 0x4
    signed int flg_nosey; // offset 0x8, size 0x4
};
class zNPCGoalBossSandyNoHead : public zNPCGoalCommon {
    // total size: 0x58
public:
    float timeInGoal; // offset 0x4C, size 0x4
    unsigned int stage; // offset 0x50, size 0x4
    float secsSincePatWasCarryingHead; // offset 0x54, size 0x4
};
class xCutsceneMgr : public xBase {
    // total size: 0x24
public:
    class xCutsceneMgrAsset * tasset; // offset 0x10, size 0x4
    class xCutscene * csn; // offset 0x14, size 0x4
    unsigned int stop; // offset 0x18, size 0x4
    class xCutsceneZbufferHack * zhack; // offset 0x1C, size 0x4
    float oldfov; // offset 0x20, size 0x4
};
class RxPacket {
    // total size: 0x30
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short numClusters; // offset 0x2, size 0x2
    class RxPipeline * pipeline; // offset 0x4, size 0x4
    unsigned int * inputToClusterSlot; // offset 0x8, size 0x4
    unsigned int * slotsContinue; // offset 0xC, size 0x4
    class RxPipelineCluster * * slotClusterRefs; // offset 0x10, size 0x4
    class RxCluster clusters[1]; // offset 0x14, size 0x1C
};
class tri_data : public tri_data {
    // total size: 0x20
public:
    class xVec3 loc; // offset 0xC, size 0xC
    float yaw; // offset 0x18, size 0x4
    class xCollis * coll; // offset 0x1C, size 0x4
};
class RpInterpolator {
    // total size: 0x14
public:
    signed int flags; // offset 0x0, size 0x4
    signed short startMorphTarget; // offset 0x4, size 0x2
    signed short endMorphTarget; // offset 0x6, size 0x2
    float time; // offset 0x8, size 0x4
    float recipTime; // offset 0xC, size 0x4
    float position; // offset 0x10, size 0x4
};
class callback {
    // total size: 0x4
};
class xAnimMultiFileBase {
    // total size: 0x4
public:
    unsigned int Count; // offset 0x0, size 0x4
};
class zNPCCommon : public xNPCBasic {
    // total size: 0x2A0
public:
    class xEntAsset * entass; // offset 0x1BC, size 0x4
    class xEntNPCAsset * npcass; // offset 0x1C0, size 0x4
    class zNPCSettings * npcsetass; // offset 0x1C4, size 0x4
    signed int flg_vuln; // offset 0x1C8, size 0x4
    signed int flg_move; // offset 0x1CC, size 0x4
    signed int flg_misc; // offset 0x1D0, size 0x4
    signed int flg_able; // offset 0x1D4, size 0x4
    class NPCConfig * cfg_npc; // offset 0x1D8, size 0x4
    class zNPCSettings npcset; // offset 0x1DC, size 0x2C
    class zMovePoint * nav_past; // offset 0x208, size 0x4
    class zMovePoint * nav_curr; // offset 0x20C, size 0x4
    class zMovePoint * nav_dest; // offset 0x210, size 0x4
    class zMovePoint * nav_lead; // offset 0x214, size 0x4
    class xSpline3 * spl_mvptspline; // offset 0x218, size 0x4
    float len_mvptspline; // offset 0x21C, size 0x4
    float dst_curspline; // offset 0x220, size 0x4
    class xEntDrive * drv_data; // offset 0x224, size 0x4
    class xPsyche * psy_instinct; // offset 0x228, size 0x4
    class zNPCCommon * npc_duplodude; // offset 0x22C, size 0x4
    float spd_throttle; // offset 0x230, size 0x4
    signed int flg_xtrarend; // offset 0x234, size 0x4
    float tmr_fidget; // offset 0x238, size 0x4
    float tmr_invuln; // offset 0x23C, size 0x4
    class zShrapnelAsset * explosion; // offset 0x240, size 0x4
    class xModelAssetParam * parmdata; // offset 0x244, size 0x4
    unsigned int pdatsize; // offset 0x248, size 0x4
    class zNPCLassoInfo * lassdata; // offset 0x24C, size 0x4
    class NPCSndQueue snd_queue[4]; // offset 0x250, size 0x50
};
class xBehaveMgr : public RyzMemData {
    // total size: 0x18
public:
    class xFactory * goalFactory; // offset 0x0, size 0x4
    class xPsyche * psypool; // offset 0x4, size 0x4
    class st_XORDEREDARRAY psylist; // offset 0x8, size 0x10
};
class zNPCGoalBossSandyTaunt : public zNPCGoalCommon {
    // total size: 0x50
public:
    float timeInGoal; // offset 0x4C, size 0x4
};
class zFragSound {
    // total size: 0x14
public:
    class zFragSoundAsset * fasset; // offset 0x0, size 0x4
    class xVec3 location; // offset 0x4, size 0xC
    unsigned int soundID; // offset 0x10, size 0x4
};
class xAnimEffect {
    // total size: 0x14
public:
    class xAnimEffect * Next; // offset 0x0, size 0x4
    unsigned int Flags; // offset 0x4, size 0x4
    float StartTime; // offset 0x8, size 0x4
    float EndTime; // offset 0xC, size 0x4
    unsigned int (* Callback)(unsigned int, class xAnimActiveEffect *, class xAnimSingle *, void *); // offset 0x10, size 0x4
};
class zNPCLassoInfo {
    // total size: 0x18
public:
    enum en_LASSO_STATUS stage; // offset 0x0, size 0x4
    class xEnt * lassoee; // offset 0x4, size 0x4
    class xAnimState * holdGuideAnim; // offset 0x8, size 0x4
    class xModelInstance * holdGuideModel; // offset 0xC, size 0x4
    class xAnimState * grabGuideAnim; // offset 0x10, size 0x4
    class xModelInstance * grabGuideModel; // offset 0x14, size 0x4
};
class zJumpParam {
    // total size: 0x10
public:
    float PeakHeight; // offset 0x0, size 0x4
    float TimeGravChange; // offset 0x4, size 0x4
    float TimeHold; // offset 0x8, size 0x4
    float ImpulseVel; // offset 0xC, size 0x4
};
class xMovePointAsset : public xBaseAsset {
    // total size: 0x28
public:
    class xVec3 pos; // offset 0x8, size 0xC
    unsigned short wt; // offset 0x14, size 0x2
    unsigned char on; // offset 0x16, size 0x1
    unsigned char bezIndex; // offset 0x17, size 0x1
    unsigned char flg_props; // offset 0x18, size 0x1
    unsigned char pad; // offset 0x19, size 0x1
    unsigned short numPoints; // offset 0x1A, size 0x2
    float delay; // offset 0x1C, size 0x4
    float zoneRadius; // offset 0x20, size 0x4
    float arenaRadius; // offset 0x24, size 0x4
};
class zNPCGoalBossSandyClothesline : public zNPCGoalCommon {
    // total size: 0x68
public:
    float timeInGoal; // offset 0x4C, size 0x4
    unsigned int stage; // offset 0x50, size 0x4
    unsigned int playedAnimEarly; // offset 0x54, size 0x4
    float totalHoverTime; // offset 0x58, size 0x4
    class xVec3 bounceStartPoint; // offset 0x5C, size 0xC
};
class xCutsceneMgrAsset : public xBaseAsset {
    // total size: 0xC8
public:
    unsigned int cutsceneAssetID; // offset 0x8, size 0x4
    unsigned int flags; // offset 0xC, size 0x4
    float interpSpeed; // offset 0x10, size 0x4
    float startTime[15]; // offset 0x14, size 0x3C
    float endTime[15]; // offset 0x50, size 0x3C
    unsigned int emitID[15]; // offset 0x8C, size 0x3C
};
enum en_pendtype {
    PEND_TRAN_NONE = 0,
    PEND_TRAN_SET = 1,
    PEND_TRAN_PUSH = 2,
    PEND_TRAN_POP = 3,
    PEND_TRAN_POPTO = 4,
    PEND_TRAN_POPALL = 5,
    PEND_TRAN_SWAP = 6,
    PEND_TRAN_INPROG = 7,
    PEND_TRAN_NOMORE = 8,
};
class RxPipelineRequiresCluster {
    // total size: 0xC
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
class /* @class */ {
    // total size: 0x220
public:
    class xVec3 base_point[16]; // offset 0x0, size 0xC0
    class xVec3 point[16]; // offset 0xC0, size 0xC0
    signed short total_points; // offset 0x180, size 0x2
    signed short end_points; // offset 0x182, size 0x2
    float arc_height; // offset 0x184, size 0x4
    class xVec3 arc_normal; // offset 0x188, size 0xC
    float thickness[16]; // offset 0x194, size 0x40
    union { // inferred
        class _tagLightningLine line; // offset 0x1D4, size 0x4
        class _tagLightningRot rot; // offset 0x1D4, size 0x48
        class _tagLightningZeus zeus; // offset 0x1D4, size 0xC
    };
    float rand_radius; // offset 0x21C, size 0x4
};
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
};
class xPsyche : public RyzMemData {
    // total size: 0x68
public:
    class xBase * clt_owner; // offset 0x0, size 0x4
    class xPSYNote * cb_notice; // offset 0x4, size 0x4
    signed int flg_psyche; // offset 0x8, size 0x4
    class xGoal * goallist; // offset 0xC, size 0x4
    class xGoal * goalstak[5]; // offset 0x10, size 0x14
    float tmr_stack[5][1]; // offset 0x24, size 0x14
    signed int staktop; // offset 0x38, size 0x4
    class xGoal * pendgoal; // offset 0x3C, size 0x4
    enum en_pendtype pendtype; // offset 0x40, size 0x4
    signed int gid_safegoal; // offset 0x44, size 0x4
    void (* fun_remap)(signed int *, enum en_trantype *); // offset 0x48, size 0x4
    void * userContext; // offset 0x4C, size 0x4
    signed int cnt_transLastTimestep; // offset 0x50, size 0x4
    enum PSY_BRAIN_STATUS psystat; // offset 0x54, size 0x4
    class xBase fakebase; // offset 0x58, size 0x10
};
class xSurface : public xBase {
    // total size: 0x28
public:
    unsigned int idx; // offset 0x10, size 0x4
    unsigned int type; // offset 0x14, size 0x4
    union { // inferred
        unsigned int mat_idx; // offset 0x18, size 0x4
        class xEnt * ent; // offset 0x18, size 0x4
        void * obj; // offset 0x18, size 0x4
    };
    float friction; // offset 0x1C, size 0x4
    unsigned char state; // offset 0x20, size 0x1
    unsigned char pad[3]; // offset 0x21, size 0x3
    void * moprops; // offset 0x24, size 0x4
};
class zFragProjectileAsset : public zFragAsset {
    // total size: 0x90
public:
    unsigned int modelInfoID; // offset 0x18, size 0x4
    class RpAtomic * modelFile; // offset 0x1C, size 0x4
    class zFragLocation launch; // offset 0x20, size 0x24
    class zFragLocation vel; // offset 0x44, size 0x24
    float bounce; // offset 0x68, size 0x4
    signed int maxBounces; // offset 0x6C, size 0x4
    unsigned int flags; // offset 0x70, size 0x4
    unsigned int childID; // offset 0x74, size 0x4
    class zShrapnelAsset * child; // offset 0x78, size 0x4
    float minScale; // offset 0x7C, size 0x4
    float maxScale; // offset 0x80, size 0x4
    unsigned int scaleCurveID; // offset 0x84, size 0x4
    class xCurveAsset * scaleCurve; // offset 0x88, size 0x4
    float gravity; // offset 0x8C, size 0x4
};
class xCutscene {
    // total size: 0x138
public:
    class xCutsceneInfo * Info; // offset 0x0, size 0x4
    class xCutsceneData * Data; // offset 0x4, size 0x4
    unsigned int * TimeChunkOffs; // offset 0x8, size 0x4
    unsigned int * Visibility; // offset 0xC, size 0x4
    class xCutsceneBreak * BreakList; // offset 0x10, size 0x4
    class xCutsceneTime * Play; // offset 0x14, size 0x4
    class xCutsceneTime * Stream; // offset 0x18, size 0x4
    unsigned int Waiting; // offset 0x1C, size 0x4
    unsigned int BadReadPause; // offset 0x20, size 0x4
    float BadReadSpeed; // offset 0x24, size 0x4
    void * RawBuf; // offset 0x28, size 0x4
    void * AlignBuf; // offset 0x2C, size 0x4
    float Time; // offset 0x30, size 0x4
    float CamTime; // offset 0x34, size 0x4
    unsigned int PlayIndex; // offset 0x38, size 0x4
    unsigned int Ready; // offset 0x3C, size 0x4
    signed int DataLoading; // offset 0x40, size 0x4
    unsigned int GotData; // offset 0x44, size 0x4
    unsigned int ShutDownWait; // offset 0x48, size 0x4
    float PlaybackSpeed; // offset 0x4C, size 0x4
    unsigned int Opened; // offset 0x50, size 0x4
    class tag_xFile File; // offset 0x54, size 0xB4
    signed int AsyncID; // offset 0x108, size 0x4
    void * MemBuf; // offset 0x10C, size 0x4
    void * MemCurr; // offset 0x110, size 0x4
    unsigned int SndStarted; // offset 0x114, size 0x4
    unsigned int SndNumChannel; // offset 0x118, size 0x4
    unsigned int SndChannelReq[2]; // offset 0x11C, size 0x8
    unsigned int SndAssetID[2]; // offset 0x124, size 0x8
    unsigned int SndHandle[2]; // offset 0x12C, size 0x8
    class XCSNNosey * cb_nosey; // offset 0x134, size 0x4
};
class zFragSoundAsset : public zFragAsset {
    // total size: 0x4C
public:
    unsigned int assetID; // offset 0x18, size 0x4
    class zFragLocation source; // offset 0x1C, size 0x24
    float volume; // offset 0x40, size 0x4
    float innerRadius; // offset 0x44, size 0x4
    float outerRadius; // offset 0x48, size 0x4
};
class iColor_tag {
    // total size: 0x4
public:
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
struct /* @anon2 */ {
    // total size: 0x34
};
class xCollis {
    // total size: 0x50
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int oid; // offset 0x4, size 0x4
    void * optr; // offset 0x8, size 0x4
    class xModelInstance * mptr; // offset 0xC, size 0x4
    float dist; // offset 0x10, size 0x4
    class xVec3 norm; // offset 0x14, size 0xC
    class xVec3 tohit; // offset 0x20, size 0xC
    class xVec3 depen; // offset 0x2C, size 0xC
    class xVec3 hdng; // offset 0x38, size 0xC
    union { // inferred
        class /* @class */ {
            // total size: 0xC
        public:
            float t; // offset 0x0, size 0x4
            float u; // offset 0x4, size 0x4
            float v; // offset 0x8, size 0x4
        } tuv; // offset 0x44, size 0xC
        class tri_data tri; // offset 0x44, size 0xC
    };
};
class RwRGBAReal {
    // total size: 0x10
public:
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
};
class xEntMotionMechData {
    // total size: 0x2C
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char flags; // offset 0x1, size 0x1
    unsigned char sld_axis; // offset 0x2, size 0x1
    unsigned char rot_axis; // offset 0x3, size 0x1
    float sld_dist; // offset 0x4, size 0x4
    float sld_tm; // offset 0x8, size 0x4
    float sld_acc_tm; // offset 0xC, size 0x4
    float sld_dec_tm; // offset 0x10, size 0x4
    float rot_dist; // offset 0x14, size 0x4
    float rot_tm; // offset 0x18, size 0x4
    float rot_acc_tm; // offset 0x1C, size 0x4
    float rot_dec_tm; // offset 0x20, size 0x4
    float ret_delay; // offset 0x24, size 0x4
    float post_ret_delay; // offset 0x28, size 0x4
};
class zEntHangable {
    // total size: 0x0
};
class zNPCGoalBossSandyMelee : public zNPCGoalCommon {
    // total size: 0x50
public:
    float timeInGoal; // offset 0x4C, size 0x4
};
class xEntBoulderAsset {
    // total size: 0x48
public:
    float gravity; // offset 0x0, size 0x4
    float mass; // offset 0x4, size 0x4
    float bounce; // offset 0x8, size 0x4
    float friction; // offset 0xC, size 0x4
    float statFric; // offset 0x10, size 0x4
    float maxVel; // offset 0x14, size 0x4
    float maxAngVel; // offset 0x18, size 0x4
    float stickiness; // offset 0x1C, size 0x4
    float bounceDamp; // offset 0x20, size 0x4
    unsigned int flags; // offset 0x24, size 0x4
    float killtimer; // offset 0x28, size 0x4
    unsigned int hitpoints; // offset 0x2C, size 0x4
    unsigned int soundID; // offset 0x30, size 0x4
    float volume; // offset 0x34, size 0x4
    float minSoundVel; // offset 0x38, size 0x4
    float maxSoundVel; // offset 0x3C, size 0x4
    float innerRadius; // offset 0x40, size 0x4
    float outerRadius; // offset 0x44, size 0x4
};
class RwObjectHasFrame {
    // total size: 0x14
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
};
class xFXRibbon {
    // total size: 0x140
public:
    class config cfg; // offset 0x0, size 0x10
    unsigned char activated; // offset 0x10, size 0x1
    class RwRaster * raster; // offset 0x14, size 0x4
    class tier_queue joints; // offset 0x18, size 0x110
    class curve_node * curve; // offset 0x128, size 0x4
    unsigned int curve_size; // offset 0x12C, size 0x4
    unsigned int curve_index; // offset 0x130, size 0x4
    float ilife; // offset 0x134, size 0x4
    unsigned int mtime; // offset 0x138, size 0x4
    unsigned int mlife; // offset 0x13C, size 0x4
};
class xListItem {
    // total size: 0xC
public:
    signed int flg_travFilter; // offset 0x0, size 0x4
    class xGoal * next; // offset 0x4, size 0x4
    class xGoal * prev; // offset 0x8, size 0x4
};
class tier_queue_allocator {
    // total size: 0x1C
public:
    class block_data * blocks; // offset 0x0, size 0x4
    unsigned int _unit_size; // offset 0x4, size 0x4
    unsigned int _block_size; // offset 0x8, size 0x4
    unsigned int _block_size_shift; // offset 0xC, size 0x4
    unsigned int _max_blocks; // offset 0x10, size 0x4
    unsigned int _max_blocks_shift; // offset 0x14, size 0x4
    unsigned char head; // offset 0x18, size 0x1
};
class xFFX {
    // total size: 0x0
};
class RpPolygon {
    // total size: 0x8
public:
    unsigned short matIndex; // offset 0x0, size 0x2
    unsigned short vertIndex[3]; // offset 0x2, size 0x6
};
class xAnimPlay {
    // total size: 0x20
public:
    class xAnimPlay * Next; // offset 0x0, size 0x4
    unsigned short NumSingle; // offset 0x4, size 0x2
    unsigned short BoneCount; // offset 0x6, size 0x2
    class xAnimSingle * Single; // offset 0x8, size 0x4
    void * Object; // offset 0xC, size 0x4
    class xAnimTable * Table; // offset 0x10, size 0x4
    class xMemPool * Pool; // offset 0x14, size 0x4
    class xModelInstance * ModelInst; // offset 0x18, size 0x4
    void (* BeforeAnimMatrices)(class xAnimPlay *, class xQuat *, class xVec3 *, signed int); // offset 0x1C, size 0x4
};
class zPlatform : public zEnt {
    // total size: 0x210
public:
    class xPlatformAsset * passet; // offset 0xD4, size 0x4
    class xEntMotion motion; // offset 0xE0, size 0x80
    unsigned short state; // offset 0x160, size 0x2
    unsigned short plat_flags; // offset 0x162, size 0x2
    float tmr; // offset 0x164, size 0x4
    signed int ctr; // offset 0x168, size 0x4
    class xMovePoint * src; // offset 0x16C, size 0x4
    class xModelInstance * am; // offset 0x170, size 0x4
    class xModelInstance * bm; // offset 0x174, size 0x4
    signed int moving; // offset 0x178, size 0x4
    class xEntDrive drv; // offset 0x17C, size 0x7C
    class zPlatFMRunTime * fmrt; // offset 0x1F8, size 0x4
    float pauseMult; // offset 0x1FC, size 0x4
    float pauseDelta; // offset 0x200, size 0x4
};
class xPEVCyl {
    // total size: 0xC
public:
    float height; // offset 0x0, size 0x4
    float radius; // offset 0x4, size 0x4
    float deflection; // offset 0x8, size 0x4
};
class zNPCGoalBossSandyLeap : public zNPCGoalCommon {
    // total size: 0x64
public:
    float timeInGoal; // offset 0x4C, size 0x4
    unsigned int stage; // offset 0x50, size 0x4
    float startX; // offset 0x54, size 0x4
    float startZ; // offset 0x58, size 0x4
    float endX; // offset 0x5C, size 0x4
    float endZ; // offset 0x60, size 0x4
};
class RwLinkList {
    // total size: 0x8
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
class zNPCGoalBossSandyRunToRope : public zNPCGoalCommon {
    // total size: 0x50
public:
    float timeInGoal; // offset 0x4C, size 0x4
};
class xEntPenData {
    // total size: 0x50
public:
    class xVec3 top; // offset 0x0, size 0xC
    float w; // offset 0xC, size 0x4
    class xMat4x3 omat; // offset 0x10, size 0x40
};
class _tagxRumble {
    // total size: 0x10
public:
    enum _tagRumbleType type; // offset 0x0, size 0x4
    float seconds; // offset 0x4, size 0x4
    class _tagxRumble * next; // offset 0x8, size 0x4
    signed short active; // offset 0xC, size 0x2
    unsigned short fxflags; // offset 0xE, size 0x2
};
class xCoef3 {
    // total size: 0x30
public:
    class xCoef x; // offset 0x0, size 0x10
    class xCoef y; // offset 0x10, size 0x10
    class xCoef z; // offset 0x20, size 0x10
};
class /* @class */ {
    // total size: 0xC
public:
    float t; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    float v; // offset 0x8, size 0x4
};
class zGlobals : public xGlobals {
    // total size: 0x2050
public:
    class zPlayerGlobals player; // offset 0x700, size 0x1940
    class zAssetPickupTable * pickupTable; // offset 0x2040, size 0x4
    class zCutsceneMgr * cmgr; // offset 0x2044, size 0x4
    class zScene * sceneCur; // offset 0x2048, size 0x4
    class zScene * scenePreload; // offset 0x204C, size 0x4
};
class RpMaterialList {
    // total size: 0xC
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
};
class zCutsceneMgr : public xCutsceneMgr {
    // total size: 0x24
};
class zFragLocation {
    // total size: 0x24
public:
    enum zFragLocType type; // offset 0x0, size 0x4
    class zFragLocInfo info; // offset 0x4, size 0x20
};
class xDynAsset : public xBaseAsset {
    // total size: 0x10
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
class /* @class */ {
    // total size: 0xC
public:
    float value_def; // offset 0x0, size 0x4
    float value_min; // offset 0x4, size 0x4
    float value_max; // offset 0x8, size 0x4
};
class xAnimMultiFile : public xAnimMultiFileBase {
    // total size: 0xC
public:
    class xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
};
class RpMaterial {
    // total size: 0x1C
public:
    class RwTexture * texture; // offset 0x0, size 0x4
    class RwRGBA color; // offset 0x4, size 0x4
    class RxPipeline * pipeline; // offset 0x8, size 0x4
    class RwSurfaceProperties surfaceProps; // offset 0xC, size 0xC
    signed short refCount; // offset 0x18, size 0x2
    signed short pad; // offset 0x1A, size 0x2
};
class xModelPool {
    // total size: 0xC
public:
    class xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
};
class zGlobalSettings {
    // total size: 0x150
public:
    unsigned short AnalogMin; // offset 0x0, size 0x2
    unsigned short AnalogMax; // offset 0x2, size 0x2
    float SundaeTime; // offset 0x4, size 0x4
    float SundaeMult; // offset 0x8, size 0x4
    unsigned int InitialShinyCount; // offset 0xC, size 0x4
    unsigned int InitialSpatulaCount; // offset 0x10, size 0x4
    signed int ShinyValuePurple; // offset 0x14, size 0x4
    signed int ShinyValueBlue; // offset 0x18, size 0x4
    signed int ShinyValueGreen; // offset 0x1C, size 0x4
    signed int ShinyValueYellow; // offset 0x20, size 0x4
    signed int ShinyValueRed; // offset 0x24, size 0x4
    signed int ShinyValueCombo0; // offset 0x28, size 0x4
    signed int ShinyValueCombo1; // offset 0x2C, size 0x4
    signed int ShinyValueCombo2; // offset 0x30, size 0x4
    signed int ShinyValueCombo3; // offset 0x34, size 0x4
    signed int ShinyValueCombo4; // offset 0x38, size 0x4
    signed int ShinyValueCombo5; // offset 0x3C, size 0x4
    signed int ShinyValueCombo6; // offset 0x40, size 0x4
    signed int ShinyValueCombo7; // offset 0x44, size 0x4
    signed int ShinyValueCombo8; // offset 0x48, size 0x4
    signed int ShinyValueCombo9; // offset 0x4C, size 0x4
    signed int ShinyValueCombo10; // offset 0x50, size 0x4
    signed int ShinyValueCombo11; // offset 0x54, size 0x4
    signed int ShinyValueCombo12; // offset 0x58, size 0x4
    signed int ShinyValueCombo13; // offset 0x5C, size 0x4
    signed int ShinyValueCombo14; // offset 0x60, size 0x4
    signed int ShinyValueCombo15; // offset 0x64, size 0x4
    float ComboTimer; // offset 0x68, size 0x4
    unsigned int Initial_Specials; // offset 0x6C, size 0x4
    unsigned int TakeDamage; // offset 0x70, size 0x4
    float DamageTimeHit; // offset 0x74, size 0x4
    float DamageTimeSurface; // offset 0x78, size 0x4
    float DamageTimeEGen; // offset 0x7C, size 0x4
    float DamageSurfKnock; // offset 0x80, size 0x4
    float DamageGiveHealthKnock; // offset 0x84, size 0x4
    unsigned int CheatSpongeball; // offset 0x88, size 0x4
    unsigned int CheatPlayerSwitch; // offset 0x8C, size 0x4
    unsigned int CheatAlwaysPortal; // offset 0x90, size 0x4
    unsigned int CheatFlyToggle; // offset 0x94, size 0x4
    unsigned int DisableForceConversation; // offset 0x98, size 0x4
    float StartSlideAngle; // offset 0x9C, size 0x4
    float StopSlideAngle; // offset 0xA0, size 0x4
    float RotMatchMaxAngle; // offset 0xA4, size 0x4
    float RotMatchMatchTime; // offset 0xA8, size 0x4
    float RotMatchRelaxTime; // offset 0xAC, size 0x4
    float Gravity; // offset 0xB0, size 0x4
    float BBashTime; // offset 0xB4, size 0x4
    float BBashHeight; // offset 0xB8, size 0x4
    float BBashDelay; // offset 0xBC, size 0x4
    float BBashCVTime; // offset 0xC0, size 0x4
    float BBounceSpeed; // offset 0xC4, size 0x4
    float BSpinMinFrame; // offset 0xC8, size 0x4
    float BSpinMaxFrame; // offset 0xCC, size 0x4
    float BSpinRadius; // offset 0xD0, size 0x4
    float SandyMeleeMinFrame; // offset 0xD4, size 0x4
    float SandyMeleeMaxFrame; // offset 0xD8, size 0x4
    float SandyMeleeRadius; // offset 0xDC, size 0x4
    float BubbleBowlTimeDelay; // offset 0xE0, size 0x4
    float BubbleBowlLaunchPosLeft; // offset 0xE4, size 0x4
    float BubbleBowlLaunchPosUp; // offset 0xE8, size 0x4
    float BubbleBowlLaunchPosAt; // offset 0xEC, size 0x4
    float BubbleBowlLaunchVelLeft; // offset 0xF0, size 0x4
    float BubbleBowlLaunchVelUp; // offset 0xF4, size 0x4
    float BubbleBowlLaunchVelAt; // offset 0xF8, size 0x4
    float BubbleBowlPercentIncrease; // offset 0xFC, size 0x4
    float BubbleBowlMinSpeed; // offset 0x100, size 0x4
    float BubbleBowlMinRecoverTime; // offset 0x104, size 0x4
    float SlideAccelVelMin; // offset 0x108, size 0x4
    float SlideAccelVelMax; // offset 0x10C, size 0x4
    float SlideAccelStart; // offset 0x110, size 0x4
    float SlideAccelEnd; // offset 0x114, size 0x4
    float SlideAccelPlayerFwd; // offset 0x118, size 0x4
    float SlideAccelPlayerBack; // offset 0x11C, size 0x4
    float SlideAccelPlayerSide; // offset 0x120, size 0x4
    float SlideVelMaxStart; // offset 0x124, size 0x4
    float SlideVelMaxEnd; // offset 0x128, size 0x4
    float SlideVelMaxIncTime; // offset 0x12C, size 0x4
    float SlideVelMaxIncAccel; // offset 0x130, size 0x4
    float SlideAirHoldTime; // offset 0x134, size 0x4
    float SlideAirSlowTime; // offset 0x138, size 0x4
    float SlideAirDblHoldTime; // offset 0x13C, size 0x4
    float SlideAirDblSlowTime; // offset 0x140, size 0x4
    float SlideVelDblBoost; // offset 0x144, size 0x4
    unsigned char SlideApplyPhysics; // offset 0x148, size 0x1
    unsigned char PowerUp[2]; // offset 0x149, size 0x2
    unsigned char InitialPowerUp[2]; // offset 0x14B, size 0x2
};
class xParInterp {
    // total size: 0x14
public:
    float val[2]; // offset 0x0, size 0x8
    unsigned int interp; // offset 0x8, size 0x4
    float freq; // offset 0xC, size 0x4
    float oofreq; // offset 0x10, size 0x4
};
class rxHeapFreeBlock {
    // total size: 0x8
public:
    unsigned int size; // offset 0x0, size 0x4
    class rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
class zAssetPickupTable {
    // total size: 0x0
};
class zNPCGoalCommon : public xGoal {
    // total size: 0x4C
public:
    signed int flg_npcgauto; // offset 0x3C, size 0x4
    signed int flg_npcgable; // offset 0x40, size 0x4
    unsigned int anid_played; // offset 0x44, size 0x4
    signed int flg_info : 16; // offset 0x48, size 0x4
    signed int flg_user : 16; // offset 0x48, size 0x4
};
class xSpline3 {
    // total size: 0x2C
public:
    unsigned short type; // offset 0x0, size 0x2
    unsigned short flags; // offset 0x2, size 0x2
    unsigned int N; // offset 0x4, size 0x4
    unsigned int allocN; // offset 0x8, size 0x4
    class xVec3 * points; // offset 0xC, size 0x4
    float * time; // offset 0x10, size 0x4
    class xVec3 * p12; // offset 0x14, size 0x4
    class xVec3 * bctrl; // offset 0x18, size 0x4
    float * knot; // offset 0x1C, size 0x4
    class xCoef3 * coef; // offset 0x20, size 0x4
    unsigned int arcSample; // offset 0x24, size 0x4
    float * arcLength; // offset 0x28, size 0x4
};
class _tagxPad {
    // total size: 0x148
public:
    unsigned char value[22]; // offset 0x0, size 0x16
    unsigned char last_value[22]; // offset 0x16, size 0x16
    unsigned int on; // offset 0x2C, size 0x4
    unsigned int pressed; // offset 0x30, size 0x4
    unsigned int released; // offset 0x34, size 0x4
    class _tagPadAnalog analog1; // offset 0x38, size 0x2
    class _tagPadAnalog analog2; // offset 0x3A, size 0x2
    enum _tagPadState state; // offset 0x3C, size 0x4
    unsigned int flags; // offset 0x40, size 0x4
    class _tagxRumble rumble_head; // offset 0x44, size 0x10
    signed short port; // offset 0x54, size 0x2
    signed short slot; // offset 0x56, size 0x2
    class _tagiPad context; // offset 0x58, size 0x4
    float al2d_timer; // offset 0x5C, size 0x4
    float ar2d_timer; // offset 0x60, size 0x4
    float d_timer; // offset 0x64, size 0x4
    float up_tmr[22]; // offset 0x68, size 0x58
    float down_tmr[22]; // offset 0xC0, size 0x58
    class analog_data analog[2]; // offset 0x118, size 0x30
};
class tag_iFile {
    // total size: 0x90
public:
    unsigned int flags; // offset 0x0, size 0x4
    char path[128]; // offset 0x4, size 0x80
    signed int fd; // offset 0x84, size 0x4
    signed int offset; // offset 0x88, size 0x4
    signed int length; // offset 0x8C, size 0x4
};
class xParSys {
    // total size: 0x0
};
class RyzMemData {
    // total size: 0x1
};
class RxPipelineNodeTopSortData {
    // total size: 0xC
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
};
class RwV2d {
    // total size: 0x8
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
class xEntOrbitData {
    // total size: 0x28
public:
    class xVec3 orig; // offset 0x0, size 0xC
    class xVec3 c; // offset 0xC, size 0xC
    float a; // offset 0x18, size 0x4
    float b; // offset 0x1C, size 0x4
    float p; // offset 0x20, size 0x4
    float w; // offset 0x24, size 0x4
};
class xClumpCollBSPTree {
    // total size: 0x10
public:
    unsigned int numBranchNodes; // offset 0x0, size 0x4
    class xClumpCollBSPBranchNode * branchNodes; // offset 0x4, size 0x4
    unsigned int numTriangles; // offset 0x8, size 0x4
    class xClumpCollBSPTriangle * triangles; // offset 0xC, size 0x4
};
class zFragShockwave {
    // total size: 0x38
public:
    class zFragShockwaveAsset * fasset; // offset 0x0, size 0x4
    float currSize; // offset 0x4, size 0x4
    float currVelocity; // offset 0x8, size 0x4
    float deltVelocity; // offset 0xC, size 0x4
    float currSpin; // offset 0x10, size 0x4
    float deltSpin; // offset 0x14, size 0x4
    float currColor[4]; // offset 0x18, size 0x10
    float deltColor[4]; // offset 0x28, size 0x10
};
class xFactory : public RyzMemData {
    // total size: 0x34
public:
    class XGOFTypeInfo * infopool; // offset 0x0, size 0x4
    class st_XORDEREDARRAY infolist; // offset 0x4, size 0x10
    class xFactoryInst * products; // offset 0x14, size 0x4
    class RyzMemGrow growContextData; // offset 0x18, size 0x1C
};
class zPlayerLassoInfo {
    // total size: 0x120
public:
    class xEnt * target; // offset 0x0, size 0x4
    float dist; // offset 0x4, size 0x4
    unsigned char destroy; // offset 0x8, size 0x1
    unsigned char targetGuide; // offset 0x9, size 0x1
    float lassoRot; // offset 0xC, size 0x4
    class xEnt * swingTarget; // offset 0x10, size 0x4
    class xEnt * releasedSwing; // offset 0x14, size 0x4
    float copterTime; // offset 0x18, size 0x4
    signed int canCopter; // offset 0x1C, size 0x4
    class zLasso lasso; // offset 0x20, size 0xFC
    class xAnimState * zeroAnim; // offset 0x11C, size 0x4
};
class zScene : public xScene {
    // total size: 0x2C8
public:
    class _zPortal * pendingPortal; // offset 0x70, size 0x4
    union { // inferred
        unsigned int num_ents; // offset 0x74, size 0x4
        unsigned int num_base; // offset 0x74, size 0x4
    };
    union { // inferred
        class xBase * * base; // offset 0x78, size 0x4
        class zEnt * * ents; // offset 0x78, size 0x4
    };
    unsigned int num_update_base; // offset 0x7C, size 0x4
    class xBase * * update_base; // offset 0x80, size 0x4
    unsigned int baseCount[72]; // offset 0x84, size 0x120
    class xBase * baseList[72]; // offset 0x1A4, size 0x120
    class _zEnv * zen; // offset 0x2C4, size 0x4
};
class xModelAssetParam {
    // total size: 0x0
};
class xEntBoulder : public xEnt {
    // total size: 0x1E8
public:
    class xEntBoulderAsset * basset; // offset 0xD0, size 0x4
    class xShadowSimpleCache simpShadow_embedded; // offset 0xD4, size 0x98
    class xEntShadow entShadow_embedded; // offset 0x16C, size 0x28
    class xVec3 localCenter; // offset 0x194, size 0xC
    class xVec3 vel; // offset 0x1A0, size 0xC
    class xVec3 rotVec; // offset 0x1AC, size 0xC
    class xVec3 force; // offset 0x1B8, size 0xC
    class xVec3 instForce; // offset 0x1C4, size 0xC
    float angVel; // offset 0x1D0, size 0x4
    float timeToLive; // offset 0x1D4, size 0x4
    signed int hitpoints; // offset 0x1D8, size 0x4
    float lastRolling; // offset 0x1DC, size 0x4
    unsigned int rollingID; // offset 0x1E0, size 0x4
    unsigned char collis_chk; // offset 0x1E4, size 0x1
    unsigned char collis_pen; // offset 0x1E5, size 0x1
    unsigned char pad1[2]; // offset 0x1E6, size 0x2
};
class _tagLightningLine {
    // total size: 0x4
public:
    float unused; // offset 0x0, size 0x4
};
class RyzMemGrow {
    // total size: 0x1C
public:
    signed int flg_grow; // offset 0x0, size 0x4
    signed int amt; // offset 0x4, size 0x4
    char * ptr; // offset 0x8, size 0x4
    class xBase * user; // offset 0xC, size 0x4
    signed int amt_last; // offset 0x10, size 0x4
    char * ptr_last; // offset 0x14, size 0x4
    class xBase * user_last; // offset 0x18, size 0x4
};
class tag_xFile {
    // total size: 0xB4
public:
    char relname[32]; // offset 0x0, size 0x20
    class tag_iFile ps; // offset 0x20, size 0x90
    void * user_data; // offset 0xB0, size 0x4
};
class xEntAsset : public xBaseAsset {
    // total size: 0x54
public:
    unsigned char flags; // offset 0x8, size 0x1
    unsigned char subtype; // offset 0x9, size 0x1
    unsigned char pflags; // offset 0xA, size 0x1
    unsigned char moreFlags; // offset 0xB, size 0x1
    unsigned char pad; // offset 0xC, size 0x1
    unsigned int surfaceID; // offset 0x10, size 0x4
    class xVec3 ang; // offset 0x14, size 0xC
    class xVec3 pos; // offset 0x20, size 0xC
    class xVec3 scale; // offset 0x2C, size 0xC
    float redMult; // offset 0x38, size 0x4
    float greenMult; // offset 0x3C, size 0x4
    float blueMult; // offset 0x40, size 0x4
    float seeThru; // offset 0x44, size 0x4
    float seeThruSpeed; // offset 0x48, size 0x4
    unsigned int modelInfoID; // offset 0x4C, size 0x4
    unsigned int animListID; // offset 0x50, size 0x4
};
class RpClump {
    // total size: 0x2C
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList atomicList; // offset 0x8, size 0x8
    class RwLinkList lightList; // offset 0x10, size 0x8
    class RwLinkList cameraList; // offset 0x18, size 0x8
    class RwLLLink inWorldLink; // offset 0x20, size 0x8
    class RpClump * (* callback)(class RpClump *, void *); // offset 0x28, size 0x4
};
class rxHeapSuperBlockDescriptor {
    // total size: 0xC
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
class NPCSndQueue {
    // total size: 0x14
public:
    unsigned int sndDirect; // offset 0x0, size 0x4
    enum en_NPC_SOUND sndtype; // offset 0x4, size 0x4
    signed int flg_snd; // offset 0x8, size 0x4
    float tmr_delay; // offset 0xC, size 0x4
    float radius; // offset 0x10, size 0x4
};
class zFragShockwaveAsset : public zFragAsset {
    // total size: 0x54
public:
    unsigned int modelInfoID; // offset 0x18, size 0x4
    float birthRadius; // offset 0x1C, size 0x4
    float deathRadius; // offset 0x20, size 0x4
    float birthVelocity; // offset 0x24, size 0x4
    float deathVelocity; // offset 0x28, size 0x4
    float birthSpin; // offset 0x2C, size 0x4
    float deathSpin; // offset 0x30, size 0x4
    float birthColor[4]; // offset 0x34, size 0x10
    float deathColor[4]; // offset 0x44, size 0x10
};
class RpGeometry {
    // total size: 0x60
public:
    class RwObject object; // offset 0x0, size 0x8
    unsigned int flags; // offset 0x8, size 0x4
    unsigned short lockedSinceLastInst; // offset 0xC, size 0x2
    signed short refCount; // offset 0xE, size 0x2
    signed int numTriangles; // offset 0x10, size 0x4
    signed int numVertices; // offset 0x14, size 0x4
    signed int numMorphTargets; // offset 0x18, size 0x4
    signed int numTexCoordSets; // offset 0x1C, size 0x4
    class RpMaterialList matList; // offset 0x20, size 0xC
    class RpTriangle * triangles; // offset 0x2C, size 0x4
    class RwRGBA * preLitLum; // offset 0x30, size 0x4
    class RwTexCoords * texCoords[8]; // offset 0x34, size 0x20
    class RpMeshHeader * mesh; // offset 0x54, size 0x4
    class RwResEntry * repEntry; // offset 0x58, size 0x4
    class RpMorphTarget * morphTarget; // offset 0x5C, size 0x4
};
class xGroup : public xBase {
    // total size: 0x20
public:
    class xGroupAsset * asset; // offset 0x10, size 0x4
    class xBase * * item; // offset 0x14, size 0x4
    unsigned int last_index; // offset 0x18, size 0x4
    signed int flg_group; // offset 0x1C, size 0x4
};
class xBound {
    // total size: 0x4C
public:
    class xQCData qcd; // offset 0x0, size 0x20
    unsigned char type; // offset 0x20, size 0x1
    unsigned char pad[3]; // offset 0x21, size 0x3
    union { // inferred
        class xSphere sph; // offset 0x24, size 0x10
        class xBBox box; // offset 0x24, size 0x24
        class xCylinder cyl; // offset 0x24, size 0x14
    };
    class xMat4x3 * mat; // offset 0x48, size 0x4
};
class zLedgeGrabParams {
    // total size: 0x380
public:
    float animGrab; // offset 0x0, size 0x4
    float zdist; // offset 0x4, size 0x4
    class xVec3 tranTable[60]; // offset 0x8, size 0x2D0
    signed int tranCount; // offset 0x2D8, size 0x4
    class xEnt * optr; // offset 0x2DC, size 0x4
    class xMat4x3 omat; // offset 0x2E0, size 0x40
    float y0det; // offset 0x320, size 0x4
    float dydet; // offset 0x324, size 0x4
    float r0det; // offset 0x328, size 0x4
    float drdet; // offset 0x32C, size 0x4
    float thdet; // offset 0x330, size 0x4
    float rtime; // offset 0x334, size 0x4
    float ttime; // offset 0x338, size 0x4
    float tmr; // offset 0x33C, size 0x4
    class xVec3 spos; // offset 0x340, size 0xC
    class xVec3 epos; // offset 0x34C, size 0xC
    class xVec3 tpos; // offset 0x358, size 0xC
    signed int nrays; // offset 0x364, size 0x4
    signed int rrand; // offset 0x368, size 0x4
    float startrot; // offset 0x36C, size 0x4
    float endrot; // offset 0x370, size 0x4
};
class xUpdateCullEnt {
    // total size: 0x10
public:
    unsigned short index; // offset 0x0, size 0x2
    signed short groupIndex; // offset 0x2, size 0x2
    unsigned int (* cb)(void *, void *); // offset 0x4, size 0x4
    void * cbdata; // offset 0x8, size 0x4
    class xUpdateCullEnt * nextInGroup; // offset 0xC, size 0x4
};
class xEntNPCAsset {
    // total size: 0x18
public:
    signed int npcFlags; // offset 0x0, size 0x4
    signed int npcModel; // offset 0x4, size 0x4
    signed int npcProps; // offset 0x8, size 0x4
    unsigned int movepoint; // offset 0xC, size 0x4
    unsigned int taskWidgetPrime; // offset 0x10, size 0x4
    unsigned int taskWidgetSecond; // offset 0x14, size 0x4
};
class RpWorldSector {
    // total size: 0x90
public:
    signed int type; // offset 0x0, size 0x4
    class RpPolygon * polygons; // offset 0x4, size 0x4
    class RwV3d * vertices; // offset 0x8, size 0x4
    class RpVertexNormal * normals; // offset 0xC, size 0x4
    class RwTexCoords * texCoords[8]; // offset 0x10, size 0x20
    class RwRGBA * preLitLum; // offset 0x30, size 0x4
    class RwResEntry * repEntry; // offset 0x34, size 0x4
    class RwLinkList collAtomicsInWorldSector; // offset 0x38, size 0x8
    class RwLinkList noCollAtomicsInWorldSector; // offset 0x40, size 0x8
    class RwLinkList lightsInWorldSector; // offset 0x48, size 0x8
    class RwBBox boundingBox; // offset 0x50, size 0x18
    class RwBBox tightBoundingBox; // offset 0x68, size 0x18
    class RpMeshHeader * mesh; // offset 0x80, size 0x4
    class RxPipeline * pipeline; // offset 0x84, size 0x4
    unsigned short matListWindowBase; // offset 0x88, size 0x2
    unsigned short numVertices; // offset 0x8A, size 0x2
    unsigned short numPolygons; // offset 0x8C, size 0x2
    unsigned short pad; // offset 0x8E, size 0x2
};
class xClumpCollBSPVertInfo {
    // total size: 0x4
public:
    unsigned short atomIndex; // offset 0x0, size 0x2
    unsigned short meshVertIndex; // offset 0x2, size 0x2
};
class xPEEntBone {
    // total size: 0x18
public:
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char type; // offset 0x1, size 0x1
    unsigned char bone; // offset 0x2, size 0x1
    unsigned char pad1; // offset 0x3, size 0x1
    class xVec3 offset; // offset 0x4, size 0xC
    float radius; // offset 0x10, size 0x4
    float deflection; // offset 0x14, size 0x4
};
class zPlatFMRunTime {
    // total size: 0x124
public:
    unsigned int flags; // offset 0x0, size 0x4
    float tmrs[12]; // offset 0x4, size 0x30
    float ttms[12]; // offset 0x34, size 0x30
    float atms[12]; // offset 0x64, size 0x30
    float dtms[12]; // offset 0x94, size 0x30
    float vms[12]; // offset 0xC4, size 0x30
    float dss[12]; // offset 0xF4, size 0x30
};
class zEnt : public xEnt {
    // total size: 0xD4
public:
    class xAnimTable * atbl; // offset 0xD0, size 0x4
};
enum zFragType {
    eFragInactive = 0,
    eFragGroup = 1,
    eFragShrapnel = 2,
    eFragParticle = 3,
    eFragProjectile = 4,
    eFragLightning = 5,
    eFragSound = 6,
    eFragShockwave = 7,
    eFragCount = 8,
    eFragForceSize = 2147483647,
};
class xClumpCollBSPBranchNode {
    // total size: 0x10
public:
    unsigned int leftInfo; // offset 0x0, size 0x4
    unsigned int rightInfo; // offset 0x4, size 0x4
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
};
class xEntMotion {
    // total size: 0x80
public:
    class xEntMotionAsset * asset; // offset 0x0, size 0x4
    unsigned char type; // offset 0x4, size 0x1
    unsigned char pad; // offset 0x5, size 0x1
    unsigned short flags; // offset 0x6, size 0x2
    float t; // offset 0x8, size 0x4
    float tmr; // offset 0xC, size 0x4
    float d; // offset 0x10, size 0x4
    union { // inferred
        class xEntERData er; // offset 0x20, size 0x44
        class xEntOrbitData orb; // offset 0x20, size 0x28
        class xEntSplineData spl; // offset 0x20, size 0x4
        class xEntMPData mp; // offset 0x20, size 0x40
        class xEntMechData mech; // offset 0x20, size 0x4C
        class xEntPenData pen; // offset 0x20, size 0x50
    };
    class xEnt * owner; // offset 0x70, size 0x4
    class xEnt * target; // offset 0x74, size 0x4
};
class xPSYNote {
    // total size: 0x4
};
class zNPCSettings : public xDynAsset {
    // total size: 0x2C
public:
    enum en_npcbtyp basisType; // offset 0x10, size 0x4
    char allowDetect; // offset 0x14, size 0x1
    char allowPatrol; // offset 0x15, size 0x1
    char allowWander; // offset 0x16, size 0x1
    char reduceCollide; // offset 0x17, size 0x1
    char useNavSplines; // offset 0x18, size 0x1
    char pad[3]; // offset 0x19, size 0x3
    char allowChase; // offset 0x1C, size 0x1
    char allowAttack; // offset 0x1D, size 0x1
    char assumeLOS; // offset 0x1E, size 0x1
    char assumeFOV; // offset 0x1F, size 0x1
    enum en_dupowavmod duploWaveMode; // offset 0x20, size 0x4
    float duploSpawnDelay; // offset 0x24, size 0x4
    signed int duploSpawnLifeMax; // offset 0x28, size 0x4
};
class RxHeap {
    // total size: 0x1C
public:
    unsigned int superBlockSize; // offset 0x0, size 0x4
    class rxHeapSuperBlockDescriptor * head; // offset 0x4, size 0x4
    class rxHeapBlockHeader * headBlock; // offset 0x8, size 0x4
    class rxHeapFreeBlock * freeBlocks; // offset 0xC, size 0x4
    unsigned int entriesAlloced; // offset 0x10, size 0x4
    unsigned int entriesUsed; // offset 0x14, size 0x4
    signed int dirty; // offset 0x18, size 0x4
};
class xPlatformAsset {
    // total size: 0x0
};
enum _CurrentPlayer {
    eCurrentPlayerSpongeBob = 0,
    eCurrentPlayerPatrick = 1,
    eCurrentPlayerSandy = 2,
    eCurrentPlayerCount = 3,
};
class substr {
    // total size: 0x8
public:
    char * text; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};
class RwBBox {
    // total size: 0x18
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
};
class xClumpCollBSPTriangle {
    // total size: 0x8
public:
    class /* @class */ {
        // total size: 0x4
    public:
        union { // inferred
            class xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
            class RwV3d * p; // offset 0x0, size 0x4
        };
    } v; // offset 0x0, size 0x4
    unsigned char flags; // offset 0x4, size 0x1
    unsigned char platData; // offset 0x5, size 0x1
    unsigned short matIndex; // offset 0x6, size 0x2
};
class zEntPickup : public zEnt {
    // total size: 0x268
public:
    class xShadowSimpleCache simpShadow_embedded; // offset 0xD4, size 0x98
    unsigned int state; // offset 0x16C, size 0x4
    class zAssetPickup * p; // offset 0x170, size 0x4
    void * anim; // offset 0x174, size 0x4
    float animTime; // offset 0x178, size 0x4
    float timer; // offset 0x17C, size 0x4
    float shake_timer; // offset 0x180, size 0x4
    class xVec3 shake_pos; // offset 0x184, size 0xC
    signed int snackGateInfoDisplayed; // offset 0x190, size 0x4
    float fx_timer; // offset 0x194, size 0x4
    class xPar * fx_par; // offset 0x198, size 0x4
    class zParEmitter * fx_emit; // offset 0x19C, size 0x4
    float fx_scale; // offset 0x1A0, size 0x4
    class xVec3 grab_pos; // offset 0x1A4, size 0xC
    unsigned int flyflags; // offset 0x1B0, size 0x4
    signed int flg_opts; // offset 0x1B4, size 0x4
    class xVec3 vel; // offset 0x1B8, size 0xC
    class xVec3 droppos; // offset 0x1C4, size 0xC
    class xBase * followTarget; // offset 0x1D0, size 0x4
    class xVec3 followOffset; // offset 0x1D4, size 0xC
    class xBase * dropParent; // offset 0x1E0, size 0x4
    class xEnt * useThisEntPos; // offset 0x1E4, size 0x4
    class xEntDrive drv; // offset 0x1E8, size 0x7C
    unsigned short pickupFlags; // offset 0x264, size 0x2
};
class RpMorphTarget {
    // total size: 0x1C
public:
    class RpGeometry * parentGeom; // offset 0x0, size 0x4
    class RwSphere boundingSphere; // offset 0x4, size 0x10
    class RwV3d * verts; // offset 0x14, size 0x4
    class RwV3d * normals; // offset 0x18, size 0x4
};
class xEntMotionAsset {
    // total size: 0x30
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char use_banking; // offset 0x1, size 0x1
    unsigned short flags; // offset 0x2, size 0x2
    union { // inferred
        class xEntMotionERData er; // offset 0x4, size 0x28
        class xEntMotionOrbitData orb; // offset 0x4, size 0x18
        class xEntMotionSplineData spl; // offset 0x4, size 0x4
        class xEntMotionMPData mp; // offset 0x4, size 0xC
        class xEntMotionMechData mech; // offset 0x4, size 0x2C
        class xEntMotionPenData pen; // offset 0x4, size 0x14
    };
};
struct /* @anon3 */ {
    // total size: 0x34
};
class /* @class */ {
    // total size: 0x1
public:
    unsigned char value_def; // offset 0x0, size 0x1
};
enum _zPlayerWallJumpState {
    k_WALLJUMP_NOT = 0,
    k_WALLJUMP_LAUNCH = 1,
    k_WALLJUMP_FLIGHT = 2,
    k_WALLJUMP_LAND = 3,
};
class xCurveAsset {
    // total size: 0x0
};
class xQuat {
    // total size: 0x10
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
class RwV3d {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class RwTexCoords {
    // total size: 0x8
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
class tier_queue {
    // total size: 0x110
public:
    unsigned int first; // offset 0x0, size 0x4
    unsigned int _size; // offset 0x4, size 0x4
    unsigned int wrap_mask; // offset 0x8, size 0x4
    class tier_queue_allocator * alloc; // offset 0xC, size 0x4
    unsigned char blocks[256]; // offset 0x10, size 0x100
};
class rxHeapBlockHeader {
    // total size: 0x20
public:
    class rxHeapBlockHeader * prev; // offset 0x0, size 0x4
    class rxHeapBlockHeader * next; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    class rxHeapFreeBlock * freeEntry; // offset 0xC, size 0x4
    unsigned int pad[4]; // offset 0x10, size 0x10
};
class xEnvAsset : public xBaseAsset {
    // total size: 0x44
public:
    unsigned int bspAssetID; // offset 0x8, size 0x4
    unsigned int startCameraAssetID; // offset 0xC, size 0x4
    unsigned int climateFlags; // offset 0x10, size 0x4
    float climateStrengthMin; // offset 0x14, size 0x4
    float climateStrengthMax; // offset 0x18, size 0x4
    unsigned int bspLightKit; // offset 0x1C, size 0x4
    unsigned int objectLightKit; // offset 0x20, size 0x4
    float padF1; // offset 0x24, size 0x4
    unsigned int bspCollisionAssetID; // offset 0x28, size 0x4
    unsigned int bspFXAssetID; // offset 0x2C, size 0x4
    unsigned int bspCameraAssetID; // offset 0x30, size 0x4
    unsigned int bspMapperID; // offset 0x34, size 0x4
    unsigned int bspMapperCollisionID; // offset 0x38, size 0x4
    unsigned int bspMapperFXID; // offset 0x3C, size 0x4
    float loldHeight; // offset 0x40, size 0x4
};
class zNPCGoalBossSandyElbowDrop : public zNPCGoalCommon {
    // total size: 0x54
public:
    float timeInGoal; // offset 0x4C, size 0x4
    unsigned int elbowFlags; // offset 0x50, size 0x4
};
enum PSY_BRAIN_STATUS {
    PSY_STAT_BLANK = 0,
    PSY_STAT_GROW = 1,
    PSY_STAT_EXTEND = 2,
    PSY_STAT_THINK = 3,
    PSY_STAT_NOMORE = 4,
    PSY_STAT_FORCE = 2147483647,
};
class xEntFrame {
    // total size: 0xF0
public:
    class xMat4x3 mat; // offset 0x0, size 0x40
    class xMat4x3 oldmat; // offset 0x40, size 0x40
    class xVec3 oldvel; // offset 0x80, size 0xC
    class xRot oldrot; // offset 0x8C, size 0x10
    class xRot drot; // offset 0x9C, size 0x10
    class xRot rot; // offset 0xAC, size 0x10
    class xVec3 dpos; // offset 0xBC, size 0xC
    class xVec3 dvel; // offset 0xC8, size 0xC
    class xVec3 vel; // offset 0xD4, size 0xC
    unsigned int mode; // offset 0xE0, size 0x4
};
class _tagLightningRot {
    // total size: 0x48
public:
    float deg[16]; // offset 0x0, size 0x40
    float degrees; // offset 0x40, size 0x4
    float height; // offset 0x44, size 0x4
};
class NPCConfig : public xListItem {
    // total size: 0x3B0
public:
    unsigned int modelID; // offset 0xC, size 0x4
    signed int flg_config; // offset 0x10, size 0x4
    float spd_turnMax; // offset 0x14, size 0x4
    float spd_moveMax; // offset 0x18, size 0x4
    float fac_accelMax; // offset 0x1C, size 0x4
    float fac_driftMax; // offset 0x20, size 0x4
    float fac_gravKnock; // offset 0x24, size 0x4
    float fac_elastic; // offset 0x28, size 0x4
    signed int pts_damage; // offset 0x2C, size 0x4
    signed int useBoxBound; // offset 0x30, size 0x4
    class xVec3 off_bound; // offset 0x34, size 0xC
    class xVec3 dim_bound; // offset 0x40, size 0xC
    float npcMass; // offset 0x4C, size 0x4
    float npcMassInv; // offset 0x50, size 0x4
    float rad_detect; // offset 0x54, size 0x4
    float hyt_detect; // offset 0x58, size 0x4
    float off_detect; // offset 0x5C, size 0x4
    float rad_attack; // offset 0x60, size 0x4
    float fov_attack; // offset 0x64, size 0x4
    class xVec3 scl_model; // offset 0x68, size 0xC
    float tym_attack; // offset 0x74, size 0x4
    float tym_fidget; // offset 0x78, size 0x4
    float tym_stun; // offset 0x7C, size 0x4
    float tym_alert; // offset 0x80, size 0x4
    float dst_castShadow; // offset 0x84, size 0x4
    float rad_shadowCache; // offset 0x88, size 0x4
    float rad_shadowRaster; // offset 0x8C, size 0x4
    float rad_dmgSize; // offset 0x90, size 0x4
    signed int flg_vert; // offset 0x94, size 0x4
    class xModelTag tag_vert[20]; // offset 0x98, size 0x280
    class xVec3 animFrameRange[9]; // offset 0x318, size 0x6C
    signed int cnt_esteem[5]; // offset 0x384, size 0x14
    float rad_sound; // offset 0x398, size 0x4
    class NPCSndTrax * snd_trax; // offset 0x39C, size 0x4
    class NPCSndTrax * snd_traxShare; // offset 0x3A0, size 0x4
    signed int test_count; // offset 0x3A4, size 0x4
    unsigned char talk_filter[4]; // offset 0x3A8, size 0x4
    unsigned char talk_filter_size; // offset 0x3AC, size 0x1
};
class zNPCGoalBossSandyGetUp : public zNPCGoalCommon {
    // total size: 0x50
public:
    float timeInGoal; // offset 0x4C, size 0x4
};
enum en_GOALSTATE {
    GOAL_STAT_UNKNOWN = 0,
    GOAL_STAT_PROCESS = 1,
    GOAL_STAT_ENTER = 2,
    GOAL_STAT_EXIT = 3,
    GOAL_STAT_SUSPEND = 4,
    GOAL_STAT_RESUME = 5,
    GOAL_STAT_PAUSED = 6,
    GOAL_STAT_DONE = 7,
    GOAL_STAT_NOMORE = 8,
    GOAL_STAT_FORCE = 2147483647,
};
enum en_NPC_SOUND {
    NPC_STYP_BOGUS = -2,
    NPC_STYP_LISTEND = 0,
    NPC_STYP_ENCOUNTER = 1,
    NPC_STYP_CLANKING = 2,
    NPC_STYP_EXCLAIM = 3,
    NPC_STYP_OUCH = 4,
    NPC_STYP_CHEERING = 5,
    NPC_STYP_RESPAWN = 6,
    NPC_STYP_ALERT = 7,
    NPC_STYP_DIZZY = 8,
    NPC_STYP_DANCE = 9,
    NPC_STYP_LAUGH = 10,
    NPC_STYP_ATTACK = 11,
    NPC_STYP_PUNCH = 12,
    NPC_STYP_WEPLAUNCH = 13,
    NPC_STYP_LIGHTNING = 14,
    NPC_STYP_WARNBANG = 15,
    NPC_STYP_DEATH = 16,
    NPC_STYP_DEATHJELLY = 17,
    NPC_STYP_BONKED = 18,
    NPC_STYP_UNBONKED = 19,
    NPC_STYP_TIKISTACK = 20,
    NPC_STYP_TIKIEXPLODE = 21,
    NPC_STYP_TIKITHUNDER = 22,
    NPC_STYP_XSFXTALK = 23,
    NPC_STYP_ONELINER = 24,
    NPC_STYP_ONELINERTOO = 25,
    NPC_STYP_NOMORE = 26,
    NPC_STYP_FORCE = 2147483647,
};
enum _tagRumbleType {
    eRumble_Off = 0,
    eRumble_Hi = 1,
    eRumble_VeryLightHi = 2,
    eRumble_VeryLight = 3,
    eRumble_LightHi = 4,
    eRumble_Light = 5,
    eRumble_MediumHi = 6,
    eRumble_Medium = 7,
    eRumble_HeavyHi = 8,
    eRumble_Heavy = 9,
    eRumble_VeryHeavyHi = 10,
    eRumble_VeryHeavy = 11,
    eRumble_Total = 12,
    eRumbleForceU32 = 2147483647,
};
enum _zPlayerType {
    ePlayer_SB = 0,
    ePlayer_Patrick = 1,
    ePlayer_Sandy = 2,
    ePlayer_MAXTYPES = 3,
};
class xEnv {
    // total size: 0x50
public:
    class iEnv * geom; // offset 0x0, size 0x4
    class iEnv ienv; // offset 0x10, size 0x30
    class xLightKit * lightKit; // offset 0x40, size 0x4
};
class xAnimTable {
    // total size: 0x1C
public:
    class xAnimTable * Next; // offset 0x0, size 0x4
    char * Name; // offset 0x4, size 0x4
    class xAnimTransition * TransitionList; // offset 0x8, size 0x4
    class xAnimState * StateList; // offset 0xC, size 0x4
    unsigned int AnimIndex; // offset 0x10, size 0x4
    unsigned int MorphIndex; // offset 0x14, size 0x4
    unsigned int UserFlags; // offset 0x18, size 0x4
};
class xNPCBasic : public xEnt, public xFactoryInst {
    // total size: 0x1BC
public:
    void (* f_setup)(class xEnt *); // offset 0xDC, size 0x4
    void (* f_reset)(class xEnt *); // offset 0xE0, size 0x4
    signed int flg_basenpc : 16; // offset 0xE4, size 0x4
    signed int inUpdate : 8; // offset 0xE4, size 0x4
    signed int flg_upward : 8; // offset 0xE4, size 0x4
    signed int colFreq; // offset 0xE8, size 0x4
    signed int colFreqReset; // offset 0xEC, size 0x4
    unsigned int flg_colCheck : 8; // offset 0xF0, size 0x4
    unsigned int flg_penCheck : 8; // offset 0xF0, size 0x4
    unsigned int flg_unused : 16; // offset 0xF0, size 0x4
    signed int myNPCType; // offset 0xF4, size 0x4
    class xEntShadow entShadow_embedded; // offset 0xF8, size 0x28
    class xShadowSimpleCache simpShadow_embedded; // offset 0x120, size 0x98
};
class xEntSplineData {
    // total size: 0x4
public:
    signed int unknown; // offset 0x0, size 0x4
};
class RpMeshHeader {
    // total size: 0x10
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned short numMeshes; // offset 0x4, size 0x2
    unsigned short serialNum; // offset 0x6, size 0x2
    unsigned int totalIndicesInMesh; // offset 0x8, size 0x4
    unsigned int firstMeshOffset; // offset 0xC, size 0x4
};
class RxObjSpace3DVertex {
    // total size: 0x24
public:
    class RwV3d objVertex; // offset 0x0, size 0xC
    class RxColorUnion c; // offset 0xC, size 0x4
    class RwV3d objNormal; // offset 0x10, size 0xC
    float u; // offset 0x1C, size 0x4
    float v; // offset 0x20, size 0x4
};
class xPECircle {
    // total size: 0x14
public:
    float radius; // offset 0x0, size 0x4
    float deflection; // offset 0x4, size 0x4
    class xVec3 dir; // offset 0x8, size 0xC
};
struct /* @anon4 */ {
    // total size: 0x34
};
class zLasso {
    // total size: 0xFC
public:
    unsigned int flags; // offset 0x0, size 0x4
    float secsTotal; // offset 0x4, size 0x4
    float secsLeft; // offset 0x8, size 0x4
    float stRadius; // offset 0xC, size 0x4
    float tgRadius; // offset 0x10, size 0x4
    float crRadius; // offset 0x14, size 0x4
    class xVec3 stCenter; // offset 0x18, size 0xC
    class xVec3 tgCenter; // offset 0x24, size 0xC
    class xVec3 crCenter; // offset 0x30, size 0xC
    class xVec3 stNormal; // offset 0x3C, size 0xC
    class xVec3 tgNormal; // offset 0x48, size 0xC
    class xVec3 crNormal; // offset 0x54, size 0xC
    class xVec3 honda; // offset 0x60, size 0xC
    float stSlack; // offset 0x6C, size 0x4
    float stSlackDist; // offset 0x70, size 0x4
    float tgSlack; // offset 0x74, size 0x4
    float tgSlackDist; // offset 0x78, size 0x4
    float crSlack; // offset 0x7C, size 0x4
    float currDist; // offset 0x80, size 0x4
    float lastDist; // offset 0x84, size 0x4
    class xVec3 lastRefs[5]; // offset 0x88, size 0x3C
    unsigned char reindex[5]; // offset 0xC4, size 0x5
    class xVec3 anchor; // offset 0xCC, size 0xC
    class xModelTag tag; // offset 0xD8, size 0x20
    class xModelInstance * model; // offset 0xF8, size 0x4
};
class analog_data {
    // total size: 0x18
public:
    class xVec2 offset; // offset 0x0, size 0x8
    class xVec2 dir; // offset 0x8, size 0x8
    float mag; // offset 0x10, size 0x4
    float ang; // offset 0x14, size 0x4
};
class /* @class */ {
    // total size: 0x10
public:
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int labels_size; // offset 0x4, size 0x4
    char * * labels; // offset 0x8, size 0x4
    void * values; // offset 0xC, size 0x4
};
class zAssetPickup {
    // total size: 0x0
};
class HiThere : public callback {
    // total size: 0x8
public:
    class zNPCCommon * npc; // offset 0x4, size 0x4
};
class xEntMotionPenData {
    // total size: 0x14
public:
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char plane; // offset 0x1, size 0x1
    unsigned char pad[2]; // offset 0x2, size 0x2
    float len; // offset 0x4, size 0x4
    float range; // offset 0x8, size 0x4
    float period; // offset 0xC, size 0x4
    float phase; // offset 0x10, size 0x4
};
class xCutsceneInfo {
    // total size: 0x50
public:
    unsigned int Magic; // offset 0x0, size 0x4
    unsigned int AssetID; // offset 0x4, size 0x4
    unsigned int NumData; // offset 0x8, size 0x4
    unsigned int NumTime; // offset 0xC, size 0x4
    unsigned int MaxModel; // offset 0x10, size 0x4
    unsigned int MaxBufEven; // offset 0x14, size 0x4
    unsigned int MaxBufOdd; // offset 0x18, size 0x4
    unsigned int HeaderSize; // offset 0x1C, size 0x4
    unsigned int VisCount; // offset 0x20, size 0x4
    unsigned int VisSize; // offset 0x24, size 0x4
    unsigned int BreakCount; // offset 0x28, size 0x4
    unsigned int pad; // offset 0x2C, size 0x4
    char SoundLeft[16]; // offset 0x30, size 0x10
    char SoundRight[16]; // offset 0x40, size 0x10
};
class xShadowSimplePoly {
    // total size: 0x30
public:
    class xVec3 vert[3]; // offset 0x0, size 0x24
    class xVec3 norm; // offset 0x24, size 0xC
};
class xUpdateCullGroup {
    // total size: 0xC
public:
    unsigned int active; // offset 0x0, size 0x4
    unsigned short startIndex; // offset 0x4, size 0x2
    unsigned short endIndex; // offset 0x6, size 0x2
    class xGroup * groupObject; // offset 0x8, size 0x4
};
struct /* @anon5 */ {
    // total size: 0xD8
};
class zFragGroup {
    // total size: 0x54
public:
    class zFrag * list[21]; // offset 0x0, size 0x54
};
struct /* @anon6 */ {
    // total size: 0x34
};
class xVec4 {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class /* @class */ {
    // total size: 0x4
public:
    union { // inferred
        class xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
        class RwV3d * p; // offset 0x0, size 0x4
    };
};
class RwSurfaceProperties {
    // total size: 0xC
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
class /* @class */ {
    // total size: 0x58
public:
    class xVec3 endPoint[2]; // offset 0x0, size 0x18
    class xVec3 direction; // offset 0x18, size 0xC
    float length; // offset 0x24, size 0x4
    float scale; // offset 0x28, size 0x4
    float width; // offset 0x2C, size 0x4
    float endParam[2]; // offset 0x30, size 0x8
    float endVel[2]; // offset 0x38, size 0x8
    float paramSpan[2]; // offset 0x40, size 0x8
    float arc_height; // offset 0x48, size 0x4
    class xVec3 arc_normal; // offset 0x4C, size 0xC
};
class zFragInfo {
    // total size: 0x60
public:
    union { // inferred
        class zFragGroup group; // offset 0x0, size 0x54
        class zFragParticle particle; // offset 0x0, size 0x4
        class zFragProjectile projectile; // offset 0x0, size 0x60
        class zFragLightning lightning; // offset 0x0, size 0x10
        class zFragSound sound; // offset 0x0, size 0x14
        class zFragShockwave shockwave; // offset 0x0, size 0x38
    };
};
class RpTriangle {
    // total size: 0x8
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    signed short matIndex; // offset 0x6, size 0x2
};
class xVec2 {
    // total size: 0x8
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
class xListItem {
    // total size: 0xC
public:
    signed int flg_travFilter; // offset 0x0, size 0x4
    class NPCConfig * next; // offset 0x4, size 0x4
    class NPCConfig * prev; // offset 0x8, size 0x4
};
struct /* @anon7 */ {
    // total size: 0x34
};
class rxReq {
    // total size: 0x0
};
class xFactoryInst : public RyzMemData {
    // total size: 0xC
public:
    signed int itemType; // offset 0x0, size 0x4
    class xFactoryInst * nextprod; // offset 0x4, size 0x4
    class xFactoryInst * prevprod; // offset 0x8, size 0x4
};
class zCheckPoint {
    // total size: 0x14
public:
    class xVec3 pos; // offset 0x0, size 0xC
    float rot; // offset 0xC, size 0x4
    unsigned int initCamID; // offset 0x10, size 0x4
};
class xEntMPData {
    // total size: 0x40
public:
    float curdist; // offset 0x0, size 0x4
    float speed; // offset 0x4, size 0x4
    class xMovePoint * dest; // offset 0x8, size 0x4
    class xMovePoint * src; // offset 0xC, size 0x4
    class xSpline3 * spl; // offset 0x10, size 0x4
    float dist; // offset 0x14, size 0x4
    unsigned int padalign; // offset 0x18, size 0x4
    class xQuat aquat; // offset 0x20, size 0x10
    class xQuat bquat; // offset 0x30, size 0x10
};
class zPlayerGlobals {
    // total size: 0x1940
public:
    class zEnt ent; // offset 0x0, size 0xD4
    class xEntShadow entShadow_embedded; // offset 0xD4, size 0x28
    class xShadowSimpleCache simpShadow_embedded; // offset 0xFC, size 0x98
    class zGlobalSettings g; // offset 0x194, size 0x150
    class zPlayerSettings * s; // offset 0x2E4, size 0x4
    class zPlayerSettings sb; // offset 0x2F0, size 0x460
    class zPlayerSettings patrick; // offset 0x750, size 0x460
    class zPlayerSettings sandy; // offset 0xBB0, size 0x460
    class xModelInstance * model_spongebob; // offset 0x1010, size 0x4
    class xModelInstance * model_patrick; // offset 0x1014, size 0x4
    class xModelInstance * model_sandy; // offset 0x1018, size 0x4
    unsigned int Visible; // offset 0x101C, size 0x4
    unsigned int Health; // offset 0x1020, size 0x4
    signed int Speed; // offset 0x1024, size 0x4
    float SpeedMult; // offset 0x1028, size 0x4
    signed int Sneak; // offset 0x102C, size 0x4
    signed int Teeter; // offset 0x1030, size 0x4
    float SlipFadeTimer; // offset 0x1034, size 0x4
    signed int Slide; // offset 0x1038, size 0x4
    float SlideTimer; // offset 0x103C, size 0x4
    signed int Stepping; // offset 0x1040, size 0x4
    signed int JumpState; // offset 0x1044, size 0x4
    signed int LastJumpState; // offset 0x1048, size 0x4
    float JumpTimer; // offset 0x104C, size 0x4
    float LookAroundTimer; // offset 0x1050, size 0x4
    unsigned int LookAroundRand; // offset 0x1054, size 0x4
    unsigned int LastProjectile; // offset 0x1058, size 0x4
    float DecelRun; // offset 0x105C, size 0x4
    float DecelRunSpeed; // offset 0x1060, size 0x4
    float HotsauceTimer; // offset 0x1064, size 0x4
    float LeanLerp; // offset 0x1068, size 0x4
    float ScareTimer; // offset 0x106C, size 0x4
    class xBase * ScareSource; // offset 0x1070, size 0x4
    float CowerTimer; // offset 0x1074, size 0x4
    float DamageTimer; // offset 0x1078, size 0x4
    float SundaeTimer; // offset 0x107C, size 0x4
    float ControlOffTimer; // offset 0x1080, size 0x4
    float HelmetTimer; // offset 0x1084, size 0x4
    unsigned int WorldDisguise; // offset 0x1088, size 0x4
    unsigned int Bounced; // offset 0x108C, size 0x4
    float FallDeathTimer; // offset 0x1090, size 0x4
    float HeadbuttVel; // offset 0x1094, size 0x4
    float HeadbuttTimer; // offset 0x1098, size 0x4
    unsigned int SpecialReceived; // offset 0x109C, size 0x4
    class xEnt * MountChimney; // offset 0x10A0, size 0x4
    float MountChimOldY; // offset 0x10A4, size 0x4
    unsigned int MaxHealth; // offset 0x10A8, size 0x4
    unsigned int DoMeleeCheck; // offset 0x10AC, size 0x4
    float VictoryTimer; // offset 0x10B0, size 0x4
    float BadGuyNearTimer; // offset 0x10B4, size 0x4
    float ForceSlipperyTimer; // offset 0x10B8, size 0x4
    float ForceSlipperyFriction; // offset 0x10BC, size 0x4
    float ShockRadius; // offset 0x10C0, size 0x4
    float ShockRadiusOld; // offset 0x10C4, size 0x4
    float Face_ScareTimer; // offset 0x10C8, size 0x4
    unsigned int Face_ScareRandom; // offset 0x10CC, size 0x4
    unsigned int Face_Event; // offset 0x10D0, size 0x4
    float Face_EventTimer; // offset 0x10D4, size 0x4
    float Face_PantTimer; // offset 0x10D8, size 0x4
    unsigned int Face_AnimSpecific; // offset 0x10DC, size 0x4
    unsigned int IdleRand; // offset 0x10E0, size 0x4
    float IdleMinorTimer; // offset 0x10E4, size 0x4
    float IdleMajorTimer; // offset 0x10E8, size 0x4
    float IdleSitTimer; // offset 0x10EC, size 0x4
    signed int Transparent; // offset 0x10F0, size 0x4
    class zEnt * FireTarget; // offset 0x10F4, size 0x4
    unsigned int ControlOff; // offset 0x10F8, size 0x4
    unsigned int ControlOnEvent; // offset 0x10FC, size 0x4
    unsigned int AutoMoveSpeed; // offset 0x1100, size 0x4
    float AutoMoveDist; // offset 0x1104, size 0x4
    class xVec3 AutoMoveTarget; // offset 0x1108, size 0xC
    class xBase * AutoMoveObject; // offset 0x1114, size 0x4
    class zEnt * Diggable; // offset 0x1118, size 0x4
    float DigTimer; // offset 0x111C, size 0x4
    class zPlayerCarryInfo carry; // offset 0x1120, size 0xE0
    class zPlayerLassoInfo lassoInfo; // offset 0x1200, size 0x120
    class xModelTag BubbleWandTag[2]; // offset 0x1320, size 0x40
    class xModelInstance * model_wand; // offset 0x1360, size 0x4
    class xEntBoulder * bubblebowl; // offset 0x1364, size 0x4
    float bbowlInitVel; // offset 0x1368, size 0x4
    class zEntHangable * HangFound; // offset 0x136C, size 0x4
    class zEntHangable * HangEnt; // offset 0x1370, size 0x4
    class zEntHangable * HangEntLast; // offset 0x1374, size 0x4
    class xVec3 HangPivot; // offset 0x1378, size 0xC
    class xVec3 HangVel; // offset 0x1384, size 0xC
    float HangLength; // offset 0x1390, size 0x4
    class xVec3 HangStartPos; // offset 0x1394, size 0xC
    float HangStartLerp; // offset 0x13A0, size 0x4
    class xModelTag HangPawTag[4]; // offset 0x13A4, size 0x80
    float HangPawOffset; // offset 0x1424, size 0x4
    float HangElapsed; // offset 0x1428, size 0x4
    float Jump_CurrGravity; // offset 0x142C, size 0x4
    float Jump_HoldTimer; // offset 0x1430, size 0x4
    float Jump_ChangeTimer; // offset 0x1434, size 0x4
    signed int Jump_CanDouble; // offset 0x1438, size 0x4
    signed int Jump_CanFloat; // offset 0x143C, size 0x4
    signed int Jump_SpringboardStart; // offset 0x1440, size 0x4
    class zPlatform * Jump_Springboard; // offset 0x1444, size 0x4
    signed int CanJump; // offset 0x1448, size 0x4
    signed int CanBubbleSpin; // offset 0x144C, size 0x4
    signed int CanBubbleBounce; // offset 0x1450, size 0x4
    signed int CanBubbleBash; // offset 0x1454, size 0x4
    signed int IsJumping; // offset 0x1458, size 0x4
    signed int IsDJumping; // offset 0x145C, size 0x4
    signed int IsBubbleSpinning; // offset 0x1460, size 0x4
    signed int IsBubbleBouncing; // offset 0x1464, size 0x4
    signed int IsBubbleBashing; // offset 0x1468, size 0x4
    signed int IsBubbleBowling; // offset 0x146C, size 0x4
    signed int WasDJumping; // offset 0x1470, size 0x4
    signed int IsCoptering; // offset 0x1474, size 0x4
    enum _zPlayerWallJumpState WallJumpState; // offset 0x1478, size 0x4
    signed int cheat_mode; // offset 0x147C, size 0x4
    unsigned int Inv_Shiny; // offset 0x1480, size 0x4
    unsigned int Inv_Spatula; // offset 0x1484, size 0x4
    unsigned int Inv_PatsSock[15]; // offset 0x1488, size 0x3C
    unsigned int Inv_PatsSock_Max[15]; // offset 0x14C4, size 0x3C
    unsigned int Inv_PatsSock_CurrentLevel; // offset 0x1500, size 0x4
    unsigned int Inv_LevelPickups[15]; // offset 0x1504, size 0x3C
    unsigned int Inv_LevelPickups_CurrentLevel; // offset 0x1540, size 0x4
    unsigned int Inv_PatsSock_Total; // offset 0x1544, size 0x4
    class xModelTag BubbleTag; // offset 0x1548, size 0x20
    class xEntDrive drv; // offset 0x1568, size 0x7C
    class xSurface * floor_surf; // offset 0x15E4, size 0x4
    class xVec3 floor_norm; // offset 0x15E8, size 0xC
    signed int slope; // offset 0x15F4, size 0x4
    class xCollis earc_coll; // offset 0x15F8, size 0x50
    class xSphere head_sph; // offset 0x1648, size 0x10
    class xModelTag center_tag; // offset 0x1658, size 0x20
    class xModelTag head_tag; // offset 0x1678, size 0x20
    unsigned int TongueFlags[2]; // offset 0x1698, size 0x8
    class xVec3 RootUp; // offset 0x16A0, size 0xC
    class xVec3 RootUpTarget; // offset 0x16AC, size 0xC
    class zCheckPoint cp; // offset 0x16B8, size 0x14
    unsigned int SlideTrackSliding; // offset 0x16CC, size 0x4
    unsigned int SlideTrackCount; // offset 0x16D0, size 0x4
    class xEnt * SlideTrackEnt[111]; // offset 0x16D4, size 0x1BC
    unsigned int SlideNotGroundedSinceSlide; // offset 0x1890, size 0x4
    class xVec3 SlideTrackDir; // offset 0x1894, size 0xC
    class xVec3 SlideTrackVel; // offset 0x18A0, size 0xC
    float SlideTrackDecay; // offset 0x18AC, size 0x4
    float SlideTrackLean; // offset 0x18B0, size 0x4
    float SlideTrackLand; // offset 0x18B4, size 0x4
    unsigned char sb_model_indices[14]; // offset 0x18B8, size 0xE
    class xModelInstance * sb_models[14]; // offset 0x18C8, size 0x38
    unsigned int currentPlayer; // offset 0x1900, size 0x4
    class xVec3 PredictRotate; // offset 0x1904, size 0xC
    class xVec3 PredictTranslate; // offset 0x1910, size 0xC
    float PredictAngV; // offset 0x191C, size 0x4
    class xVec3 PredictCurrDir; // offset 0x1920, size 0xC
    float PredictCurrVel; // offset 0x192C, size 0x4
    float KnockBackTimer; // offset 0x1930, size 0x4
    float KnockIntoAirTimer; // offset 0x1934, size 0x4
};
class _tagLightningZeus {
    // total size: 0xC
public:
    float normal_offset; // offset 0x0, size 0x4
    float back_offset; // offset 0x4, size 0x4
    float side_offset; // offset 0x8, size 0x4
};
class xBaseAsset {
    // total size: 0x8
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
enum en_npcbtyp {
    NPCP_BASIS_NONE = 0,
    NPCP_BASIS_EVILROBOT = 1,
    NPCP_BASIS_FRIENDLYROBOT = 2,
    NPCP_BASIS_LOVINGCITIZEN = 3,
    NPCP_BASIS_GRUMPYCITIZEN = 4,
    NPCP_BASIS_NOMORE = 5,
    NPCP_BASIS_FORCE = 2147483647,
};
class _tagEmitSphere {
    // total size: 0x4
public:
    float radius; // offset 0x0, size 0x4
};
class xCutsceneTime {
    // total size: 0x10
public:
    float StartTime; // offset 0x0, size 0x4
    float EndTime; // offset 0x4, size 0x4
    unsigned int NumData; // offset 0x8, size 0x4
    unsigned int ChunkIndex; // offset 0xC, size 0x4
};
class xLightKit {
    // total size: 0x10
public:
    unsigned int tagID; // offset 0x0, size 0x4
    unsigned int groupID; // offset 0x4, size 0x4
    unsigned int lightCount; // offset 0x8, size 0x4
    class xLightKitLight * lightList; // offset 0xC, size 0x4
};
class xLightKitLight {
    // total size: 0x60
public:
    unsigned int type; // offset 0x0, size 0x4
    class RwRGBAReal color; // offset 0x4, size 0x10
    float matrix[16]; // offset 0x14, size 0x40
    float radius; // offset 0x54, size 0x4
    float angle; // offset 0x58, size 0x4
    class RpLight * platLight; // offset 0x5C, size 0x4
};
enum en_npctgt {
    NPC_TGT_NONE = 0,
    NPC_TGT_PLYR = 1,
    NPC_TGT_ENT = 2,
    NPC_TGT_BASE = 3,
    NPC_TGT_POS = 4,
    NPC_TGT_MVPT = 5,
    NPC_TGT_NOMORE = 6,
    NPC_TGT_FORCEINT = 2147483647,
};
class zPlayerCarryInfo {
    // total size: 0xE0
public:
    class xEnt * grabbed; // offset 0x0, size 0x4
    unsigned int grabbedModelID; // offset 0x4, size 0x4
    class xMat4x3 spin; // offset 0x10, size 0x40
    class xEnt * throwTarget; // offset 0x50, size 0x4
    class xEnt * flyingToTarget; // offset 0x54, size 0x4
    float minDist; // offset 0x58, size 0x4
    float maxDist; // offset 0x5C, size 0x4
    float minHeight; // offset 0x60, size 0x4
    float maxHeight; // offset 0x64, size 0x4
    float maxCosAngle; // offset 0x68, size 0x4
    float throwMinDist; // offset 0x6C, size 0x4
    float throwMaxDist; // offset 0x70, size 0x4
    float throwMinHeight; // offset 0x74, size 0x4
    float throwMaxHeight; // offset 0x78, size 0x4
    float throwMaxStack; // offset 0x7C, size 0x4
    float throwMaxCosAngle; // offset 0x80, size 0x4
    float throwTargetRotRate; // offset 0x84, size 0x4
    float targetRot; // offset 0x88, size 0x4
    unsigned int grabTarget; // offset 0x8C, size 0x4
    class xVec3 grabOffset; // offset 0x90, size 0xC
    float grabLerpMin; // offset 0x9C, size 0x4
    float grabLerpMax; // offset 0xA0, size 0x4
    float grabLerpLast; // offset 0xA4, size 0x4
    unsigned int grabYclear; // offset 0xA8, size 0x4
    float throwGravity; // offset 0xAC, size 0x4
    float throwHeight; // offset 0xB0, size 0x4
    float throwDistance; // offset 0xB4, size 0x4
    float fruitFloorDecayMin; // offset 0xB8, size 0x4
    float fruitFloorDecayMax; // offset 0xBC, size 0x4
    float fruitFloorBounce; // offset 0xC0, size 0x4
    float fruitFloorFriction; // offset 0xC4, size 0x4
    float fruitCeilingBounce; // offset 0xC8, size 0x4
    float fruitWallBounce; // offset 0xCC, size 0x4
    float fruitLifetime; // offset 0xD0, size 0x4
    class xEnt * patLauncher; // offset 0xD4, size 0x4
};
class XGOFTypeInfo {
    // total size: 0xC
public:
    signed int tid; // offset 0x0, size 0x4
    class xFactoryInst * (* creator)(signed int, class RyzMemGrow *, void *); // offset 0x4, size 0x4
    void (* destroyer)(class xFactoryInst *); // offset 0x8, size 0x4
};
class zFragParticle {
    // total size: 0x4
public:
    class zFragParticleAsset * fasset; // offset 0x0, size 0x4
};
class xShadowSimpleCache {
    // total size: 0x98
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned char alpha; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
    unsigned int collPriority; // offset 0x4, size 0x4
    class xVec3 pos; // offset 0x8, size 0xC
    class xVec3 at; // offset 0x14, size 0xC
    class xEnt * castOnEnt; // offset 0x20, size 0x4
    class xShadowSimplePoly poly; // offset 0x24, size 0x30
    float envHeight; // offset 0x54, size 0x4
    float shadowHeight; // offset 0x58, size 0x4
    unsigned int raster; // offset 0x5C, size 0x4
    float dydx; // offset 0x60, size 0x4
    float dydz; // offset 0x64, size 0x4
    class xVec3 corner[4]; // offset 0x68, size 0x30
};
class zPlayerSettings {
    // total size: 0x460
public:
    enum _zPlayerType pcType; // offset 0x0, size 0x4
    float MoveSpeed[6]; // offset 0x4, size 0x18
    float AnimSneak[3]; // offset 0x1C, size 0xC
    float AnimWalk[3]; // offset 0x28, size 0xC
    float AnimRun[3]; // offset 0x34, size 0xC
    float JumpGravity; // offset 0x40, size 0x4
    float GravSmooth; // offset 0x44, size 0x4
    float FloatSpeed; // offset 0x48, size 0x4
    float ButtsmashSpeed; // offset 0x4C, size 0x4
    class zJumpParam Jump; // offset 0x50, size 0x10
    class zJumpParam Bounce; // offset 0x60, size 0x10
    class zJumpParam Spring; // offset 0x70, size 0x10
    class zJumpParam Wall; // offset 0x80, size 0x10
    class zJumpParam Double; // offset 0x90, size 0x10
    class zJumpParam SlideDouble; // offset 0xA0, size 0x10
    class zJumpParam SlideJump; // offset 0xB0, size 0x10
    float WallJumpVelocity; // offset 0xC0, size 0x4
    class zLedgeGrabParams ledge; // offset 0xD0, size 0x380
    float spin_damp_xz; // offset 0x450, size 0x4
    float spin_damp_y; // offset 0x454, size 0x4
    unsigned char talk_anims; // offset 0x458, size 0x1
    unsigned char talk_filter_size; // offset 0x459, size 0x1
    unsigned char talk_filter[4]; // offset 0x45A, size 0x4
};
class xCutsceneData {
    // total size: 0x10
public:
    unsigned int DataType; // offset 0x0, size 0x4
    unsigned int AssetID; // offset 0x4, size 0x4
    unsigned int ChunkSize; // offset 0x8, size 0x4
    union { // inferred
        unsigned int FileOffset; // offset 0xC, size 0x4
        void * DataPtr; // offset 0xC, size 0x4
    };
};
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
class xAnimTransitionList {
    // total size: 0x8
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
};
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
class xEntMotionERData {
    // total size: 0x28
public:
    class xVec3 ret_pos; // offset 0x0, size 0xC
    class xVec3 ext_dpos; // offset 0xC, size 0xC
    float ext_tm; // offset 0x18, size 0x4
    float ext_wait_tm; // offset 0x1C, size 0x4
    float ret_tm; // offset 0x20, size 0x4
    float ret_wait_tm; // offset 0x24, size 0x4
};
class xJSPNodeInfo {
    // total size: 0x8
public:
    signed int originalMatIndex; // offset 0x0, size 0x4
    signed int nodeFlags; // offset 0x4, size 0x4
};
class zFragParticleAsset : public zFragAsset {
    // total size: 0x1D4
public:
    class zFragLocation source; // offset 0x18, size 0x24
    class zFragLocation vel; // offset 0x3C, size 0x24
    class xParEmitterCustomSettings emit; // offset 0x60, size 0x16C
    unsigned int parEmitterID; // offset 0x1CC, size 0x4
    class zParEmitter * parEmitter; // offset 0x1D0, size 0x4
};
class /* @class */ {
    // total size: 0x8
public:
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int mask; // offset 0x4, size 0x4
};
class xModelTag {
    // total size: 0x20
public:
    class xVec3 v; // offset 0x0, size 0xC
    unsigned int matidx; // offset 0xC, size 0x4
    float wt[4]; // offset 0x10, size 0x10
};
class xCoef {
    // total size: 0x10
public:
    float a[4]; // offset 0x0, size 0x10
};
class xRot {
    // total size: 0x10
public:
    class xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
};
class _tagEmitRect {
    // total size: 0x8
public:
    float x_len; // offset 0x0, size 0x4
    float z_len; // offset 0x4, size 0x4
};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
class xSphere {
    // total size: 0x10
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
class xCamera : public xBase {
    // total size: 0x330
public:
    class RwCamera * lo_cam; // offset 0x10, size 0x4
    class xMat4x3 mat; // offset 0x20, size 0x40
    class xMat4x3 omat; // offset 0x60, size 0x40
    class xMat3x3 mbasis; // offset 0xA0, size 0x30
    class xBound bound; // offset 0xD0, size 0x4C
    class xMat4x3 * tgt_mat; // offset 0x11C, size 0x4
    class xMat4x3 * tgt_omat; // offset 0x120, size 0x4
    class xBound * tgt_bound; // offset 0x124, size 0x4
    class xVec3 focus; // offset 0x128, size 0xC
    class xScene * sc; // offset 0x134, size 0x4
    class xVec3 tran_accum; // offset 0x138, size 0xC
    float fov; // offset 0x144, size 0x4
    unsigned int flags; // offset 0x148, size 0x4
    float tmr; // offset 0x14C, size 0x4
    float tm_acc; // offset 0x150, size 0x4
    float tm_dec; // offset 0x154, size 0x4
    float ltmr; // offset 0x158, size 0x4
    float ltm_acc; // offset 0x15C, size 0x4
    float ltm_dec; // offset 0x160, size 0x4
    float dmin; // offset 0x164, size 0x4
    float dmax; // offset 0x168, size 0x4
    float dcur; // offset 0x16C, size 0x4
    float dgoal; // offset 0x170, size 0x4
    float hmin; // offset 0x174, size 0x4
    float hmax; // offset 0x178, size 0x4
    float hcur; // offset 0x17C, size 0x4
    float hgoal; // offset 0x180, size 0x4
    float pmin; // offset 0x184, size 0x4
    float pmax; // offset 0x188, size 0x4
    float pcur; // offset 0x18C, size 0x4
    float pgoal; // offset 0x190, size 0x4
    float depv; // offset 0x194, size 0x4
    float hepv; // offset 0x198, size 0x4
    float pepv; // offset 0x19C, size 0x4
    float orn_epv; // offset 0x1A0, size 0x4
    float yaw_epv; // offset 0x1A4, size 0x4
    float pitch_epv; // offset 0x1A8, size 0x4
    float roll_epv; // offset 0x1AC, size 0x4
    class xQuat orn_cur; // offset 0x1B0, size 0x10
    class xQuat orn_goal; // offset 0x1C0, size 0x10
    class xQuat orn_diff; // offset 0x1D0, size 0x10
    float yaw_cur; // offset 0x1E0, size 0x4
    float yaw_goal; // offset 0x1E4, size 0x4
    float pitch_cur; // offset 0x1E8, size 0x4
    float pitch_goal; // offset 0x1EC, size 0x4
    float roll_cur; // offset 0x1F0, size 0x4
    float roll_goal; // offset 0x1F4, size 0x4
    float dct; // offset 0x1F8, size 0x4
    float dcd; // offset 0x1FC, size 0x4
    float dccv; // offset 0x200, size 0x4
    float dcsv; // offset 0x204, size 0x4
    float hct; // offset 0x208, size 0x4
    float hcd; // offset 0x20C, size 0x4
    float hccv; // offset 0x210, size 0x4
    float hcsv; // offset 0x214, size 0x4
    float pct; // offset 0x218, size 0x4
    float pcd; // offset 0x21C, size 0x4
    float pccv; // offset 0x220, size 0x4
    float pcsv; // offset 0x224, size 0x4
    float orn_ct; // offset 0x228, size 0x4
    float orn_cd; // offset 0x22C, size 0x4
    float orn_ccv; // offset 0x230, size 0x4
    float orn_csv; // offset 0x234, size 0x4
    float yaw_ct; // offset 0x238, size 0x4
    float yaw_cd; // offset 0x23C, size 0x4
    float yaw_ccv; // offset 0x240, size 0x4
    float yaw_csv; // offset 0x244, size 0x4
    float pitch_ct; // offset 0x248, size 0x4
    float pitch_cd; // offset 0x24C, size 0x4
    float pitch_ccv; // offset 0x250, size 0x4
    float pitch_csv; // offset 0x254, size 0x4
    float roll_ct; // offset 0x258, size 0x4
    float roll_cd; // offset 0x25C, size 0x4
    float roll_ccv; // offset 0x260, size 0x4
    float roll_csv; // offset 0x264, size 0x4
    class xVec4 frustplane[12]; // offset 0x270, size 0xC0
};
enum RpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
};
struct /* @anon8 */ {
    // total size: 0x34
};
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
};
enum state_enum {
    STATE_INVALID = -1,
    STATE_BEGIN = 0,
    STATE_DESCRIPTION = 1,
    STATE_REMINDER = 2,
    STATE_SUCCESS = 3,
    STATE_FAILURE = 4,
    STATE_END = 5,
    MAX_STATE = 6,
};
class _tagLightningAdd {
    // total size: 0x40
public:
    unsigned int type; // offset 0x0, size 0x4
    float setup_degrees; // offset 0x4, size 0x4
    float move_degrees; // offset 0x8, size 0x4
    float rot_radius; // offset 0xC, size 0x4
    class xVec3 * start; // offset 0x10, size 0x4
    class xVec3 * end; // offset 0x14, size 0x4
    signed short total_points; // offset 0x18, size 0x2
    signed short end_points; // offset 0x1A, size 0x2
    float time; // offset 0x1C, size 0x4
    float arc_height; // offset 0x20, size 0x4
    float thickness; // offset 0x24, size 0x4
    class iColor_tag color; // offset 0x28, size 0x4
    float rand_radius; // offset 0x2C, size 0x4
    unsigned int flags; // offset 0x30, size 0x4
    float zeus_normal_offset; // offset 0x34, size 0x4
    float zeus_back_offset; // offset 0x38, size 0x4
    float zeus_side_offset; // offset 0x3C, size 0x4
};
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
enum en_LASSO_STATUS {
    LASS_STAT_DONE = 0,
    LASS_STAT_PENDING = 1,
    LASS_STAT_GRABBING = 2,
    LASS_STAT_TOSSING = 3,
    LASS_STAT_NOMORE = 4,
    LASS_STAT_FORCEINT = 2147483647,
};
class zFragProjectile {
    // total size: 0x60
public:
    class zFragProjectileAsset * fasset; // offset 0x0, size 0x4
    class xModelInstance * model; // offset 0x4, size 0x4
    class xParabola path; // offset 0x8, size 0x24
    float angVel; // offset 0x2C, size 0x4
    float t; // offset 0x30, size 0x4
    float tColl; // offset 0x34, size 0x4
    signed int numBounces; // offset 0x38, size 0x4
    float scale; // offset 0x3C, size 0x4
    float parentScale; // offset 0x40, size 0x4
    float alpha; // offset 0x44, size 0x4
    class xVec3 N; // offset 0x48, size 0xC
    class xVec3 axis; // offset 0x54, size 0xC
};
class xCylinder {
    // total size: 0x14
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
struct /* @anon9 */ {
    // total size: 0x34
};
enum en_dupowavmod {
    NPCP_DUPOWAVE_CONTINUOUS = 0,
    NPCP_DUPOWAVE_DISCREET = 1,
    NPCP_DUPOWAVE_NOMORE = 2,
    NPCP_DUPOWAVE_FORCE = 2147483647,
};
class xParabola {
    // total size: 0x24
public:
    class xVec3 initPos; // offset 0x0, size 0xC
    class xVec3 initVel; // offset 0xC, size 0xC
    float gravity; // offset 0x18, size 0x4
    float minTime; // offset 0x1C, size 0x4
    float maxTime; // offset 0x20, size 0x4
};
class xParEmitterCustomSettings : public xParEmitterPropsAsset {
    // total size: 0x16C
public:
    unsigned int custom_flags; // offset 0x138, size 0x4
    unsigned int attachToID; // offset 0x13C, size 0x4
    class xVec3 pos; // offset 0x140, size 0xC
    class xVec3 vel; // offset 0x14C, size 0xC
    float vel_angle_variation; // offset 0x158, size 0x4
    unsigned char rot[3]; // offset 0x15C, size 0x3
    unsigned char padding; // offset 0x15F, size 0x1
    float radius; // offset 0x160, size 0x4
    float emit_interval_current; // offset 0x164, size 0x4
    void * emit_volume; // offset 0x168, size 0x4
};
class RxColorUnion {
    // total size: 0x4
public:
    union { // inferred
        class RwRGBA preLitColor; // offset 0x0, size 0x4
        class RwRGBA color; // offset 0x0, size 0x4
    };
};
class /* @class */ {
    // total size: 0x10
public:
    unsigned char pad[16]; // offset 0x0, size 0x10
};
class xBox {
    // total size: 0x18
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
};
class xQCData {
    // total size: 0x20
public:
    signed char xmin; // offset 0x0, size 0x1
    signed char ymin; // offset 0x1, size 0x1
    signed char zmin; // offset 0x2, size 0x1
    signed char zmin_dup; // offset 0x3, size 0x1
    signed char xmax; // offset 0x4, size 0x1
    signed char ymax; // offset 0x5, size 0x1
    signed char zmax; // offset 0x6, size 0x1
    signed char zmax_dup; // offset 0x7, size 0x1
    class xVec3 min; // offset 0x8, size 0xC
    class xVec3 max; // offset 0x14, size 0xC
};
class RpSector {
    // total size: 0x4
public:
    signed int type; // offset 0x0, size 0x4
};
class RxClusterDefinition {
    // total size: 0x10
public:
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    char * attributeSet; // offset 0xC, size 0x4
};
class xModelBucket {
    // total size: 0x14
public:
    class RpAtomic * Data; // offset 0x0, size 0x4
    class RpAtomic * OriginalData; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
    signed int ClipFlags; // offset 0xC, size 0x4
    unsigned int PipeFlags; // offset 0x10, size 0x4
};
class st_XORDEREDARRAY {
    // total size: 0x10
public:
    void * * list; // offset 0x0, size 0x4
    signed int cnt; // offset 0x4, size 0x4
    signed int max; // offset 0x8, size 0x4
    signed int warnlvl; // offset 0xC, size 0x4
};
class xBBox {
    // total size: 0x24
public:
    class xVec3 center; // offset 0x0, size 0xC
    class xBox box; // offset 0xC, size 0x18
};
class xGrid {
    // total size: 0x34
public:
    unsigned char ingrid_id; // offset 0x0, size 0x1
    unsigned char pad[3]; // offset 0x1, size 0x3
    unsigned short nx; // offset 0x4, size 0x2
    unsigned short nz; // offset 0x6, size 0x2
    float minx; // offset 0x8, size 0x4
    float minz; // offset 0xC, size 0x4
    float maxx; // offset 0x10, size 0x4
    float maxz; // offset 0x14, size 0x4
    float csizex; // offset 0x18, size 0x4
    float csizez; // offset 0x1C, size 0x4
    float inv_csizex; // offset 0x20, size 0x4
    float inv_csizez; // offset 0x24, size 0x4
    float maxr; // offset 0x28, size 0x4
    class xGridBound * * cells; // offset 0x2C, size 0x4
    class xGridBound * other; // offset 0x30, size 0x4
};
class tweak_callback {
    // total size: 0x28
public:
    void (* on_change)(class tweak_info &); // offset 0x0, size 0x4
    void (* on_select)(class tweak_info &); // offset 0x4, size 0x4
    void (* on_unselect)(class tweak_info &); // offset 0x8, size 0x4
    void (* on_start_edit)(class tweak_info &); // offset 0xC, size 0x4
    void (* on_stop_edit)(class tweak_info &); // offset 0x10, size 0x4
    void (* on_expand)(class tweak_info &); // offset 0x14, size 0x4
    void (* on_collapse)(class tweak_info &); // offset 0x18, size 0x4
    void (* on_update)(class tweak_info &); // offset 0x1C, size 0x4
    void (* convert_mem_to_tweak)(class tweak_info &, void *); // offset 0x20, size 0x4
    void (* convert_tweak_to_mem)(class tweak_info &, void *); // offset 0x24, size 0x4
};
enum en_NPC_DAMAGE_TYPE {
    DMGTYP_UNDECIDED = 0,
    DMGTYP_ABOVE = 1,
    DMGTYP_BELOW = 2,
    DMGTYP_SIDE = 3,
    DMGTYP_INSTAKILL = 4,
    DMGTYP_KILLEVENT = 5,
    DMGTYP_HITBYTOSS = 6,
    DMGTYP_NPCATTACK = 7,
    DMGTYP_ROPE = 8,
    DMGTYP_CRUISEBUBBLE = 9,
    DMGTYP_PROJECTILE = 10,
    DMGTYP_BOULDER = 11,
    DMGTYP_BUBBOWL = 12,
    DMGTYP_THUNDER_TIKI_EXPLOSION = 13,
    DMGTYP_DAMAGE_SURFACE = 14,
    DMGTYP_BUNGEED = 15,
    DMGTYP_SURFACE = 16,
    DMGTYP_NOMORE = 17,
    DMGTYP_FORCEINT = 2147483647,
};
enum zFragLocType {
    eFragLocBone = 0,
    eFragLocBoneUpdated = 1,
    eFragLocBoneLocal = 2,
    eFragLocBoneLocalUpdated = 3,
    eFragLocTag = 4,
    eFragLocTagUpdated = 5,
    eFragLocCount = 6,
    eFragLocForceSize = 2147483647,
};
class xPEEntBound {
    // total size: 0xC
public:
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char type; // offset 0x1, size 0x1
    unsigned char pad1; // offset 0x2, size 0x1
    unsigned char pad2; // offset 0x3, size 0x1
    float expand; // offset 0x4, size 0x4
    float deflection; // offset 0x8, size 0x4
};
class xEntMotionOrbitData {
    // total size: 0x18
public:
    class xVec3 center; // offset 0x0, size 0xC
    float w; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
    float period; // offset 0x14, size 0x4
};
class _tagEmitLine {
    // total size: 0x1C
public:
    class xVec3 pos1; // offset 0x0, size 0xC
    class xVec3 pos2; // offset 0xC, size 0xC
    float radius; // offset 0x18, size 0x4
};
class RwSphere {
    // total size: 0x10
public:
    class RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
class _zEnv : public xBase {
    // total size: 0x14
public:
    class xEnvAsset * easset; // offset 0x10, size 0x4
};
class iFogParams {
    // total size: 0x1C
public:
    enum RwFogType type; // offset 0x0, size 0x4
    float start; // offset 0x4, size 0x4
    float stop; // offset 0x8, size 0x4
    float density; // offset 0xC, size 0x4
    class RwRGBA fogcolor; // offset 0x10, size 0x4
    class RwRGBA bgcolor; // offset 0x14, size 0x4
    unsigned char * table; // offset 0x18, size 0x4
};
class xCutsceneZbuffer {
    // total size: 0x10
public:
    float start; // offset 0x0, size 0x4
    float end; // offset 0x4, size 0x4
    float nearPlane; // offset 0x8, size 0x4
    float farPlane; // offset 0xC, size 0x4
};
struct /* @anon10 */ {
    // total size: 0x34
};
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
};
class anim_coll_data {
    // total size: 0x0
};
class NPCTarget {
    // total size: 0x14
public:
    enum en_npctgt typ_target; // offset 0x0, size 0x4
    union { // inferred
        class xEnt * ent_target; // offset 0x4, size 0x4
        class xBase * bas_target; // offset 0x4, size 0x4
        class xVec3 pos_target; // offset 0x4, size 0xC
        class zMovePoint * nav_target; // offset 0x4, size 0x4
    };
    class zNPCCommon * npc_owner; // offset 0x10, size 0x4
};
class xGlobals {
    // total size: 0x700
public:
    class xCamera camera; // offset 0x0, size 0x330
    class _tagxPad * pad0; // offset 0x330, size 0x4
    class _tagxPad * pad1; // offset 0x334, size 0x4
    class _tagxPad * pad2; // offset 0x338, size 0x4
    class _tagxPad * pad3; // offset 0x33C, size 0x4
    signed int profile; // offset 0x340, size 0x4
    char profFunc[6][128]; // offset 0x344, size 0x300
    class xUpdateCullMgr * updateMgr; // offset 0x644, size 0x4
    signed int sceneFirst; // offset 0x648, size 0x4
    char sceneStart[32]; // offset 0x64C, size 0x20
    class RpWorld * currWorld; // offset 0x66C, size 0x4
    class iFogParams fog; // offset 0x670, size 0x1C
    class iFogParams fogA; // offset 0x68C, size 0x1C
    class iFogParams fogB; // offset 0x6A8, size 0x1C
    signed long fog_t0; // offset 0x6C8, size 0x4
    signed long fog_t1; // offset 0x6D0, size 0x4
    signed int option_vibration; // offset 0x6D8, size 0x4
    unsigned int QuarterSpeed; // offset 0x6DC, size 0x4
    float update_dt; // offset 0x6E0, size 0x4
    signed int useHIPHOP; // offset 0x6E4, size 0x4
    unsigned char NoMusic; // offset 0x6E8, size 0x1
    char currentActivePad; // offset 0x6E9, size 0x1
    unsigned char firstStartPressed; // offset 0x6EA, size 0x1
    unsigned int minVSyncCnt; // offset 0x6EC, size 0x4
    unsigned char dontShowPadMessageDuringLoadingOrCutScene; // offset 0x6F0, size 0x1
    unsigned char autoSaveFeature; // offset 0x6F1, size 0x1
};
class xMat3x3 {
    // total size: 0x30
public:
    class xVec3 right; // offset 0x0, size 0xC
    signed int flags; // offset 0xC, size 0x4
    class xVec3 up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class xVec3 at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
};
class BossDamageEffectRecord {
    // total size: 0x108
public:
    float save_F32[64]; // offset 0x0, size 0x100
    float BDEtimer; // offset 0x100, size 0x4
    class xModelInstance * BDEminst; // offset 0x104, size 0x4
};
struct /* @anon11 */ {
    // total size: 0x34
};
class RxClusterRef {
    // total size: 0xC
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
class say_data {
    // total size: 0x8
public:
    signed int total; // offset 0x0, size 0x4
    signed int prev_total; // offset 0x4, size 0x4
};
class zNPCBoss : public zNPCCommon {
    // total size: 0x2B4
public:
    class NPCTarget tgt_cur; // offset 0x2A0, size 0x14
};
class RwObject {
    // total size: 0x8
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};
class xEntMechData {
    // total size: 0x4C
public:
    class xVec3 apos; // offset 0x0, size 0xC
    class xVec3 bpos; // offset 0xC, size 0xC
    class xVec3 dir; // offset 0x18, size 0xC
    float arot; // offset 0x24, size 0x4
    float brot; // offset 0x28, size 0x4
    float ss; // offset 0x2C, size 0x4
    float sr; // offset 0x30, size 0x4
    signed int state; // offset 0x34, size 0x4
    float tsfd; // offset 0x38, size 0x4
    float trfd; // offset 0x3C, size 0x4
    float tsbd; // offset 0x40, size 0x4
    float trbd; // offset 0x44, size 0x4
    float * rotptr; // offset 0x48, size 0x4
};
class tagiRenderArrays {
    // total size: 0x5280
public:
    unsigned short m_index[960]; // offset 0x0, size 0x780
    class RxObjSpace3DVertex m_vertex[480]; // offset 0x780, size 0x4380
    float m_vertexTZ[480]; // offset 0x4B00, size 0x780
};
class xBinaryCamera {
    // total size: 0x70
public:
    class config cfg; // offset 0x0, size 0x3C
    class xCamera * camera; // offset 0x3C, size 0x4
    class xQuat cam_dir; // offset 0x40, size 0x10
    class xVec3 * s1; // offset 0x50, size 0x4
    class xVec3 * s2; // offset 0x54, size 0x4
    float s2_radius; // offset 0x58, size 0x4
    class xVec2 stick_offset; // offset 0x5C, size 0x8
};
class xEntMotionSplineData {
    // total size: 0x4
public:
    signed int unknown; // offset 0x0, size 0x4
};
class RxIoSpec {
    // total size: 0x14
public:
    unsigned int numClustersOfInterest; // offset 0x0, size 0x4
    class RxClusterRef * clustersOfInterest; // offset 0x4, size 0x4
    enum RxClusterValidityReq * inputRequirements; // offset 0x8, size 0x4
    unsigned int numOutputs; // offset 0xC, size 0x4
    class RxOutputSpec * outputs; // offset 0x10, size 0x4
};
class /* @class */ {
    // total size: 0xC
public:
    signed int value_def; // offset 0x0, size 0x4
    signed int value_min; // offset 0x4, size 0x4
    signed int value_max; // offset 0x8, size 0x4
};
class _tagEmitVolume {
    // total size: 0x4
public:
    unsigned int emit_volumeID; // offset 0x0, size 0x4
};

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032C250 -> 0x0032CD60
*/
// Range: 0x32C250 -> 0x32CD60
signed int Process(class zNPCGoalBossSandyClothesline * this /* r18 */, enum en_trantype * trantype /* r17 */, float dt /* r20 */, void * updCtxt /* r22 */, class xScene * xscn /* r23 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x32C250 -> 0x32CD60
        class zNPCBSandy * sandy; // r16
        unsigned int testBits; // r19
        class xVec3 newAt; // r29+0xA8
        float anim; // r29+0xBC
        signed int i; // r21
        class xEnt * rope; // r20
        float anim; // r29+0xB8
        signed int i; // r21
        class xEnt * rope; // r20
        float factor; // r3
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032CD60 -> 0x0032CF30
*/
// Range: 0x32CD60 -> 0x32CF30
signed int Enter(class zNPCGoalBossSandyClothesline * this /* r18 */, float dt /* r20 */, void * updCtxt /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x32CD60 -> 0x32CF30
        class zNPCBSandy * sandy; // r16
        float anim; // r29+0x8C
        signed int i; // r21
        class xEnt * rope; // r20
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032CF30 -> 0x0032CF3C
*/
// Range: 0x32CF30 -> 0x32CF3C
signed int Exit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x32CF30 -> 0x32CF3C
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032CF40 -> 0x0032D160
*/
// Range: 0x32CF40 -> 0x32D160
signed int Process(class zNPCGoalBossSandyRunToRope * this /* r20 */, enum en_trantype * trantype /* r19 */, float dt /* r20 */, void * updCtxt /* r18 */, class xScene * xscn /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x32CF40 -> 0x32D160
        class zNPCBSandy * sandy; // r16
        class xVec3 newAt; // r29+0x70
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032D160 -> 0x0032D420
*/
// Range: 0x32D160 -> 0x32D420
signed int Enter(class zNPCGoalBossSandyRunToRope * this /* r19 */, float dt /* r24 */, void * updCtxt /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x32D160 -> 0x32D420
        class zNPCBSandy * sandy; // r17
        signed int fromRope2; // r16
        class xVec3 pcToSandy; // r29+0x70
        float currDot; // r1
        float smallestDot; // r23
        float secondSmallest; // r22
        float smallestDotDist; // r21
        float secondSmallestDotDist; // r20
        signed int i; // r7
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032D420 -> 0x0032D430
*/
// Range: 0x32D420 -> 0x32D430
signed int Process(class zNPCGoalBossSandyGetUp * this /* r2 */, enum en_trantype * trantype /* r2 */, float dt /* r29 */, void * updCtxt /* r2 */, class xScene * xscn /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x32D420 -> 0x32D430
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032D430 -> 0x0032D54C
*/
// Range: 0x32D430 -> 0x32D54C
signed int Enter(class zNPCGoalBossSandyGetUp * this /* r18 */, float dt /* r20 */, void * updCtxt /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x32D430 -> 0x32D54C
        class zNPCBSandy * sandy; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032D550 -> 0x0032D5A8
*/
// Range: 0x32D550 -> 0x32D5A8
signed int Exit(class zNPCGoalBossSandySit * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x32D550 -> 0x32D5A8
        class zNPCBSandy * sandy; // r4
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032D5B0 -> 0x0032DED0
*/
// Range: 0x32D5B0 -> 0x32DED0
signed int Process(class zNPCGoalBossSandySit * this /* r19 */, enum en_trantype * trantype /* r18 */, float dt /* r21 */, void * updCtxt /* r17 */, class xScene * xscn /* r22 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x32D5B0 -> 0x32DED0
        class zNPCBSandy * sandy; // r16
        float popHeight; // r29+0xA0
        signed int numRots; // r3
        float bVelMag; // r29+0xA0
        class xVec3 * pos; // r21
        signed int underScoreboard; // r20
        class xVec3 downward; // r29+0x90
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032DED0 -> 0x0032DFF0
*/
// Range: 0x32DED0 -> 0x32DFF0
signed int Enter(class zNPCGoalBossSandySit * this /* r19 */, float dt /* r20 */, void * updCtxt /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x32DED0 -> 0x32DFF0
        class zNPCBSandy * sandy; // r17
        unsigned int numHints; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032DFF0 -> 0x0032DFFC
*/
// Range: 0x32DFF0 -> 0x32DFFC
signed int Exit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x32DFF0 -> 0x32DFFC
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032E000 -> 0x0032E4CC
*/
// Range: 0x32E000 -> 0x32E4CC
signed int Process(class zNPCGoalBossSandyLeap * this /* r21 */, enum en_trantype * trantype /* r20 */, float dt /* r20 */, void * updCtxt /* r19 */, class xScene * xscn /* r22 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x32E000 -> 0x32E4CC
        class zNPCBSandy * sandy; // r18
        signed int shouldDoDamage; // r17
        signed int newAnimIndex; // r16
        float timeRemain; // r29+0xA0
        float invDur; // r4
        class zJumpParam jparm; // r29+0x90
        signed int i; // r3
        unsigned int animID; // r16
        signed int rc; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032E4D0 -> 0x0032E6B4
*/
// Range: 0x32E4D0 -> 0x32E6B4
signed int Enter(class zNPCGoalBossSandyLeap * this /* r2 */, float dt /* r29 */, void * updCtxt /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x32E4D0 -> 0x32E6B4
        class zNPCBSandy * sandy; // r2
        float rad2; // r1
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032E6C0 -> 0x0032E6D4
*/
// Range: 0x32E6C0 -> 0x32E6D4
signed int Exit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x32E6C0 -> 0x32E6D4
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032E6E0 -> 0x0032EA0C
*/
// Range: 0x32E6E0 -> 0x32EA0C
signed int Process(class zNPCGoalBossSandyElbowDrop * this /* r20 */, enum en_trantype * trantype /* r19 */, float dt /* r20 */, void * updCtxt /* r18 */, class xScene * xscn /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x32E6E0 -> 0x32EA0C
        class zNPCBSandy * sandy; // r16
        signed int i; // r3
        class xVec3 newAt; // r29+0x70
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032EA10 -> 0x0032EB88
*/
// Range: 0x32EA10 -> 0x32EB88
signed int Enter(class zNPCGoalBossSandyElbowDrop * this /* r18 */, float dt /* r20 */, void * updCtxt /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x32EA10 -> 0x32EB88
        class zNPCBSandy * sandy; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032EB90 -> 0x0032F7C4
*/
// Range: 0x32EB90 -> 0x32F7C4
signed int Process(class zNPCGoalBossSandyNoHead * this /* r20 */, enum en_trantype * trantype /* r19 */, float dt /* r21 */, void * updCtxt /* r18 */, class xScene * xscn /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x32EB90 -> 0x32F7C4
        class zNPCBSandy * sandy; // r16
        unsigned int numHints; // r2
        class xVec3 newAt; // r29+0xD0
        float lerpFactor; // r20
        class xMat4x3 boneMat; // r29+0x90
        class xQuat q; // r29+0x80
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032F7D0 -> 0x0032F830
*/
// Range: 0x32F7D0 -> 0x32F830
signed int Enter(class zNPCGoalBossSandyNoHead * this /* r2 */, float dt /* r29 */, void * updCtxt /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x32F7D0 -> 0x32F830
        class zNPCBSandy * sandy; // r7
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032F830 -> 0x0032FAA8
*/
// Range: 0x32F830 -> 0x32FAA8
signed int Process(class zNPCGoalBossSandyMelee * this /* r20 */, enum en_trantype * trantype /* r19 */, float dt /* r20 */, void * updCtxt /* r18 */, class xScene * xscn /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x32F830 -> 0x32FAA8
        class zNPCBSandy * sandy; // r16
        class xVec3 newAt; // r29+0x70
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032FAB0 -> 0x0032FB18
*/
// Range: 0x32FAB0 -> 0x32FB18
signed int Exit(class zNPCGoalBossSandyMelee * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x32FAB0 -> 0x32FB18
        class zNPCBSandy * sandy; // r5
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032FB20 -> 0x0032FC40
*/
// Range: 0x32FB20 -> 0x32FC40
signed int Enter(class zNPCGoalBossSandyMelee * this /* r18 */, float dt /* r20 */, void * updCtxt /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x32FB20 -> 0x32FC40
        class zNPCBSandy * sandy; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032FC40 -> 0x0032FC84
*/
// Range: 0x32FC40 -> 0x32FC84
signed int Exit(class zNPCGoalBossSandyChase * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x32FC40 -> 0x32FC84
        class zNPCBSandy * sandy; // r6
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032FC90 -> 0x0032FEA8
*/
// Range: 0x32FC90 -> 0x32FEA8
signed int Process(class zNPCGoalBossSandyChase * this /* r20 */, enum en_trantype * trantype /* r19 */, float dt /* r20 */, void * updCtxt /* r18 */, class xScene * xscn /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x32FC90 -> 0x32FEA8
        class zNPCBSandy * sandy; // r16
        class xVec3 newAt; // r29+0x70
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032FEB0 -> 0x0032FEEC
*/
// Range: 0x32FEB0 -> 0x32FEEC
signed int Enter(class zNPCGoalBossSandyChase * this /* r2 */, float dt /* r29 */, void * updCtxt /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x32FEB0 -> 0x32FEEC
        class zNPCBSandy * sandy; // r6
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032FEF0 -> 0x003300CC
*/
// Range: 0x32FEF0 -> 0x3300CC
signed int Process(class zNPCGoalBossSandyTaunt * this /* r20 */, enum en_trantype * trantype /* r19 */, float dt /* r20 */, void * updCtxt /* r18 */, class xScene * xscn /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x32FEF0 -> 0x3300CC
        class zNPCBSandy * sandy; // r16
        class xVec3 newAt; // r29+0x70
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003300D0 -> 0x0033018C
*/
// Range: 0x3300D0 -> 0x33018C
signed int Enter(class zNPCGoalBossSandyTaunt * this /* r17 */, float dt /* r20 */, void * updCtxt /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3300D0 -> 0x33018C
        class zNPCBSandy * sandy; // r18
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00330190 -> 0x003301D4
*/
// Range: 0x330190 -> 0x3301D4
signed int Exit(class zNPCGoalBossSandyIdle * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x330190 -> 0x3301D4
        class zNPCBSandy * sandy; // r6
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003301E0 -> 0x00330430
*/
// Range: 0x3301E0 -> 0x330430
signed int Process(class zNPCGoalBossSandyIdle * this /* r21 */, enum en_trantype * trantype /* r20 */, float dt /* r20 */, void * updCtxt /* r19 */, class xScene * xscn /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3301E0 -> 0x330430
        class zNPCBSandy * sandy; // r17
        class xVec3 newAt; // r29+0x90
        float lerp; // r29+0xA0
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00330430 -> 0x0033047C
*/
// Range: 0x330430 -> 0x33047C
signed int Enter(class zNPCGoalBossSandyIdle * this /* r2 */, float dt /* r29 */, void * updCtxt /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x330430 -> 0x33047C
        class zNPCBSandy * sandy; // r6
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00330480 -> 0x00330588
*/
// Range: 0x330480 -> 0x330588
static signed int clotheslineCB(class xGoal * rawgoal /* r2 */, enum en_trantype * trantype /* r18 */, float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x330480 -> 0x330588
        class zNPCGoalBossSandyClothesline * cl; // r2
        class zNPCBSandy * sandy; // r17
        signed int nextgoal; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00330590 -> 0x00330658
*/
// Range: 0x330590 -> 0x330658
static signed int runToRopeCB(class xGoal * rawgoal /* r2 */, enum en_trantype * trantype /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x330590 -> 0x330658
        class zNPCBSandy * sandy; // r8
        signed int nextgoal; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00330660 -> 0x0033080C
*/
// Range: 0x330660 -> 0x33080C
static signed int getUpCB(class xGoal * rawgoal /* r2 */, enum en_trantype * trantype /* r18 */, float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x330660 -> 0x33080C
        class zNPCBSandy * sandy; // r17
        signed int nextgoal; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00330810 -> 0x00330944
*/
// Range: 0x330810 -> 0x330944
static signed int sitCB(class xGoal * rawgoal /* r2 */, enum en_trantype * trantype /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x330810 -> 0x330944
        class zNPCGoalBossSandySit * sit; // r2
        class zNPCBSandy * sandy; // r17
        signed int nextgoal; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00330950 -> 0x00330A08
*/
// Range: 0x330950 -> 0x330A08
static signed int leapCB(class xGoal * rawgoal /* r2 */, enum en_trantype * trantype /* r17 */, float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x330950 -> 0x330A08
        class zNPCGoalBossSandyLeap * leap; // r2
        class zNPCBSandy * sandy; // r18
        signed int nextgoal; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00330A10 -> 0x00330B90
*/
// Range: 0x330A10 -> 0x330B90
static signed int elbowDropCB(class xGoal * rawgoal /* r2 */, enum en_trantype * trantype /* r18 */, float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x330A10 -> 0x330B90
        class zNPCGoalBossSandyElbowDrop * edrop; // r2
        class zNPCBSandy * sandy; // r17
        signed int nextgoal; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00330B90 -> 0x00330C24
*/
// Range: 0x330B90 -> 0x330C24
static signed int noHeadCB(class xGoal * rawgoal /* r2 */, enum en_trantype * trantype /* r16 */, float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x330B90 -> 0x330C24
        class zNPCGoalBossSandyNoHead * noHead; // r2
        class zNPCBSandy * sandy; // r4
        signed int nextgoal; // r17
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00330C30 -> 0x00330EB0
*/
// Range: 0x330C30 -> 0x330EB0
static signed int meleeCB(class xGoal * rawgoal /* r2 */, enum en_trantype * trantype /* r19 */, float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x330C30 -> 0x330EB0
        class zNPCGoalBossSandyMelee * melee; // r16
        class zNPCBSandy * sandy; // r18
        signed int nextgoal; // r17
        unsigned int numWarnings; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00330EB0 -> 0x00331210
*/
// Range: 0x330EB0 -> 0x331210
static signed int chaseCB(class xGoal * rawgoal /* r2 */, enum en_trantype * trantype /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x330EB0 -> 0x331210
        class zNPCGoalBossSandyChase * chase; // r18
        class zNPCBSandy * sandy; // r17
        signed int nextgoal; // r16
        class xVec3 pcFuturePos; // r29+0x60
        float futureDist; // r29+0x70
        float pcDistToOrigin; // r3
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00331210 -> 0x0033135C
*/
// Range: 0x331210 -> 0x33135C
static signed int tauntCB(class xGoal * rawgoal /* r2 */, enum en_trantype * trantype /* r17 */, float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x331210 -> 0x33135C
        class zNPCGoalBossSandyTaunt * taunt; // r2
        class zNPCBSandy * sandy; // r4
        signed int nextgoal; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00331360 -> 0x00331448
*/
// Range: 0x331360 -> 0x331448
static signed int idleCB(class xGoal * rawgoal /* r2 */, enum en_trantype * trantype /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x331360 -> 0x331448
        class zNPCGoalBossSandyIdle * idle; // r2
        class zNPCBSandy * sandy; // r5
        signed int nextgoal; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00331450 -> 0x00331F68
*/
// Range: 0x331450 -> 0x331F68
void NewTime(class zNPCBSandy * this /* r17 */, class xScene * xscn /* r23 */, float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x331450 -> 0x331F68
        signed int csn; // r16
        signed int i; // r6
        float lenRight; // r1
        float lenLeft; // r29+0xB0
        float length; // r3
        class xCollis * coll; // r20
        class xCollis * cend; // r19
        class xVec3 knockback; // r29+0xA0
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00331F70 -> 0x00331FBC
*/
// Range: 0x331F70 -> 0x331FBC
void zNPCBSandy_GameIsPaused() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x331F70 -> 0x331FBC
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00331FC0 -> 0x003320FC
*/
// Range: 0x331FC0 -> 0x3320FC
void zNPCBSandy_AddBoundEntsToGrid() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x331FC0 -> 0x3320FC
        signed int i; // r18
        signed int isLimb; // r19
        class xEnt * ent; // r17
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00332100 -> 0x00332120
*/
// Range: 0x332100 -> 0x332120
void Damage(class zNPCBSandy * this /* r2 */, enum en_NPC_DAMAGE_TYPE damtype /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x332100 -> 0x332120
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00332120 -> 0x00332328
*/
// Range: 0x332120 -> 0x332328
void hiddenByCutscene(class zNPCBSandy * this /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x332120 -> 0x332328
        signed int i; // r17
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00332330 -> 0x00333578
*/
// Range: 0x332330 -> 0x333578
void Process(class zNPCBSandy * this /* r17 */, class xScene * xscn /* r16 */, float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x332330 -> 0x333578
        signed int csn; // r18
        signed int i; // r8
        signed int j; // r8
        signed int loResEdge; // r8
        class xEnt * rope; // r7
        signed int numdata; // r2
        float intensity; // r29+0xD0
        signed int wasBeat; // r3
        float clr[3]; // r29+0xC0
        signed int picker; // r3
        float minAlpha; // r29+0xD0
        signed int whichPoint; // r3
        class xVec3 newPoint; // r29+0xB0
        class xVec3 newTan; // r29+0xA0
        float urnd; // r3
        float dist2; // r6
        class xVec3 knockback; // r29+0x90
        class xVec3 pnt1; // r29+0x80
        class xVec3 pnt2; // r29+0x70
        class xVec3 offset; // r29+0x60
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00333580 -> 0x00333600
*/
// Range: 0x333580 -> 0x333600
static signed int BoundEventCB(class xBase * to /* r2 */, unsigned int toEvent /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x333580 -> 0x333600
        class xEnt * ent; // r2
        unsigned int i; // r3
        class zNPCBSandy * sandy; // r5
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00333600 -> 0x0033380C
*/
// Range: 0x333600 -> 0x33380C
static void MakeOBBFor(signed int index1 /* r2 */, signed int index2 /* r17 */, class xEnt * ent /* r21 */, class xMat4x3 * matArray /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x333600 -> 0x33380C
        class xVec3 pnt1; // r29+0xA0
        class xVec3 pnt2; // r29+0x90
        class xVec3 cross; // r29+0x80
        float len; // r29+0xB0
        float ang; // r29+0xB0
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00333810 -> 0x003339BC
*/
// Range: 0x333810 -> 0x3339BC
static void GetBonePos(class xVec3 * result /* r17 */, class xMat4x3 * matArray /* r3 */, signed int index /* r2 */, class xVec3 * offset /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x333810 -> 0x3339BC
        class xMat4x3 tmpMat; // r29+0x30
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003339C0 -> 0x00333B88
*/
// Range: 0x3339C0 -> 0x333B88
static void UpdateSandyBossCam(class zNPCBSandy * sandy /* r16 */, float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3339C0 -> 0x333B88
        signed int needToCallStart; // r17
        class xVec3 tempTarget; // r29+0x40
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00333B90 -> 0x00333FF8
*/
// Range: 0x333B90 -> 0x333FF8
void UpdateFX(class zNPCBSandy * this /* r21 */, float dt /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x333B90 -> 0x333FF8
        signed int scoreboard; // r29+0xB0
        signed int i; // r20
        unsigned int whichBolt; // r19
        float whatAng; // r29+0x110
        class xMat3x3 rot; // r29+0xC0
        class xVec3 start; // r29+0x100
        class xVec3 end; // r29+0xF0
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00334000 -> 0x00334428
*/
// Range: 0x334000 -> 0x334428
void InitFX(class zNPCBSandy * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x334000 -> 0x334428
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00334430 -> 0x003345AC
*/
// Range: 0x334430 -> 0x3345AC
void CalcMagnetizeInfo(class zNPCBSandy * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x334430 -> 0x3345AC
        class xMat4x3 boneMat; // r29+0x20
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003345B0 -> 0x00334910
*/
// Range: 0x3345B0 -> 0x334910
void Render(class zNPCBSandy * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3345B0 -> 0x334910
        class xMat4x3 mat; // r29+0x20
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00334910 -> 0x00334A84
*/
// Range: 0x334910 -> 0x334A84
static void zNPCBSandy_BossDamageEffect_Update(float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x334910 -> 0x334A84
        signed int j; // r17
        float a; // r3
        float angle; // r22
        float gb; // r21
        class xModelInstance * minst; // r18
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00334A90 -> 0x00334C40
*/
// Range: 0x334A90 -> 0x334C40
static void zNPCBSandy_BossDamageEffect(class xModelInstance * minst /* r2 */, unsigned int turnOff /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x334A90 -> 0x334C40
        signed int i; // r9
        signed int j; // r6
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00334C40 -> 0x00335090
*/
// Range: 0x334C40 -> 0x335090
static void SpringRender(class SandyLimbSpring * spring /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x334C40 -> 0x335090
        float end1; // r24
        float end2; // r23
        float curr; // r9
        float percent; // r8
        float len; // r22
        float radius; // r21
        float minStep; // r20
        float step; // r29+0x90
        float node1Dist; // r5
        float node2Dist; // r29+0x90
        class RxObjSpace3DVertex * verts; // r20
        unsigned int numVerts; // r19
        signed int done; // r18
        signed int currSin; // r17
        signed int currCos; // r16
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00335090 -> 0x00335258
*/
// Range: 0x335090 -> 0x335258
unsigned int AnimPick(class zNPCBSandy * this /* r2 */, signed int gid /* r2 */, class xGoal * rawgoal /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x335090 -> 0x335258
        signed int index; // r6
        unsigned int animID; // r2
        class zNPCGoalBossSandyClothesline * cl; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00335260 -> 0x003352A0
*/
// Range: 0x335260 -> 0x3352A0
void ParseINI(class zNPCBSandy * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x335260 -> 0x3352A0
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003352A0 -> 0x00335B20
*/
// Range: 0x3352A0 -> 0x335B20
void Reset(class zNPCBSandy * this /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3352A0 -> 0x335B20
        signed int i; // r5
        signed int j; // r3
        class RwTexture * tempTex; // r2
        char objName[32]; // r29+0x90
        unsigned int size; // r29+0xBC
        class xMarkerAsset * marker; // r2
        class xAnimState * state; // r19
        class xModelInstance * currModel; // r4
        class xVec3 endPnt; // r29+0xB0
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00335B20 -> 0x00335D5C
*/
// Range: 0x335B20 -> 0x335D5C
void SelfSetup(class zNPCBSandy * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x335B20 -> 0x335D5C
        class xBehaveMgr * bmgr; // r2
        class xPsyche * psy; // r16
        class xGoal * goal; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00335D60 -> 0x00335F00
*/
// Range: 0x335D60 -> 0x335F00
void Setup(class zNPCBSandy * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x335D60 -> 0x335F00
        signed int i; // r19
        char objName[32]; // r29+0x50
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00335F00 -> 0x003365F4
*/
// Range: 0x335F00 -> 0x3365F4
void Init(class zNPCBSandy * this /* r20 */, class xEntAsset * asset /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x335F00 -> 0x3365F4
        signed int i; // r19
        class xEnt * ent; // r18
        char objName[32]; // r29+0x80
        class xMarkerAsset * laserMarker; // r2
        unsigned int colorPicker; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00336600 -> 0x00336758
*/
// Range: 0x336600 -> 0x336758
class xAnimTable * ZNPC_AnimTable_BossSandyScoreboard() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x336600 -> 0x336758
        class xAnimTable * table; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00336760 -> 0x00336990
*/
// Range: 0x336760 -> 0x336990
class xAnimTable * ZNPC_AnimTable_BossSandyHead() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x336760 -> 0x336990
        class xAnimTable * table; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00336990 -> 0x003369AC
*/
// Range: 0x336990 -> 0x3369AC
static unsigned int HeadNotShocked() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x336990 -> 0x3369AC
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003369B0 -> 0x003369C0
*/
// Range: 0x3369B0 -> 0x3369C0
static unsigned int HeadIsShocked() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3369B0 -> 0x3369C0
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003369C0 -> 0x003369DC
*/
// Range: 0x3369C0 -> 0x3369DC
static unsigned int HeadNotCarried() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3369C0 -> 0x3369DC
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003369E0 -> 0x003369FC
*/
// Range: 0x3369E0 -> 0x3369FC
static unsigned int HeadIsCarried() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3369E0 -> 0x3369FC
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeBossSandy.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00336A00 -> 0x0033713C
*/
// Range: 0x336A00 -> 0x33713C
class xAnimTable * ZNPC_AnimTable_BossSandy() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x336A00 -> 0x33713C
        class xAnimTable * table; // r16
        signed int ourAnims[25]; // r29+0x40
        class xAnimTransition * cur; // r3
    }
}

