/**
 * @file assent.c
 * @brief ASSENT & ASSERT 实现
 */
#include "wangyonglin/assent.h"
#include "wangyonglin/log.h"

void HL_AssertFailed(HL_StringDef expr, HL_StringDef file, HL_UInt32Def line)
{
    LOG_INFO("[ASSENT WARN] %s @ %s:%lu", expr, file, line);
    // ASSENT：仅告警，直接返回，程序继续运行
}

void HL_AssertFatal(HL_StringDef expr, HL_StringDef file, HL_UInt32Def line)
{
    LOG_INFO("[ASSERT FAILED] %s @ %s:%lu", expr, file, line);
  
    while(1U)
    {
        ; // 锁死，等待调试器或者看门狗复位
    }
}
