#include <stdio.h>

int main() {
    int soNguyen, tong = 0;

    // Yêu cầu người dùng nhập số nguyên có 4 chữ số
    printf("Vui lòng nhập một số nguyên có 4 chữ số: ");
    scanf("%d", &soNguyen);

    // Kiểm tra xem số nhập vào có đúng 4 chữ số hay không
    if (soNguyen < 1000 || soNguyen > 9999) {
        printf("Số nhập vào không hợp lệ! Vui lòng nhập số có 4 chữ số.\n");
        return 1; // Thoát chương trình
    }

    // Tính tổng các chữ số
    while (soNguyen > 0) {
        tong += soNguyen % 10;  // Lấy chữ số cuối cùng và cộng vào tổng
        soNguyen /= 10;         // Bỏ chữ số cuối cùng
    }

    // Hiển thị kết quả
    printf("Tổng các chữ số là: %d\n", tong);

    return 0;
}