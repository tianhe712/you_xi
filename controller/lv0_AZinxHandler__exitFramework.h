//
// Created by asus on 2019/7/22.
//

#ifndef PRJ2_ZINX_STUDY_LV0_AZINXHANDLER__EXITFRAMEWORK_H
#define PRJ2_ZINX_STUDY_LV0_AZINXHANDLER__EXITFRAMEWORK_H
//头文件
#include "head_class.h"

class lv0_AZinxHandler__exitFramework : public AZinxHandler {
protected:
    IZinxMsg *InternelHandle(IZinxMsg &_oInput) override;

    AZinxHandler *GetNextHandler(IZinxMsg &_oNextMsg) override;

};


#endif //PRJ2_ZINX_STUDY_LV0_AZINXHANDLER__EXITFRAMEWORK_H
