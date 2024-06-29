#include "common.h"
#include "PR/os.h"

typedef struct box {
    u16 activeBool;
    s16 unk_02;
    s32 xPosStart;
    s32 yPosStart;
    s32 width;
    s32 height;
    u32 rgba;
} box;

typedef struct unk62140_2 {
/* 0x00 */ s16 unk_00;
/* 0x04 */ s32 unk_04;
/* 0x08 */ s32 unk_08;
/* 0x0C */ s32 unk_0C;
} unk62140_2;

typedef struct unk62140_3 {
/* 0x00 */ s8 unk_00;
/* 0x01 */ s8 unk_01;
/* 0x02 */ s8 unk_02;
/* 0x03 */ s8 unk_03; //D_800F09E7
/* 0x04 */ s8 unk_04;
/* 0x05 */ s8 unk_05;
/* 0x06 */ s8 unk_06;
/* 0x06 */ s8 unk_07;
/* 0x06 */ s8 unk_08;
/* 0x06 */ s8 unk_09;
/* 0x06 */ s8 unk_0A;
/* 0x06 */ s8 unk_0B;
/* 0x06 */ s8 unk_0C;
} unk62140_3;

typedef struct unkStruct_zz {
    s32 unk_00;
    char unk_04[0x44];
} unkStruct_zz;

extern unkStruct_zz D_800D9378_D9408[];

s32 func_800642FC(unkMesg * siMessg, HuSiFunc func, void * arg, s32 type);
void func_800618A4_624A4(OSPfs* arg0);
s32 func_80061714(void);
s32 func_80061784(s16* arg0);

extern box D_800ED448_ED4D8[];
extern s16 D_800EE310_EE3A0;
extern OSMesgQueue D_800EE960_EE9F0;
extern unk62140_3 D_800F09E4_F0A74;
extern u16 D_800F64E4_F6574;
extern OSPfs D_800D90D0_D9160[];
s32 func_80061784_62384(s16* arg0);

INCLUDE_ASM("asm/nonmatchings/62140", func_80061540_62140);

INCLUDE_ASM("asm/nonmatchings/62140", func_80061638_62238);

s32 func_80061714_62314(void) {
    s16 i;

    for (i = 0; i < 4; i++) {
        func_80061784_62384(&i);
    }
    return 0;
}

void func_80061758() {
    Vec3s sp10;

    func_800642FC_64EFC(&sp10, &func_80061714_62314, 0, 1);
}

s32 func_80061784_62384(s16* arg0) {
    u8 sp10;
    s16 temp_a2;
    s32 ret;

    if (osPfsIsPlug(&D_800EE960_EE9F0, &sp10) != 0) {
        sp10 = 0;
    }
    
    temp_a2 = *arg0;
    
    if ((sp10 >> temp_a2) & 1) {
        ret = osPfsInitPak(&D_800EE960_EE9F0, &D_800D90D0_D9160[temp_a2], temp_a2);
    } else {
        ret = 1;
    }
    return ret;
}

void func_80061808_62408(s16 arg0) {
    Vec3s sp10;
    func_800642FC_64EFC(&sp10, &func_80061784_62384, &arg0, 2);
}

void func_80061838_62438(s16* arg0) {
    osPfsRepairId(&D_800D90D0_D9160[*arg0]);
}


void func_80061874_62474(s16 arg0) {
    Vec3s sp10;
    func_800642FC_64EFC(&sp10, func_80061838_62438, &arg0, 2);
}

void func_800618A4_624A4(OSPfs* arg0) { // TODO: fix argument
    arg0->channel = 0;
    arg0->queue = NULL;
    if (osPfsNumFiles(&D_800D90D0_D9160[((s16*)arg0)[0]], (s32*) &arg0->queue, (s32*) &arg0->channel) == 0) {
        osPfsFreeBlocks(&D_800D90D0_D9160[((s16*)arg0)[0]], (void*) arg0->id);
    }
}

s32 func_80061930_62530(s16 arg0, s32* arg1, s32* arg2, s32* arg3) {
    Vec3s sp10;
    unk62140_2 sp20;
    sp20.unk_00 = arg0;

    func_800642FC_64EFC(&sp10, &func_800618A4_624A4, &sp20, 2);
    *arg1 = sp20.unk_04;
    *arg2 = sp20.unk_08;
    *arg3 = sp20.unk_0C;
    return sp10.z;
}

void func_800619A0_625A0(OSPfs* arg0) { // TODO: fix argument
    u32 i = arg0->status;
    osPfsFileState(&D_800D90D0_D9160[((s16*)arg0)[0]], (s32) arg0->queue, (OSPfsState *) &arg0->channel);
}

INCLUDE_ASM("asm/nonmatchings/62140", func_800619E8_625E8);

INCLUDE_ASM("asm/nonmatchings/62140", func_80061A3C_6263C);

INCLUDE_ASM("asm/nonmatchings/62140", func_80061A98_62698);

INCLUDE_ASM("asm/nonmatchings/62140", func_80061B3C_6273C);

INCLUDE_ASM("asm/nonmatchings/62140", func_80061C00_62800);

INCLUDE_ASM("asm/nonmatchings/62140", func_80061CB4_628B4);

INCLUDE_ASM("asm/nonmatchings/62140", func_80061D30_62930);

INCLUDE_ASM("asm/nonmatchings/62140", func_80061D64_62964);

INCLUDE_ASM("asm/nonmatchings/62140", func_80061DD4_629D4);

INCLUDE_ASM("asm/nonmatchings/62140", func_80061E10_62A10);

INCLUDE_ASM("asm/nonmatchings/62140", func_80061F24_62B24);

INCLUDE_ASM("asm/nonmatchings/62140", func_80061F60_62B60);

INCLUDE_ASM("asm/nonmatchings/62140", func_80061FA0_62BA0);

INCLUDE_ASM("asm/nonmatchings/62140", func_80061FE8_62BE8);

INCLUDE_ASM("asm/nonmatchings/62140", HuRomDmaCodeRead);

INCLUDE_ASM("asm/nonmatchings/62140", func_80062140_62D40);

INCLUDE_ASM("asm/nonmatchings/62140", func_800621D8_62DD8);

INCLUDE_ASM("asm/nonmatchings/62140", func_8006223C_62E3C);

INCLUDE_ASM("asm/nonmatchings/62140", func_800622BC_62EBC);

s16 func_80062364_62F64(s32 xPosStart, s32 yPosStart, s32 width, s32 height, s32 rgba) {
    box* boxPtr;
    s32 i;

    if (D_800F64E4_F6574 >= 4) {
        return -1;
    }

    for (i = 0; i < 4; i++) {
       if (D_800ED448_ED4D8[i].activeBool == 0) {
            break;
        }
    }

    boxPtr = &D_800ED448_ED4D8[i];
    boxPtr->activeBool = 1;
    boxPtr->xPosStart = xPosStart;
    boxPtr->yPosStart = yPosStart;
    boxPtr->width = width;
    boxPtr->height = height;
    boxPtr->rgba = rgba;
    D_800F64E4_F6574++;
    return i;
}

void func_80062408_63008(s16 arg0) {
    if (D_800F64E4_F6574 != 0) {
        D_800ED448_ED4D8[arg0].activeBool = 0;
        D_800F64E4_F6574 = D_800F64E4_F6574 - 1;
    }
}

void func_80062450_63050(void) {
    s32 i;
    D_800F64E4_F6574 = 0;

    for (i = 0; i < 4; i++) {
        D_800ED448_ED4D8[i].activeBool = 0;
    }
}

void func_8006248C_6308C(s8 arg0, s8 arg1, s8 arg2) {
    D_800F09E4_F0A74.unk_00 = arg0;
    D_800F09E4_F0A74.unk_01 = arg1;
    D_800F09E4_F0A74.unk_02 = arg2;
    D_800F09E4_F0A74.unk_03 = D_800F09E4_F0A74.unk_04 = D_800F09E4_F0A74.unk_05 = 0;
    D_800EE310_EE3A0 = 1;
}

void func_800624BC_630BC(s8 arg0, s8 arg1, s8 arg2, s8 arg3, u8 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8) {
    D_800F09E4_F0A74.unk_03 = arg0;
    D_800F09E4_F0A74.unk_04 = arg1;
    D_800F09E4_F0A74.unk_05 = arg2;
    D_800F09E4_F0A74.unk_06 = arg3;
    D_800F09E4_F0A74.unk_07 = arg4;
    D_800F09E4_F0A74.unk_08 = arg5;
    D_800F09E4_F0A74.unk_09 = arg6;
    D_800F09E4_F0A74.unk_0A = arg7;
    D_800F09E4_F0A74.unk_0B = arg8;
}

void func_80062500_63100(void) { 
    D_800F09E4_F0A74.unk_03 = D_800F09E4_F0A74.unk_04 = D_800F09E4_F0A74.unk_05 = 0;
}

void func_80062518_63118(void) {
    D_800EE310_EE3A0 = 0;
}

void func_80062524_63124(s16 arg0, u8* arg1) {
    u8* temp_v0;
    
    if (&D_800D9378_D9408[arg0] != NULL) {
        temp_v0 = (u8*)&D_800D9378_D9408[arg0];
        for (; *arg1 != 0; temp_v0++, arg1++) {
            *temp_v0 = *arg1;
        }
        *temp_v0 = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/62140", func_8006257C_6317C);
