const std = @import("std");

pub fn build(b: *std.build.Builder) void {
    // const target = b.standardTargetOptions(.{});
    // // Standard release options allow the person running `zig build` to select
    // // between Debug, ReleaseSafe, ReleaseFast, and ReleaseSmall.
    // const mode = b.standardReleaseOptions();

    // const lib = b.addSharedLibrary("fib", "src/main.zig", .unversioned);
    // lib.setTarget(target);
    // lib.setBuildMode(mode);
    // lib.install();

    // // const main_tests = b.addTest("src/main.zig");
    // // main_tests.setBuildMode(mode);

    // // const test_step = b.step("test", "Run library tests");
    // // test_step.dependOn(&main_tests.step);

    const mode = b.standardReleaseOptions();
    const wasm = b.addSharedLibrary("main", "src/main.zig", .unversioned);
    wasm.setOutputDir(".");
    wasm.setBuildMode(mode);
    wasm.setTarget(.{ .cpu_arch = .wasm32, .os_tag = .freestanding });
    wasm.install();    
}
