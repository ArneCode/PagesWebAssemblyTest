#include <emscripten/bind.h>
// using namespace emscripten;
float mal2(float n) { return n * 2; }

EMSCRIPTEN_BINDINGS(my_module) { emscripten::function("mal2", &mal2); }
class Mensch {
  int alter;
  public:
  Mensch(int alter) : alter(alter) {}
  int getAlter(){return alter;}
  void setAlter(int n){
      alter=n;
  }
  void sagHallo(){
      printf("Hallo Welt");
  }
};
EMSCRIPTEN_BINDINGS(my_class_example){
    emscripten::class_<Mensch>("Mensch")
    .constructor<int>()
    .function("getAlter",&Mensch::getAlter)
    .function("sagHallo",&Mensch::sagHallo)
    ;
}