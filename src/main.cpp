#include <emscripten.h>
extern "C"{
EMSCRIPTEN_KEEPALIVE int return2(){
        return 100;
}
}