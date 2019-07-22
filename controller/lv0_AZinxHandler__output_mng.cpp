//
// Created by asus on 2019/7/22.
//

#include "lv0_AZinxHandler__output_mng.h"

IZinxMsg *lv0_AZinxHandler__output_mng::InternelHandle(IZinxMsg &_oInput) {
    if (NULL == m_channel) {
        Ichannel *pchannel = ZinxKernel::Zinx_GetChannel_ByInfo("stdout_channel");
        m_channel = pchannel;
    }
    GET_REF2DATA(BytesMsg, byte, _oInput);
    //摘出输出通道
    if ("close" == byte.szData) {
        ZinxKernel::Zinx_Del_Channel(*m_channel);
    } else {
        //添加输出通道
        ZinxKernel::Zinx_Add_Channel(*m_channel);
    }
    return nullptr;
}

AZinxHandler *lv0_AZinxHandler__output_mng::GetNextHandler(IZinxMsg &_oNextMsg) {
    return nullptr;
}
