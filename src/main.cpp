#include <emscripten.h>
#include <iostream>
extern "C"{
EMSCRIPTEN_KEEPALIVE int return2(){
    std::cout<<"inside return2 function";
    return 100;
}
}