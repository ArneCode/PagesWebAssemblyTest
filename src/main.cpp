#include <emscripten.h>
#include <iostream>
extern "C"{
EMSCRIPTEN_KEEPALIVE int returning2(){
    std::cout<<"inside returning2 function";
    return 2;
}
}