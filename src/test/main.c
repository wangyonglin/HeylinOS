/*
 * @file    main.c
 * @brief   HerlynOS 入口
 * @author  Herlyn
 * @date    2026-10-03
 * @note    HerlynOS Project
 *
 * Copyright (C) 2026 Herlyn. All rights reserved.
 */
#include "wangyonglin/string.h"
#include "wangyonglin/log.h"
#include "wangyonglin/assent.h"
#include <stdio.h>

void HL_LOG_Handler(const HL_UInt8Def * data,HL_UInt16Def size){
    printf("HerlynOS:%s\r\n",data);
}
int main(void)
{

    HL_StatusDef ret;

    LOG_INFO("wangyonglin ok");
    ASSENT(NULL);
    ASSERT(NULL);
    LOG_INFO("HerlynOS\r\n");
    return 0;
}
