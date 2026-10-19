#ifndef __WANGYONGLIN_ASSENT_H__
#define __WANGYONGLIN_ASSENT_H__

#include "wangyonglin/string.h"
/**
 * @brief 兜底默认配置：外部未定义 HL_USE_DEBUG 时默认关闭
 * 工程全局（Keil/IAR/CMake）定义 HL_USE_DEBUG=1 开启调试断言
 */
#ifndef HL_USE_DEBUG
#define HL_USE_DEBUG   (0U)
#endif

/**
 * @brief ASSENT 软核验失败回调，仅打印告警，系统继续运行
 * @param expr 失败的表达式字符串
 * @param file 源码文件名
 * @param line 源码行号
 */
void HL_AssertFailed(HL_StringDef expr, HL_StringDef file, HL_UInt32Def line);

/**
 * @brief ASSERT 致命断言失败，断点+死循环停机
 * @param expr 失败的表达式字符串
 * @param file 源码文件名
 * @param line 源码行号
 */
void HL_AssertFatal(HL_StringDef expr, HL_StringDef file, HL_UInt32Def line);

#if (HL_USE_DEBUG == 1U)
#define ASSENT(cond)  do{                                   \
    if(!(cond))                                             \
    {                                                       \
        HL_AssertFailed(#cond, __FILE__, (HL_UInt32Def)__LINE__);         \
    }                                                       \
}while(0)

#define ASSERT(cond)  do{                                   \
    if(!(cond))                                             \
    {                                                       \
        HL_AssertFatal(#cond, __FILE__, (HL_UInt32Def)__LINE__);          \
    }                                                       \
}while(0)
#else
#define ASSENT(cond)  do{}while(0)
#define ASSERT(cond)  do{}while(0)
#endif

#endif /**__WANGYONGLIN_ASSENT_H__**/