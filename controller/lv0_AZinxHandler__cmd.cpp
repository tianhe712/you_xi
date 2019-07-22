//
// Created by asus on 2019/7/22.
//

#include "lv0_AZinxHandler__cmd.h"

IZinxMsg *lv0_AZinxHandler__cmd::InternelHandle(IZinxMsg &_oInput) {
    //透传输入的字节--》copy参数
    GET_REF2DATA(BytesMsg, byte, _oInput);
    return new BytesMsg(byte);
}

AZinxHandler *lv0_AZinxHandler__cmd::GetNextHandler(IZinxMsg &_oNextMsg) {
    /*返回echo对象或者exitframework对象*/
    GET_REF2DATA(BytesMsg, byte, _oNextMsg);
    if (m_cmd_map.end() != m_cmd_map.find(byte.szData)) {
        return m_cmd_map[byte.szData];
    } else {
        return &g_echo;
    }
}

void lv0_AZinxHandler__cmd::add_cmd(string _cmd, AZinxHandler *_handler) {
    m_cmd_map[_cmd] = _handler;
}
