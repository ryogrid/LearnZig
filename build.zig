const std = @import("std");

pub fn build(b: *std.build.Builder) void {
    const mode = b.standardReleaseOptions();
    const wasm = b.addSharedLibrary("main", "src/main.zig", .unversioned);
    wasm.setBuildMode(mode);
    wasm.setTarget(.{ .cpu_arch = .wasm32, .os_tag = .freestanding });
    wasm.install();

    const liba = b.addStaticLibrary("fib46", "src/main.zig");
    liba.setBuildMode(mode);
    liba.setTarget(.{ .cpu_arch = .x86_64, .os_tag = .windows });
    liba.install();

    const exe = b.addExecutable("fib", null);
    exe.addIncludePath(".");
    exe.addIncludePath("/ProgramData/chocolatey/lib/zig/tools/zig-windows-x86_64-0.10.1/lib");
    exe.addIncludePath("/ProgramData/chocolatey/lib/zig/tools/zig-windows-x86_64-0.10.1/lib/include");
    exe.addCSourceFile("src/main.c", &[_][]const u8 {});
    exe.linkLibrary(liba);
    exe.setTarget(.{ .cpu_arch = .x86_64, .os_tag = .windows });
    exe.linkSystemLibrary("c");
    exe.linkLibC();
    exe.install();
}
