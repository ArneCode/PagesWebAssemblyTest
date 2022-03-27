WebAssembly.instantiateStreaming(fetch("wasm/WASM_TEST.wasm"))
    .then(obj => console.log(obj))