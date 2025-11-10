#include <stdio.h>
#include <math.h>
#include <limits.h>

int tongUoc(int n, int i);
int laSoHoanHao(int n);

int main() {
    int a, b;
    printf("Nhap hai so nguyen: ");
    scanf("%d %d", &a, &b);

    if (laSoHoanHao(a) == 1)
        printf("%d la so hoan hao.\n", a);
    else
        printf("%d khong phai so hoan hao.\n", a);

    if (laSoHoanHao(b) == 1)
        printf("%d la so hoan hao.\n", b);
    else
        printf("%d khong phai so hoan hao.\n", b);

    return 0;
}
int tongUoc(int n, int i) {
    if (i == n) 
        return 0;
    if (n % i == 0)
        return i + tongUoc(n, i + 1);
    else
        return tongUoc(n, i + 1);
}
int laSoHoanHao(int n) {
    if (n <= 1) 
        return 0;
    int tong = tongUoc(n, 1);
    if (tong == n)
        return 1;
    else
        return 0;
}
