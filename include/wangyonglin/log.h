/*
 * @file    log.h
 * @brief   日志模块
 * @author  wang yonglin
 * @date    2026-10-19
 * @note    HeylinOS Project
 *
 * Copyright (C) 2026 Heylin. All rights reserved.
 */
#ifndef __WANGYONGLIN_LOG_H__
#define __WANGYONGLIN_LOG_H__

#include "wangyonglin/string.h"


#ifdef __cplusplus
extern "C" {
#endif

#ifndef HL_USE_DEBUG
#define HL_USE_DEBUG    (0U)
#endif

/**
 * @brief 日志底层发送回调类型
 * @param data 日志数据指针
 * @param size 数据长度
 */
typedef void HL_LOG_CallbackDef(const HL_UInt8Def * data, HL_UInt16Def size);

/**
 * @brief 底层日志输出函数，外部实现，无需调用注册API
 */
extern HL_LOG_CallbackDef HL_LOG_Handler;

/**
 * @brief 日志底层格式化函数，禁止直接调用
 * @param file 源码文件名
 * @param line 源码行号
 * @param fmt 格式化字符串
 * @param ... 可变参数
 */
void HL_LOG_FPUTC(HL_StringDef file, HL_UInt32Def line, HL_StringDef fmt, ...);

/**
 * @brief 日志打印宏，自动带入文件名、行号
 * @param fmt 格式化字符串
 * @param ... 参数
 */
#define LOG_INFO(fmt, ...)  HL_LOG_FPUTC(__FILE__, (HL_UInt32Def)__LINE__, fmt, ##__VA_ARGS__)

#ifdef __cplusplus
}
#endif

#endif /* __WANGYONGLIN_LOG_H__ */
