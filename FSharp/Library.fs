namespace FSharp

module TestFromFSharp =
    // x, y and return value inferred to be int
    // function1: int -> int -> int
    let Add x y = x + y
    
    // Note: F# code can only be used on the Server-side portion of Blazor as it cannot be naturally compiled into WebAssembly.
