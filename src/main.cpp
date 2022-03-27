#include <emscripten.h>
#include <iostream>
extern "C"{
EMSCRIPTEN_KEEPALIVE int next(){
    static int n=0;
    n++;
    return n;
}
}