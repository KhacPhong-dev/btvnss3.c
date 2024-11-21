#include <stdio.h>

int main() {
    float doC, doF; // Khai báo các biến để lưu nhiệt độ

    // Yêu cầu người dùng nhập nhiệt độ theo độ Celsius
    printf("Vui lòng nhập nhiệt độ (°C): ");
    scanf("%f", &doC);

    // Chuyển đổi sang độ Fahrenheit
    doF = (doC * 9 / 5) + 32;

    // Hiển thị kết quả
    printf("%.2f°C tương đương với %.2f°F\n", doC, doF);

    return 0;
}