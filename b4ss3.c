#include <stdio.h>

int main() {
    float diemToan, diemVan, diemAnh; // Khai báo biến lưu điểm
    float tongDiem, diemTrungBinh;

    // Yêu cầu người dùng nhập điểm
    printf("Vui lòng nhập điểm Toán: ");
    scanf("%f", &diemToan);

    printf("Vui lòng nhập điểm Văn: ");
    scanf("%f", &diemVan);

    printf("Vui lòng nhập điểm Anh: ");
    scanf("%f", &diemAnh);

    // Tính tổng điểm và điểm trung bình
    tongDiem = diemToan + diemVan + diemAnh;
    diemTrungBinh = tongDiem / 3;

    // Hiển thị kết quả với 2 chữ số thập phân
    printf("Tổng điểm: %.2f\n", tongDiem);
    printf("Điểm trung bình: %.2f\n", diemTrungBinh);

    return 0;
}