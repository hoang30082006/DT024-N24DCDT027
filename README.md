# DT024 — Tìm phần tử xuất hiện nhiều lần nhất

## Thông tin và căn cứ
- Họ tên, MSSV, lớp: Nguyễn Lê Hoàng, N24DCDT027, D24CQDT01-N.
- Mã và tên đề tài: DT024 — Tìm phần tử xuất hiện nhiều lần nhất.
- Giáo trình: Giao-trinh-Cau-truc-du-lieu-va-Giai-thuat-INT1306.pdf.
- Căn cứ: Chương 2, Mục 2.8, bài 24, trang in 61, trang PDF 73.
- URL GitHub: https://github.com/hoang30082006/DT024-N24DCDT027; SHA chạy C ghi trong báo cáo và TXT nộp rời.
- Permalink tệp thuật toán tại C: ghi trong báo cáo và TXT.
- Ngôn ngữ: C++17, trình biên dịch g++  3.14.7 ; không có bản Julia.

## Hợp đồng input/output
- Đầu vào: mảng số nguyên a, 1 ≤ n ≤ 2000, |a[i]| ≤ 10^6, khai báo trực tiếp trong chương trình hoặc nhập từ bàn phím; không dùng tệp dữ liệu ngoài.
- Đầu ra: gia_tri xuất hiện nhiều nhất và tan_suat; hòa thì chọn giá trị nhỏ nhất; bản sắp xếp in thêm các nhóm (giá trị, số lượng).
- Dữ liệu sai: chương trình từ chối và in thông báo.

## Cấu trúc
- src/cuoiky.cpp: mã nguồn, bộ kiểm thử và khảo sát.
- docs/anh_ket_qua/: kế hoạch và ảnh minh chứng A01–A11.

## Biên dịch và chạy
Mở terminal tại thư mục repo:

cd src
g++ -std=c++17 -O2 -Wall -o cuoiky cuoiky.cpp
Windows: cuoiky.exe vd1 | vd2 | test | khaosat | nhap
Linux/macOS: ./cuoiky vd1 | vd2 | test | khaosat | nhap

- vd1, vd2: Ví dụ 1 và Ví dụ 2 của phiếu.
- test: 15 ca kiểm thử, kết thúc bằng dòng "Tong ket: 15/15 PASS, 0 FAIL".
- khaosat: số phép so sánh khóa với n = 6, 30, 100, 500.
- nhap: nhập n rồi n số nguyên từ bàn phím.

## Kết quả kiểm thử
15 ca kiểm thử độc lập (12 ca ở Bảng 4.2 và 3 ca bổ sung), kết quả thực tế 15/15 PASS, 0 FAIL. Không dùng assert riêng nên số phép kiểm bằng số ca.

## Phần đã sửa so với mã mẫu
Không dùng mã mẫu BFS. Toàn bộ thuật toán tự cài: mode_dem_truc_tiep, quick_sort, dem_nhom, mode_sau_sap_xep.