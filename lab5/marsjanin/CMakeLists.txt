
project(marsianin)

set(HEDEAR_FILES Marsjanin.h)
set(SOURCE_FILES Marsjanin.cpp)

add_library(libmarsianin STATIC ${SOURCE_FILES})
target_include_directories(libmarsianin PUBLIC .)

add_executable(marsianin ${SOURCE_FILES} main.cpp)

target_link_libraries(marsianin libmarsianin)

