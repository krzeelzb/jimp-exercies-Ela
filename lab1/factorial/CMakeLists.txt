project(factorial)

set(HEDEAR_FILES Factorial.h)
set(SOURCE_FILES Factorial.cpp)

add_library(libfactorial STATIC ${SOURCE_FILES})
target_include_directories(libfactorial PUBLIC .)

add_executable(factorial ${SOURCE_FILES} main.cpp ../palindrome/Palindrome.cpp ../palindrome/Palindrome.h ../reversestring/ReverseString.cpp ../reversestring/main.cpp ../reversestring/ReverseString.h)

target_link_libraries(factorial libfactorial)
