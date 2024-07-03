#ifndef _FUNCTIONS_
#define _FUNCTIONS_

#include "types.h"
#include "common_structs.h"
#include "engine/math.h"
#include "PR/os.h"
#include "engine/siman.h"

typedef s32 func_ptr(void);
void HuPrcSleep(s32);
f32 sinf(f32);
void func_8006EEB8(s16, u8, u8, s16, s16);
void func_8006F3BC(s16, s16, s16, s32, s32);
s32 func_8006E93C(TextWindow*, void*);
void func_800673B0(s16, s16, f32);
void func_800477AC(void);
void func_80048060(void);
void func_80046B24(void);
void func_80067598(s16, s16, s32);
void func_80047348(omObjData*);
void func_80046E84(void);
void func_80047DBC(void);
void func_800479B8(s32);
void func_8004388C(s32);
void func_8004746C(s32);
s32 func_80054FE4(void);
s16 func_80076740(unkCommonStruct0*, char*, u8, s16, s16);
void func_80005A28(omObjData*);
void func_8004720C(omObjData*);
void func_80077044(unkCommonStruct0*);
void func_8005DC18(omObjData*, s32);
s16 func_80038A9C(unk2C0C0StructC0*, void*, s32, char*);
f32 func_8000A72C(f32, f32, f32, f32);
u8 func_800179C0(s32);
void func_80028510(s32, s32, s32, s32, s32);
void func_80028BE0(s32);
u16 func_800594FC(s16);
void func_800603F0(s32);
f32 fabsf(f32);
void func_80026174(s16, s16, f32);
u16 func_8005FD5C(void);
void func_8000960C(s32);
void func_8004B730(Vec3f*, Vec2f*);
void func_80045500(omObjData*);
void func_800456C4(void);
void func_8004B730(Vec3f*, Vec2f*);
void func_80019A78(Vec3f*, Vec3f*, Vec3f*, Vec3f*, Vec3f*, Vec3f*);
void func_800A14F0(Vec3f*, Vec3f*, Vec3f*);
void func_800410E8(u8);
s32 func_80041624(u8);
void omDelPrcObj(void);
void func_80025F60(s16, s32);
void func_80041048(u8, s32);
void func_800413B0(u8);
s16 func_80041604(u8);
void func_80053020(void);
void func_80041370(void);
s32 func_8004DBBC(void);
void func_80070FF8(s16, s16, s16, s16, u8);
void func_8003FCD4(void);
void func_800F7F50(void);
void func_8000941C(omObjData*, f32, f32, f32);
void func_800090A4(omObjData*);
void func_80009448(void);
void func_8000C250(s16);
void func_8004A510(void);
void func_8004CC8C(s16, s16);
void func_8004CDA0(s16);
void omPrcSetStatBit(Process*, s32);
void func_80041F84(s32);
void func_80041FE0(s32);
u16 func_8004B61C(Vec2f*);
void func_8004B6D8(Vec2f*);
void func_80056984(void);
void func_8005FD7C(void);
void func_8005FECC(void);
void* func_800533F8(s32, s32);
void func_80060214(s32);
void func_80067558(s16, s32, u8, u8, u8, s32);
void func_8006E0A4(s16, s32);
s32 func_8006FCF0(s16, s32, s32);
void func_800484C4(Object*, s16);
void func_8004E0E8(s32);
Process* func_80041C04(s16);
void SetPlayerLandedSpaceType(s16 playerIndex, s16 spaceType);
void ShowPlayerCoinChange(s32, s32);
void func_800415CC(s16, s32);
Process* func_800419D8(s16);
Process* func_80048000(s32);
void func_8005884C(Vec3f*);
void func_8004CC8C(s16, s16);
void func_8004CDA0(s16);
void func_80052FD4(s16);
Process* func_800532B4(void);
Process* func_800531E8(void);
void func_80021CDC(s16, u8, s32);
void func_800500A4(void);
void func_80050160(void);
void func_80060618(s32, u8);
f32 cosf(f32);
void func_8004EA8C(Object*, Vec3f*, s32, Vec3f*);
s32 func_8004F018(Object*);
void func_8004F40C(Object*, s32, s32);
void func_8004F8DC(void);
s32 func_8004F954(s32, s32);
void func_8004F9F4(s32, f32, f32, f32, s32);
void func_8004FA90(s32, f32, f32, f32);
void func_80025AD4(s16);
void func_8005B244(void);
void func_80059EBC(void);
s16 func_80059C28(void);
s16 func_800767B4(unkCommonStruct0*, void*, u8, s16, s16);
void func_8006EB80(void);
void func_8007149C(u8*, u8*);
void func_80018CF8(s32, u8);
s16 func_8007186C(s32);
s32 func_8003EDDC(s32*);
void func_8003EE3C(s32);
s32 func_8003EE58(s32);
unk_Struct02* func_8005077C(s32);
void func_80050A7C(unk_Struct02*);
void func_80053454(unk_Struct02*);
void func_8004501C(s32);
void func_800446E0(void);
void func_8004452C(void);
void func_80043D68(void);
void func_80047BE0(s32);
s32 func_80054FA8(void);
void func_800441D4(void);
void func_800674F4(s16, s32, s32, s32, s32);
void func_8004E248(omObjData* arg0);
s16 func_8006FCC0(s16);
void func_800710A4(s32, s32, s32, s32);
void func_8007155C(s16, s32);
void func_8004DBC8(s32);
void func_8006DA1C(s16, s32, s32);
void func_8006E154(s16, s16);
void func_800717C0(s32);
void func_8006DE20(s16, f32, f32);
void func_8006DEC8(s16, s32, s32);
void func_8006E01C(s16, f32);
void func_80071740(s16, s32);
void func_80056730(s32 arg0, s16 arg1, s16 arg2);
f32 func_800A13C0(Vec3f*, Vec3f*);
void func_8004D328(void);
void func_800A0E00(Vec3f*, Vec3f*, Vec3f*);
void func_800A0F00(Vec3f*, f32, Vec3f*);
void func_8003D408(Vec3f*);
void func_8004D0DC(void);
void func_8004DB9C(s32);
f32 func_800A1200(Vec3f*);
s16 PlayerIsCurrent(s16);
void func_8004CB70(s16, s16, Vec3f*);
void func_8003D408(Vec3f*);
f32 func_8003D2B0(Vec3f*);
f32 func_8003D8CC(Vec3f*, Vec3f*);
void ShowBasicSprite(s32);
void func_80018D44(s32, s32);
void func_80008FD0(omObjData*, f32);
void func_8000979C(omObjData*, s32, s32, u16, s32, s32);
void func_8001874C(omObjData*, s32, s32, s32, s32);
void func_800187D0(omObjData*, s32, s32, s32, s32);
void func_80009618(s32);
void func_8002456C(s16);
void func_800211BC(s16, u8);
void func_8003E5E0(Object*);
void func_8001D4D4(s32, Vec4f*);
void func_8004D2A4(s16, s32, s16);
s32 DirectionPrompt(s32);
u32 PlayerIsCPU(s16 index);
void func_8003B908(s32);
void func_8003BE84(s32, s32);
void func_8003C060(s32, s16, s32);
s32 func_8003C218(s16, void*);
void func_800587EC(s32, s16, s16);
void func_8003D514(Vec3f*, f32);
Process* func_8004D3F4(Vec3f*, Vec3f*, Vec3f*, s32);
void SetPlayerAnimation(s32 index, s16 animation, s32 unk);
//void func_8004CB20(s32);
void func_800587BC(s32, s32, s32, s32);
void SetNextChainAndSpace(s16, s16, s16);
void func_8003FEFC(u8);
void func_800405DC(s32);
s16 GetAbsSpaceIndexFromChainSpaceIndex(u16, u16);
void func_8003E5E0(Object*);
void func_8003E664(Object*);
Process* func_8004D648(Vec3f*, Vec3f*, Vec3f*, f32);
void func_80058910(s32, s32);
void func_800211BC(s16, u8);
u8 func_80052F6C(s16 index);
s16 GetCurrentPlayerIndex(void);
void func_80045E6C(s32);
s32 func_80045D84(s32, s32, s32);
s16 RunDecisionTree(DecisionTreeNonLeafNode*);
void func_8004CD84(Vec3f*);
Process* func_8004D1EC(Vec3f*, Vec3f*, Vec3f*, s32);
Object* func_8003E320(Object*);
void func_8003E664(Object*);
void func_800A0E80(Vec3f*, Vec3f*, Vec3f*);
void func_80052E84(s16);
void func_80056A08(s32, s16, s32, s32);
void func_8006DDC8(s16, s32, s16);
void func_80072080(s16);
void func_80025F10(s16, s32);
s16 func_8007194C(s32, s32, s32);
void func_8001D520(s32, Vec3f*, Vec3f*);
void func_80070D90(s16);
s16 func_8006D010(s16, s16, s16, s16, s32, s32);
void func_800F86EC(void);
void func_80027C1C(s16, f32, f32, s32, s32);
void func_8005AF60(void);
void func_80026B8C(s16, f32, f32, s32);
void func_80059348(s16);
s32 omOvlCallEx(s32 arg0, s16 arg1, u16 arg2);
void func_8004F504(void*);
void func_800503B0(s32, s32);
void func_8004F2AC(void);
void func_80054868(s32);
void func_80055A34(s32);
void func_8003C314(s8 a, void* ptr, s32 c, s32 d);
void func_8003E174(Object* ptr);
void func_800584F0(s32 unk);
void InitCameras(s32 count);
void SetPlayerOntoChain(s16 player, s16 chain_index, s16 space_index);
void func_80056AF4(void);
s32 func_8004B850(void);
void func_8004B5C4(f32 unk);
void func_8004B838(f32 unk);
u16 func_8004B5DC(Vec3f*);
void func_8006EB40(s16 win_id);
void func_80071C8C(s16 a, s32 b);
void func_80071E80(s16 a, s32 b);
void SetFadeInTypeAndTime(s16 a, s16 b);
void func_800726AC(s16 a, s16 b);
mystery_struct_ret_func_80048224* func_80048224(s16 *ptr);
void func_8004847C(mystery_struct_ret_func_80048224 *);
void func_8004A520(void);
void LoadStringIntoWindow(s16 win_id, void* string_id, s16 a, s16 b);
void func_800427D4(void* );
void func_800A0D50(Vec3f* ptr, Vec3f* ptr2);
void* func_80042728(Object* ptr, s32 num);
void func_800A40D0(void* ptr, f32 unk);
void func_8004CDCC(Object* unk);
void func_8004F2EC(void);
void func_8004F5F0(void);
void func_80067704(s16);
void func_80067384(s16, s16, u16);
s32 setjmp(jmp_buf* jump_buf);
s32 longjmp(jmp_buf* jump_buf, s32 val);
s32 HuMemMemoryAllocSizeGet(s32 value);
void HuPrcVSleep(void);
s32 EndProcess(Process*);
void* HuMemHeapInit(void* ptr, u32 size);
void HuMemMemoryFree(void* ptr);
void *HuMemMemoryAlloc(HeapNode* heap, s32 size);
void *Realloc(HeapNode* heap, void* mem, u32 new_size);
u32 GetAllocatedHeapSize(HeapNode* heap);
u32 GetUsedMemoryBlockCount(HeapNode* heap);
s32 HuMemMemoryAllocSizeGet(s32 value);
void func_8003E1BC(Object*, u8);
void func_8003E8B8(Object* ptr, s16 a, s16 b, s16 c, u16 d);
void DecodeFile(void* src, void* dest, s32 len, s32 decode_type);
void* MallocTemp(u32 size);
void func_80061FE8(u8*, void*, s32);
void func_80021B14(s16, u8, s32);
void func_800421E0(void);
void func_8004EE14(s32, void*, s32, void*);
void func_8004F00C(Object*, f32, f32);
void func_8004F044(Object*);
void func_8004F4D4(void*, s32, s32);
void func_80060468(s32, u8);
void func_8003E81C(void*, s32, u16);
void func_800A40D0(void*, f32);
u16 func_8003E940(Object*);
omObjData* func_8004E3E0(s32, Vec3f*, s32, void*); //arg2 should be Vec3f*
void func_80055960(s32, s32);
void omSetRot(omObjData*, f32, f32, f32);
void omSetSca(omObjData*, f32, f32, f32);
void InitCameras(s32);
void func_8005AD18(void);
void func_80062450(void);
s32 func_8005CE48(s32);
playerMain* GetPlayerStruct(s32 playerIndex);
//void func_8008C040(playerMain*, playerMain*, s32);
void WaitForTextConfirmation(s16);
void func_8006DA5C(s16, void*, s8);
void func_80009028(omObjData*, s32, f32, f32, f32, f32);
void func_80009090(omObjData*);
void HideTextWindow(s32);
s32 CreateTextWindow(s32, s32, s32, s32);
void ShowTextWindow(s32);
void func_8006E070(s16, s32);
u16 func_800174F4(s32, s32);
void func_8001775C(omObjData*, u16, s32);
void func_800264F8(s16 arg0, s16 arg1, f32 arg2, char* arg3, char* arg4, s32 arg5);
f32 sinf(f32);
void func_8001D420(s32, Vec3f*, Vec3f*, Vec3f*);
void func_8001D57C(s32);
f32 func_800B1750(f32);
void SetBasicSpriteSize(u16, f32, f32);
void func_80018E50(s32, u16, s32);
void func_80009058(omObjData*, f32, f32, f32, f32, f32, f32);
void SetBasicSpritePos(s32, s16, s16);
void func_80018D84(u16, s32);
s16 func_80060540(s16, s16);
void func_8009ECB0(void*, f32, f32, f32);
void func_800258EC(s16, s32, s32);
u16 func_8001E00C(void*, s32, u8);
void func_80064D38(s16);
void func_8006752C(s16, s16, u16);
void Convert3DTo2D(s16 index, Vec3f* arg1, Vec2f* arg2);
void func_80079078(s16);
void omDelObj(void*); //idk what type this arg is, either omObjData* or Object*
s32 func_8005021C(f32); //getRandInRange
void func_800A0D00(void*, f32, f32, f32);
void func_80025CA8(s16, s32);
void func_80025B34(s16);
void func_80026040(s16);
void func_80039C48(char*, s16*);
void func_80009340(omObjData*, s32, s32, s32, s32);
void func_8001E2F8(s16, u8);
void func_8001E360(s16, u8, u8, u8);
void func_80021240(s16);
void func_80025798(s16, f32, f32, f32);
void func_800257E4(s16, f32, f32, f32);
void func_80025830(s16, f32, f32, f32);
void func_80025EB4(s16, s32, s32);
void func_80009438(void);
void func_8000942C(void);
void DestroyObject(void*);
Object* CreateObject(u8, void*); //Object* CreateObject(u8, Object*);
void func_8004CCD0(Vec3f*, Vec3f*, Vec3f*);
u8 func_80052F04(s16);
void func_8004F284(void);
void func_8004F28C(s32, s16);
void func_800546B4(s32, s32);
void omOvlKill(void);
void func_800568A4(void);
void ClearBoardFeatureFlag(s32 flag);
void SetBoardFeatureFlag(s32 flag);
void func_800567D4(void);
void omOvlGotoEx(s32, s16, u16);
void omOvlHisChg(s16 arg0, s32 overlay, s16 event, s16 stat);
void ExecBoardScene(board_overlay_entrypoint* arg0, s16 arg1);
void func_8006B870(void);
s32 func_8006B8A4(s32, s32, s32, s32, s32);
f64 fabs(f64 f);
u8 rand8(void);
void func_80017660(u8, f32, f32, f32, f32);
void func_800176C4(u8, f32, f32, f32, f32, f32, f32);
void func_800178A0(s32);
s16 func_800178E8(void);
void func_8001D494(s16, f32, f32, f32);
void func_8001DE70(s32);
void func_80023448(s32);
void func_800234B8(u8, u8, u8, u8);
void func_80023504(s32, f32, f32, f32);
void func_80029090(s32);
void omInitObjMan (s32 maxObjects, s32 maxProcesses);
omObjData* omAddObj(s16, u16, u16, s16, void*);
void omSetStatBit(omObjData*, s32);
void func_80060088(void);
s32 PlaySound(s32);
void func_8007B168(u8*, u8); //arg1 is a u8*
//void func_80086F08(f32*, void*);
f32 func_800AEAC0(f32);
void func_80009E20(omObjData*);
void func_800186E4(omObjData*, s32, s32);
f32 func_800AEFD0(f32);
u32 func_8005EB1C(omObjData*);
s32 IsFlagSet(s32);
s16 func_8000C544(void);
s32 func_80075FE0(void);
s32 func_80072718(void);
void func_80009730(void);
void func_800601D4(s32);
void func_800790C0(void);
s32 omOvlReturnEx(s16 level);
void func_80060198(void);
void func_80060398(s32);
s32 func_80075CCC(s16, ...);
u16 ReadImgPackand(s32, s32, s32);
void func_80025930(s16, s32, s32);
s32 func_80076174(void);
f32 func_800B0CD8(f32, f32);
void* ReadMainFS(s32);
void FreeMainFS(void*);
u16 LoadFormFile(s32, s32);
s16 func_800678A4(void*);
s16 func_80023FC8(s16);
void func_80049F0C(void);
void func_8004A140(void);
s32 func_80054654(void);
void func_80070ED4(void);
void func_8004F1D0(void);
void LoadBackgroundData(Addr*);
void LoadBackgroundIndex(s32);
void func_8003DAA8(void);
void func_8004F140(s32);
void func_800544E4(void);
void func_80054834(s32, s32);
Process* omAddPrcObj(process_func func, u16 priority, s32 stack_size, s32 extra_data_size);
void func_80060128(s32);
void func_8006CEA0(void);
void func_80066DC4(s16, s16, s16, s16);
void func_800671DC(s16, s16, s16);
void func_800672B0(s16, s16, s16);
void func_80067354(s16, s16, f32, f32);
void func_80025C20(s16, s16, s16, s16, s16);
s16 func_80025E48(s16);
void omSetTra(omObjData*, f32, f32, f32);
void func_80009458(void);
void func_80009624(unkGlobalStruct_00*, s32);
void func_80017DB0(omObjData*);
void func_800184BC(omObjData*, u16);
void func_8006071C(s16);
void func_80008FB8(omObjData*, f32);
void func_80008FC4(omObjData*, f32);
u16 func_800174C0(s32, s32);
void* func_80023684(s32, s16);
void* func_8009B770(void*, u8, u32);
void func_80009500(void);
s32 func_800642FC(unkMesg * siMessg, HuSiFunc func, void * arg, s32 type);
void func_800090B8(u16);
f32 sqrtf(f32);
void* HuMemDirectMalloc(s32 size);
s16 func_80060288(void);
void func_80018C90(u16);
s32 func_80019060(s32, s16, s16);
void func_80067480(s16, s16, s32); //could also be  void func_80067480(s16, s32, u16); (as required by functions in face lift)
void func_800672DC(s16, s16, u16, s32);
void func_800674BC(s16, s16, s32);
s16 func_80064EF4(s32, s32);
void func_80067208(s16, s16, s16, u16);
void func_80009000(omObjData*, s32, f32);
void func_80072724(u8, u8, u8);
void HuMemDirectFree(void*);
void* func_80023668(s32);
void func_800237BC(s16);
void FreeTemp(void*);
s32 InitSprite(s32);
void func_8002578C(s32);
void func_8002890C(s32, s32, s32);
void func_8002ADF0(s32*, s32);
s16 func_80039084(void*);
void func_8005D98C(s32, s32);
omObjData** func_8005DB44(s32);
void func_80009468(void);
void HuPrcChildLink(Process* process, Process* child);
void HuPrcChildWatch(void);
Process* HuPrcCurrentGet(void);
void func_80058E64(omObjData*);
s16 func_800341E8(u8*, unk2C0C0StructC0*);
s16 func_800342BC(u8*);
void func_8001AC00(unk2C0C0StructC0*, u8*, s16);
void func_80023AF0(void*, s16);
void osSyncPrintf(const char*, ...);
s16 func_80033718(unk2C0C0StructC0*, char*);
s32 func_80029174(s16);
void func_8001B1D4(unk2C0C0StructC0* arg0);
void func_800A2A50(Matrix4f);
void func_8002B890(unk2C0C0StructC0*);
void func_8002C030(unk2C0C0StructC0*);
void func_800265EC(unk2C0C0StructC0*, unk2C0C0StructC0*, f32, s16, s16, s32);
void func_8005B838(void* arg0);
s16 func_8006D99C(u8* arg0, s16 arg1);
void* func_8005B7E8(s32 stringIndex);
void func_800230D0(s32);
void func_8001AAC4(Gfx*, u16, s32, OSMesgQueue*, s32);
s16 func_8001CD00(u8*);
void func_8001D40C(void);
void func_8001D7DC(s16, Gfx**);
void func_80023040(void);
void func_800230D0(s32);
void func_800230D8(s16);
void func_80023370();
void func_800239EC(void);
void func_8002B890(unk2C0C0StructC0*);
void func_8002BCD4(unk2C0C0StructC0*);
void func_8002BDC0(unk2C0C0StructC0*);
void func_8002BEC4(unk2C0C0StructC0*);
void func_8002C37C(Matrix4f, Matrix4f);
void func_8002C400(unk2C0C0StructC0*, s16);
void func_8002C858(unk2C0C0StructC0*, s32);
void func_8002D2CC(unk2C0C0StructC0*, s32, void*, Matrix4f);
void func_8002DC84(unk2C0C0StructC0*, s16);
void func_8002E488(unk2C0C0StructC0*, u32*);
void func_80030D50(unk2C0C0StructC0*, s16);
void func_80031054(unk2C0C0Struct90*, unk2C0C0Struct80*, s32);
void func_800318D0(u16);
void func_80031BB4(void);
void func_80031C60(unk2C0C0StructC0*, s32, s16);
void func_80031F14(unk2C0C0Struct70*, s32, s32);
void func_80032C98(unk2C0C0StructC0*, s16);
s32 func_8003305C(unk2C0C0StructC0*, s16, Matrix4f, Matrix4f);
void func_800339E0(unk2C0C0StructC0*, s16);
void func_80033CBC(unk2C0C0StructC0*, s16);
void func_80033FB0(Gfx**, s16, s32);
void func_80034ED8(unk2C0C0StructC0*, s32, s32, s32);
void func_8003589C(unk2C0C0StructC0*, s32, s32);
void func_80037CE0(void);
void func_80039D10(unk2C0C0StructC0*);
s16 func_80061228(u8, u8, u8);
void func_80061264(s16);
void func_8009E7E0(Matrix4f, f32, f32, f32);
void func_8009EA40(Matrix4f, f32, f32, f32);
void func_800A0A20(Matrix4f, void*);
void func_800A2A50(Matrix4f);
//void guLookAtHilite (Mtx*, LookAt*, Hilite*, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
void guLookAtReflect(Mtx*, LookAt*, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void guMtxIdentF(Matrix4f);
void* func_80023668(s32);
void MtxMult(Matrix4f, Matrix4f, Matrix4f);
u32 MtxReset(Matrix4f, Matrix4f);
void MtxScale(Matrix4f, f32, f32, f32);
void MtxTranslate(Matrix4f, f32, f32, f32);
void osSyncPrintf(const char*, ...);
u32 osVirtualToPhysical(void*);
void func_80031D78(unk2C0C0StructC0* arg0, s16 arg1);
void func_800622BC(u16, u16, s32);
s16 GetCurrentPlayerIndex(void);
playerMain* GetPlayerStruct(s32);
s16 GetTurnsElapsed(void);
s32 IsFlagSet(s32);
s32 PlayerHasCoins(s32 index, s32 count);
s16 RNGPercentChance(s8);
s32 func_8004FEBC(s16);
void HuGuLookAtF(f32 mf[4][4], f32 xEye, f32 yEye, f32 zEye, f32 xAt, f32 yAt, f32 zAt, f32 xUp, f32 yUp, f32 zUp);
#endif