
project(zad9)

set(HEDEAR_FILES Zad9.h)
set(SOURCE_FILES Zad9.cpp)

add_library(libzad9 STATIC ${SOURCE_FILES})
target_include_directories(libzad9 PUBLIC .)

add_executable(zad9 ${SOURCE_FILES} main.cpp)

target_link_libraries(zad9 libzad9)

