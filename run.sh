EM_PATH=/workspace/PagesWebAssemblyTest/gitpod/emsdk/upstream/emscripten
$EM_PATH/emcmake cmake -B build/wasm
$EM_PATH/emmake make -s -C build/wasm