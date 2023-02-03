//const std = @import("std");

fn fib(x: u64) u64 {
    if (x <= 1) return x;
    return fib(x - 1) + fib(x - 2);
}

export fn fib47() u64{
    return fib(47);
}