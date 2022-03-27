#include <emscripten.h>
#include <iostream>
extern "C"{
EMSCRIPTEN_KEEPALIVE int returning2(int n){
    std::cout<<"inside returning2 function";
    return n*2;
}
}