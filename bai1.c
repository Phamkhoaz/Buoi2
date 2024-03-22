#include <stdio.h>

void printMultiplesOfSeven(int start, int end) {
    // Kiểm tra từng số trong phạm vi từ start đến end
    for (int i = start; i <= end; ++i) {
        // Kiểm tra nếu số i là số nguyên có 2 chữ số và là bội của 7
        if (i >= 10 && i <= 99 && i % 7 == 0) {
            printf("%d ", i); // In ra số i
        }
    }
}

int main() {
    int start = 10; // Số bắt đầu là 10
    int end = 99;   // Số kết thúc là 99

    printf("Cac so nguyen co 2 chu so va la boi cua 7:\n");
    printMultiplesOfSeven(start, end); // Gọi hàm để in các số

    return 0;
}
