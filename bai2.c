#include <stdio.h>

// Hàm kiểm tra xem một số có phải là số chính phương hay không
int isPerfectSquare(int num) {
    int i = 1;
    while (i * i <= num) {
        if (i * i == num)
            return 1;
        i++;
    }
    return 0;
}

// Hàm đếm và in ra các số chính phương nhỏ hơn n
void countAndPrintPerfectSquares(int n) {
    printf("Cac so chinh phuong nho hon %d la: ", n);
    int count = 0; // Biến đếm số chính phương
    for (int i = n - 1; i > 0; i--) {
        if (isPerfectSquare(i)) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nTong so chinh phuong la: %d\n", count);
}

int main() {
    int n;
    printf("Nhap vao mot so nguyen duong n: ");
    scanf("%d", &n);
    countAndPrintPerfectSquares(n);
    return 0;
}
