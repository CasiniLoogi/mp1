#include "common.h"

void func_800F66AC_name_35(void);

void func_800F6610_name_35(void) {
    if (_CheckFlag(0) != 0) {
        SetBoardFeatureFlag(0x41);
    } else {
        ClearBoardFeatureFlag(0x41);
    }
    omInitObjMan(0xA, 0);
    func_800567D4();
    omOvlGotoEx(0x35, 1, 0x92);
    omOvlHisChg(0, 0x35, 1, 0x92);
}

void func_800F6684_name_35(void) {
    omInitObjMan(10, 0);
    func_800568A4();
}

void func_800F66AC_name_35(void) {
    omOvlReturnEx(1);
    omOvlKill();
    HuPrcVSleep();
}

void func_800F66D8_name_35(void) {
    omInitObjMan(10, 10);
    func_80060088();
    omAddPrcObj(&func_800F66AC_name_35, 0x1005, 0, 0);
}
