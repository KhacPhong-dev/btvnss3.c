#include <stdio.h>

int main() {
    char ten[50]; // Khai báo mảng ký tự để lưu tên

    // Yêu cầu người dùng nhập tên
    printf("Vui lòng nhập tên của bạn: ");
    scanf("%49s", ten); // Đọc dữ liệu từ bàn phím (giới hạn 49 ký tự để tránh tràn mảng)

    // In ra lời chào
    printf("Xin chào %s!\n", ten);

    return 0;
}
