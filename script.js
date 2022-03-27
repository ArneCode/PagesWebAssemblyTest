WebAssembly.instantiateStreaming(fetch("wasm/WASM_TEST.js"))
    .then(obj => console.log(obj))