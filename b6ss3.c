#include <stdio.h>

int main() {
    float canhDay, chieuCao, dienTich;

    // Yêu cầu người dùng nhập độ dài cạnh đáy
    printf("Vui lòng nhập độ dài cạnh đáy của tam giác: ");
    scanf("%f", &canhDay);

    // Yêu cầu người dùng nhập chiều cao
    printf("Vui lòng nhập chiều cao của tam giác: ");
    scanf("%f", &chieuCao);

    // Tính diện tích tam giác
    dienTich = 0.5 * canhDay * chieuCao; // Công thức: diện tích = (1/2) * đáy * cao

    // Hiển thị kết quả
    printf("Diện tích tam giác là: %.2f\n", dienTich);

    return 0;
}