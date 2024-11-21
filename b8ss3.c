#include <stdio.h>

int main() {
    int soNguyen, soNghichDao = 0;

    // Yêu cầu người dùng nhập số nguyên có 4 chữ số
    printf("Vui lòng nhập một số nguyên có 4 chữ số: ");
    scanf("%d", &soNguyen);

    // Kiểm tra xem số nhập vào có đúng 4 chữ số hay không
    if (soNguyen < 1000 || soNguyen > 9999) {
        printf("Số nhập vào không hợp lệ! Vui lòng nhập số có 4 chữ số.\n");
        return 1; // Thoát chương trình nếu số không hợp lệ
    }

    // Tính số nghịch đảo
    while (soNguyen > 0) {
        soNghichDao = soNghichDao * 10 + soNguyen % 10; // Lấy chữ số cuối cùng và thêm vào số nghịch đảo
        soNguyen /= 10; // Bỏ chữ số cuối cùng
    }

    // Hiển thị kết quả
    printf("Số nghịch đảo là: %d\n", soNghichDao);

    return 0;
}