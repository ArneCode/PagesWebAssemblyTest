#include <emscripten.h>
#include <iostream>
extern "C"{
EMSCRIPTEN_KEEPALIVE int next(){
    static int n=0;
    n++;
    return n;
}
EMSCRIPTEN_KEEPALIVE std::string getMsg(){
    return "Hello World";
}
}