//头文件
#include "head_class.h"
//控制器|第一层|继承父类|子类名
#include "controller/lv1_Ichannel__stdout_channel.h"
#include "controller/lv0_AZinxHandler__echo.h"
#include "controller/lv0_AZinxHandler__exitFramework.h"
#include "controller/lv0_AZinxHandler__output_mng.h"
#include "controller/lv0_AZinxHandler__cmd.h"
#include "controller/lv1_Ichannel__stdin_channel.h"

lv0_AZinxHandler__echo g_echo;
lv0_AZinxHandler__exitFramework g_exit;
lv0_AZinxHandler__output_mng g_output_mng;
lv0_AZinxHandler__cmd g_cmd;

int main() {
    //1.初始化游戏框架
    if (ZinxKernel::ZinxKernelInit()) {
        lv1_Ichannel__stdin_channel *pstdin_channel = new lv1_Ichannel__stdin_channel();
        lv1_Ichannel__stdout_channel *pstdout_channel = new lv1_Ichannel__stdout_channel();
        //4. 添加通道类对象到kernel中
        ZinxKernel::Zinx_Add_Channel(*pstdin_channel);
        ZinxKernel::Zinx_Add_Channel(*pstdout_channel);
        g_cmd.add_cmd("exit", &g_exit);
        g_cmd.add_cmd("close", &g_output_mng);
        g_cmd.add_cmd("open", &g_output_mng);
        //5. 调用run
        ZinxKernel::Zinx_Run();
        //摘除环节
        ZinxKernel::Zinx_Del_Channel(*pstdin_channel);
        ZinxKernel::Zinx_Del_Channel(*pstdout_channel);
        //释放内存
        delete pstdin_channel;
        delete pstdout_channel;
        //退出框架
        ZinxKernel::ZinxKernelFini();
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
