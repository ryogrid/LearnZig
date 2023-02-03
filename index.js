
function execJSFib(){
    var fib = function(n) {
        if (n <= 1) { return n; }
        return fib(n - 1) + fib(n - 2);
    };
    const start = performance.now();
    var result = fib(46);
    const end = performance.now();    
    alert(String(result) + "\n" + String(end - start) + " ms");
}

function execWasmFib(){
    const importObject = {
        env: {
            module: {},
            env: {
              memory: new WebAssembly.Memory({ initial: 256 }),
              table: new WebAssembly.Table({ initial: 0, element: 'anyfunc' })
            }            
        }
    };    
    WebAssembly.instantiateStreaming(fetch('./zig-out/lib/main.wasm'), importObject)
    .then((obj) => {
        const start = performance.now();
        // Call an exported function:
        var result = obj.instance.exports.fib46();
        const end = performance.now();
        alert(String(result) + "\n" + String(end - start) + " ms");
    })
}
