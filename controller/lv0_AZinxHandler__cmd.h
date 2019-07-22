//
// Created by asus on 2019/7/22.
//

#ifndef PRJ2_ZINX_STUDY_LV0_AZINXHANDLER__CMD_H
#define PRJ2_ZINX_STUDY_LV0_AZINXHANDLER__CMD_H
//头文件
#include "head_class.h"
#include "lv0_AZinxHandler__echo.h"

extern lv0_AZinxHandler__echo g_echo;

class lv0_AZinxHandler__cmd : public AZinxHandler {
    //创建容器存储命令注册数据
    map<string, AZinxHandler *> m_cmd_map;

public:
    void add_cmd(string _cmd, AZinxHandler *_handler);

protected:
    IZinxMsg *InternelHandle(IZinxMsg &_oInput) override;

    AZinxHandler *GetNextHandler(IZinxMsg &_oNextMsg) override;
};

#endif //PRJ2_ZINX_STUDY_LV0_AZINXHANDLER__CMD_H
