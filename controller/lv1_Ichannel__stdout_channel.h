//
// Created by asus on 2019/7/22.
//

#ifndef PRJ2_ZINX_STUDY_LV1_ICHANNEL__STDOUT_CHANNEL_H
#define PRJ2_ZINX_STUDY_LV1_ICHANNEL__STDOUT_CHANNEL_H
//头文件
#include "head_class.h"

//创建标准输出通道类
class lv1_Ichannel__stdout_channel : public Ichannel {
public:
    bool Init() override;

    bool ReadFd(std::string &_input) override;

    bool WriteFd(std::string &_output) override;

    void Fini() override;

    int GetFd() override;

    string GetChannelInfo() override;

protected:
    AZinxHandler *GetInputNextStage(BytesMsg &_oInput) override;

};


#endif //PRJ2_ZINX_STUDY_LV1_ICHANNEL__STDOUT_CHANNEL_H
