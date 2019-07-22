//
// Created by asus on 2019/7/22.
//

#include "lv1_Ichannel__stdout_channel.h"

bool lv1_Ichannel__stdout_channel::Init() {
    return true;
}

bool lv1_Ichannel__stdout_channel::ReadFd(std::string &_input) {
    return false;
}

/*
 * 输出数据
 * */
bool lv1_Ichannel__stdout_channel::WriteFd(std::string &_output) {
    cout << _output << endl;
    return true;
}

void lv1_Ichannel__stdout_channel::Fini() {

}

/*
 * 获取标准输出文件描述符1
 * */
int lv1_Ichannel__stdout_channel::GetFd() {
    return 1;
}

string lv1_Ichannel__stdout_channel::GetChannelInfo() {
    return "stdout_channel";
}

AZinxHandler *lv1_Ichannel__stdout_channel::GetInputNextStage(BytesMsg &_oInput) {
    return nullptr;
}
