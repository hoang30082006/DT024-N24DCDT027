// DT024 - Kiem thu (thay cho test/runtests.jl cua khung Julia)
// Bien dich (tu thu muc goc repo): g++ -std=c++17 -O2 -Wall -o runtests test/runtests.cpp
// Chay: runtests.exe   (Windows)  |  ./runtests  (Linux/macOS)
// Bo kiem thu 15 ca doc lap la ham chay_test trong src/cuoiky.cpp; file nay goi lai ham do.
// Ma tra ve 0 neu 15/15 PASS, khac 0 neu co ca FAIL.
#define main cuoiky_main   // bo main cua cuoiky.cpp de dung main cua file nay
#include "../src/cuoiky.cpp"
#undef main

int main() {
    chay_test();
    return g_pass == g_total ? 0 : 1;
}
