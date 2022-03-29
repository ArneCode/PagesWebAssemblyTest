#include <emscripten/bind.h>
#include <emscripten.h>
#include <iostream>

extern "C"{
  extern void console_log(std::string text);
}
float mal2(float n) { return n * 2; }

EMSCRIPTEN_BINDINGS(my_module) { emscripten::function("mal2", &mal2); }
class Mensch {
  int alter;

public:
  Mensch(int alter) : alter(alter) {}
  int getAlter() { return alter; }
  void setAlter(int n) { alter = n; }
  void sagHallo() {
    std::cout<<"Hallo Welt, ich bin "<<alter<<" Jahre alt\n";
   }
};
EMSCRIPTEN_BINDINGS(my_class_example) {
  emscripten::class_<Mensch>("Mensch")
      .constructor<int>()
      .function("getAlter", &Mensch::getAlter)
      .function("sagHallo", &Mensch::sagHallo)
      ;
}