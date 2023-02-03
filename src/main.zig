fn fib(x: u32) u32 {
    if (x <= 1) return x;
    return fib(x - 1) + fib(x - 2);
}

export fn fib46() u32{
    return fib(46);
}