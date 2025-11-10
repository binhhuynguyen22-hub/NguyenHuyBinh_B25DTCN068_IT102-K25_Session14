#include<stdio.h>
#include<math.h>
#include<limits.h>
int UCLN(int a, int b);

int main() {
    int x, y;

    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &x);

    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &y);

    int ucln = UCLN(x, y);

    printf("Uoc chung lon nhat cua %d va %d la: %d\n", x, y, ucln);

    return 0;
}
int UCLN(int a, int b) {
    if (b == 0)
        return a;
    else
        return UCLN(b, a % b);
}


