cmake_minimum_required(VERSION 3.16)
project(HerlynOS C)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# 全局头文件根目录
include_directories(${PROJECT_SOURCE_DIR}/include)



# ========== 平台无关源码 ==========

set(HER_TEST_SRCS
    src/wangyonglin/log.c
    src/test/main.c
)

# ========== 按平台选择platform源码 + 定义宏 ==========
# if(HER_PLATFORM STREQUAL "WIN32")
#     message(STATUS "Build: Win32 PC Simulation")
#     set(HER_PLATFORM_SRCS src/platform/win32/platform_impl.c)
#     add_compile_definitions(HER_PLATFORM_WIN32)
# elseif(HER_PLATFORM STREQUAL "UNIX")
#     message(STATUS "Build: Unix-like (MSYS2/Linux)")
#     set(HER_PLATFORM_SRCS src/platform/unix/platform_impl.c)
#     add_compile_definitions(HER_PLATFORM_UNIX)
# elseif(HER_PLATFORM STREQUAL "SOC")
#     message(STATUS "Build: SoC STM32U5 Hardware")
#     set(HER_PLATFORM_SRCS src/platform/soc/platform_impl.c)
#     add_compile_definitions(HER_PLATFORM_SOC)
# else()
#     message(FATAL_ERROR "HER_PLATFORM must be WIN32 / UNIX / SOC")
# endif()




if(HER_PLATFORM STREQUAL "WIN32")
    message(STATUS "Build: Win32 PC Simulation")
    add_compile_definitions(HL_USE_DEBUG)
    add_executable(herlyn_test
    src/wangyonglin/assent.c
    src/wangyonglin/log.c
    src/test/main.c
    )
    target_include_directories(herlyn_test PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/../include
    )
endif()
