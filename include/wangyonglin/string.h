#ifndef __WANGYONGLIN_STRING_H__
#define __WANGYONGLIN_STRING_H__

#include "wangyonglin/lib.h"
#include <stdint.h>



/* 状态返回值 */
#define HL_OK         ((HL_StatusDef)0)
#define HL_ERR        ((HL_StatusDef)-1)



/* 空指针 */
#ifndef HL_NULL
#define HL_NULL       ((void *)0)
#endif

/* 内联 */
#ifndef HL_INLINE
#define HL_INLINE     static inline
#endif

/* 数组元素个数 */
#define HL_ARRAY_SIZE(a)   (sizeof(a) / sizeof((a)[0]))

/* 空参数 */
#define HL_UNUSED(x)   ((void)(x))


typedef uint16_t HL_ColorDef;

/* RGB565 颜色表 */
#define HL_COLOR_WHITE           ((HL_ColorDef)0xFFFF)
#define HL_COLOR_BLACK           ((HL_ColorDef)0x0000)
#define HL_COLOR_BLUE            ((HL_ColorDef)0x001F)
#define HL_COLOR_BRED            ((HL_ColorDef)0xF81F)
#define HL_COLOR_GRED            ((HL_ColorDef)0xFFE0)
#define HL_COLOR_GBLUE           ((HL_ColorDef)0x07FF)
#define HL_COLOR_RED             ((HL_ColorDef)0xF800)
#define HL_COLOR_MAGENTA         ((HL_ColorDef)0xF81F)
#define HL_COLOR_GREEN           ((HL_ColorDef)0x07E0)
#define HL_COLOR_CYAN            ((HL_ColorDef)0x7FFF)
#define HL_COLOR_YELLOW          ((HL_ColorDef)0xFFE0)
#define HL_COLOR_BROWN           ((HL_ColorDef)0xBC40)
#define HL_COLOR_BRRED           ((HL_ColorDef)0xFC07)
#define HL_COLOR_GRAY            ((HL_ColorDef)0x8430)
#define HL_COLOR_DARKBLUE        ((HL_ColorDef)0x01CF)
#define HL_COLOR_LIGHTBLUE       ((HL_ColorDef)0x7D7C)
#define HL_COLOR_GRAYBLUE        ((HL_ColorDef)0x5458)
#define HL_COLOR_LIGHTGREEN      ((HL_ColorDef)0x841F)
#define HL_COLOR_LGRAY           ((HL_ColorDef)0xC618)
#define HL_COLOR_LGRAYBLUE       ((HL_ColorDef)0xA651)
#define HL_COLOR_LBBLUE          ((HL_ColorDef)0x2B12)





#endif /* __WANGYONGLIN_STRING_H__ */
