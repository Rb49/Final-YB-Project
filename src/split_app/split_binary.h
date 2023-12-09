#include <windows.h>
#include <cmath>
#include <stdio.h>
#include <fileapi.h>
#include <string>

namespace split_binary {
    inline void print(std::string str) {
        printf_s("%s\n", str.c_str());
    }
}