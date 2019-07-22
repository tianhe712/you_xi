//
// Created by asus on 2019/7/22.
//

#include "lv0_AZinxHandler__echo.h"

IZinxMsg *lv0_AZinxHandler__echo::InternelHandle(IZinxMsg &_oInput) {
    /*将数据输出到标准输出*/
    GET_REF2DATA(BytesMsg, byte, _oInput);
    Ichannel *pchannel = ZinxKernel::Zinx_GetChannel_ByInfo("stdout_channel");
    if (NULL != pchannel) {
        ZinxKernel::Zinx_SendOut(byte.szData, *pchannel);
    }
    return nullptr;
}

AZinxHandler *lv0_AZinxHandler__echo::GetNextHandler(IZinxMsg &_oNextMsg) {
    return nullptr;
}
