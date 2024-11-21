#include <stdio.h>
#define PI 3.14159 // Định nghĩa hằng số PI

int main() {
    float banKinh, chuVi, dienTich;

    // Yêu cầu người dùng nhập bán kính
    printf("Vui lòng nhập bán kính hình tròn (r): ");
    scanf("%f", &banKinh);

    // Tính chu vi và diện tích
    chuVi = 2 * PI * banKinh;              // Chu vi: C = 2 * PI * r
    dienTich = PI * banKinh * banKinh;     // Diện tích: A = PI * r^2

    // Hiển thị kết quả với 2 chữ số thập phân
    printf("Chu vi hình tròn: %.2f\n", chuVi);
    printf("Diện tích hình tròn: %.2f\n", dienTich);

    return 0;
}