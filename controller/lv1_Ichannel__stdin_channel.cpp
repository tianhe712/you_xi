//
// Created by asus on 2019/7/22.
//

#include "lv1_Ichannel__stdin_channel.h"

bool lv1_Ichannel__stdin_channel::Init() {
    return true;
}

/*
 * 读取数据：将标准输入的数据存到参数1中
 * string &_input：参数1，用于数据存入
 * 返回 bool：true false
 * */
bool lv1_Ichannel__stdin_channel::ReadFd(std::string &_input) {
    cin >> _input;
    return true;
}

bool lv1_Ichannel__stdin_channel::WriteFd(std::string &_output) {
    return false;
}

void lv1_Ichannel__stdin_channel::Fini() {

}

/*
 * 获取文件描述符：
 * 返回 int：0
 * */
int lv1_Ichannel__stdin_channel::GetFd() {
    return 0;
}

string lv1_Ichannel__stdin_channel::GetChannelInfo() {
    return "stdin_channel";
}

/*
 * 获取处理读取到数据的对象：
 * 返回：AZinxHandler *：命令注册类的对象
 * */
AZinxHandler *lv1_Ichannel__stdin_channel::GetInputNextStage(BytesMsg &_oInput) {
    return &g_cmd;
}
