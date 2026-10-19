/*
 * @file    log.c
 * @brief   日志模块实现
 * @author  wang yonglin
 * @date    2026-10-19
 * @note    HeylinOS Project
 *
 * Copyright (C) 2026 Heylin. All rights reserved.
 */
#include "wangyonglin/log.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

#define LOG_UART_BUF_LEN    256U
static char s_dev_uart_buf[LOG_UART_BUF_LEN];

void HL_LOG_FPUTC(HL_StringDef file, HL_UInt32Def line, HL_StringDef fmt, ...)
{
    if (fmt == NULL)
    {
        return;
    }

    va_list ap;
    va_start(ap, fmt);
    vsnprintf(s_dev_uart_buf, LOG_UART_BUF_LEN, fmt, ap);
    va_end(ap);

    char out[LOG_UART_BUF_LEN + 64U];
    HL_StringDef name = "unknown";

    if (file != NULL)
    {
        name = file;
        const char *p = file;
        while (*p != '\0')
        {
            if (*p == '/' || *p == '\\')
            {
                name = p + 1;
            }
            p++;
        }
    }

    snprintf(out, sizeof(out), "[%s:%lu] %s", name, line, s_dev_uart_buf);
    size_t len = strlen(out);

    if (len > 0U)
    {
        HL_LOG_Handler((const HL_UInt8Def *)out, (HL_UInt16Def)len);
    }
}
