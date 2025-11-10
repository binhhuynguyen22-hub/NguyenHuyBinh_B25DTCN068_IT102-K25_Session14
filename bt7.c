#include <stdio.h>
#include <math.h>

int laSoNguyenTo(int n);

int main() {
    int x;
    printf("Nhap mot so: ");
    scanf("%d", &x);

    if (laSoNguyenTo(x)==1)
        printf("true");
    else
        printf("false");

    return 0;
}
int laSoNguyenTo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0)
            return 0;}
    return 1;
}
