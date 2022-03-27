#include <emscripten.h>
#include <iostream>
extern "C"{
EMSCRIPTEN_KEEPALIVE int return100(){
    std::cout<<"inside return100 function";
    return 100;
}
}