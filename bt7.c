#include <stdio.h>
#include <math.h>

int laSoNguyenTo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main() {
    int x;
    printf("Nhap mot so: ");
    scanf("%d", &x);

    if (laSoNguyenTo(x))
        printf("%d la so nguyen to.\n", x);
    else
        printf("%d khong phai la so nguyen to.\n", x);

    return 0;
}
