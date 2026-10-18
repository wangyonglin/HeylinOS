#ifndef __WANGYONGLIN_DEFS_H__
#define __WANGYONGLIN_DEFS_H__

/**
 * @brief 平台掩码定义
 */
#ifndef HL_PLATFORM_NONE
#define HL_PLATFORM_NONE         (0U)
#endif
#ifndef HL_PLATFORM_LINUX
#define HL_PLATFORM_LINUX        (1U << 0)
#endif
#ifndef HL_PLATFORM_WIN32
#define HL_PLATFORM_WIN32        (1U << 1)
#endif

#ifndef HL_PLATFORM_STM32U5XX
#define HL_PLATFORM_STM32U5XX    (1U << 2)
#endif
/* 无符号固定宽度类型 */
typedef unsigned char      HL_UInt8Def;
typedef unsigned short     HL_UInt16Def;
typedef unsigned int       HL_UInt32Def;
typedef unsigned long long HL_UInt64Def;

/* 有符号固定宽度类型 */
typedef signed char        HL_Int8Def;
typedef signed short       HL_Int16Def;
typedef signed int         HL_Int32Def;
typedef signed long long   HL_Int64Def;

/* volatile 寄存器访问类型 */
typedef volatile unsigned char      HL_VUInt8Def;
typedef volatile unsigned short     HL_VUInt16Def;
typedef volatile unsigned int       HL_VUInt32Def;

/* 浮点类型 */
typedef float              HL_Float32Def;
typedef double             HL_Float64Def;

/* 字符串 (和标准库兼容) */
typedef char        HL_CharDef;
typedef char*       HL_StringDef;


/* 布尔类型，统一风格：unsigned char */
typedef unsigned char      HL_BoolDef;

/* 函数返回状态码类型 */
typedef signed char        HL_StatusDef;

/* 预处理开关常量，仅用于 #if 条件编译 */
#define HL_TRUE     			1
#define HL_FALSE    			0

/* 运行时布尔常量，带类型转换，用于代码内赋值判断 */
#define Enabled          	    HL_TRUE
#define Disabled                HL_FALSE

#endif /* __KERNEL_DEFS_H__ */
