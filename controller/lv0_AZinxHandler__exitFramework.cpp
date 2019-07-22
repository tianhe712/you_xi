//
// Created by asus on 2019/7/22.
//

#include "lv0_AZinxHandler__exitFramework.h"

IZinxMsg *lv0_AZinxHandler__exitFramework::InternelHandle(IZinxMsg &_oInput) {
    ZinxKernel::Zinx_Exit();
    return nullptr;
}

AZinxHandler *lv0_AZinxHandler__exitFramework::GetNextHandler(IZinxMsg &_oNextMsg) {
    return nullptr;
}
