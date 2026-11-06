// DT024 - Demo hai vi du cua phieu (thay cho demo.jl cua khung Julia)
// Bien dich (tu thu muc goc repo): g++ -std=c++17 -O2 -Wall -o demo demo.cpp
// Chay: demo.exe   (Windows)  |  ./demo  (Linux/macOS)
// Moi vi du in: input, output mong doi, buoc trung gian (cac nhom), output thuc te.
#define main cuoiky_main
#include "src/cuoiky.cpp"
#undef main

static void demo(const char* ten, const vector<int>& a, int gia_tri_mong_doi, int tan_suat_mong_doi) {
    printf("=== %s ===\n", ten);
    printf("Input: %s\n", to_str(a).c_str());
    printf("Output mong doi: gia_tri=%d; tan_suat=%d\n", gia_tri_mong_doi, tan_suat_mong_doi);
    ModeResult r1 = mode_dem_truc_tiep(a);
    printf("[dem truc tiep] gia_tri=%d; tan_suat=%d\n", r1.gia_tri, r1.tan_suat);
    printf("[sap xep + gom nhom] buoc trung gian:\n");
    ModeResult r2 = mode_sau_sap_xep(a, true);  // in tung nhom (gia_tri, so_luong)
    printf("[sap xep + gom nhom] gia_tri=%d; tan_suat=%d\n", r2.gia_tri, r2.tan_suat);
    bool ok = r1.gia_tri == gia_tri_mong_doi && r1.tan_suat == tan_suat_mong_doi &&
              r2.gia_tri == gia_tri_mong_doi && r2.tan_suat == tan_suat_mong_doi;
    printf("Doi chieu: %s\n\n", ok ? "KHOP voi mong doi" : "KHONG KHOP");
}

int main() {
    demo("Vi du 1", {2, 1, 2, 3, 2, 1}, 2, 3);
    demo("Vi du 2 (hoa tan suat: chon gia tri nho hon)", {4, 1, 4, 1}, 1, 2);
    return 0;
}
