#include <stdio.h>
#include <math.h>
#include <limits.h>
void nhapMang(int a[], int n) {
    printf("\nNhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void inMang(int a[], int n) {
    printf("\nCac phan tu trong mang:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int themPhanTu(int a[], int n, int viTri, int giaTri) {
    if (n >= 100) {
        printf("\nMang da day, khong the them!\n");
        return n;
    }
    if (viTri < 0 || viTri > n) {
        printf("\nVi tri khong hop le!\n");
        return n;
    }
    
    for (int i = n; i > viTri; i--) {
        a[i] = a[i - 1];
    }
    a[viTri] = giaTri;
    printf("\nDa them phan tu thanh cong!\n");
    return n + 1;
}

void suaPhanTu(int a[], int n, int viTri, int giaTri) {
    if (viTri < 0 || viTri >= n) {
        printf("\nVi tri khong hop le!\n");
        return;
    }
    a[viTri] = giaTri;
    printf("\nDa sua phan tu thanh cong!\n");
}

int xoaPhanTu(int a[], int n, int viTri) {
    if (n <= 0) {
        printf("\nMang rong, khong the xoa!\n");
        return n;
    }
    if (viTri < 0 || viTri >= n) {
        printf("\nVi tri khong hop le!\n");
        return n;
    }
    
    for (int i = viTri; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    printf("\nDa xoa phan tu thanh cong!\n");
    return n - 1;
}

void sapXepGiamDan(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nDa sap xep giam dan thanh cong!\n");
}

void sapXepTangDan(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nDa sap xep tang dan thanh cong!\n");
}

void timKiemTuyenTinh(int a[], int n, int x) {
    int dem = 0;
    printf("\nVi tri cua %d trong mang: ", x);
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            printf("%d ", i);
            dem++;
        }
    }
    if (dem == 0) {
        printf("Khong tim thay!");
    }
    printf("\n");
}

void timKiemNhiPhan(int a[], int n, int x) {
    int left = 0, right = n - 1, found = -1;
    
    while (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] == x) {
            found = mid;
            break;
        }
        if (a[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    if (found != -1) {
        printf("\nTim thay %d tai vi tri %d\n", x, found);
    } else {
        printf("\nKhong tim thay %d trong mang!\n", x);
    }
}

void hienThiMenu() {
    printf("\n========== MENU ==========\n");
    printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
    printf("2. In ra gia tri cac phan tu dang quan ly\n");
    printf("3. Them mot phan tu vao vi tri chi dinh\n");
    printf("4. Sua mot phan tu o vi tri chi dinh\n");
    printf("5. Xoa mot phan tu o vi tri chi dinh\n");
    printf("6. Sap xep cac phan tu\n");
    printf("   a. Giam dan\n");
    printf("   b. Tang dan\n");
    printf("7. Tim kiem phan tu nhap vao\n");
    printf("   a. Tim kiem tuyen tinh\n");
    printf("   b. Tim kiem nhi phan\n");
    printf("8. Thoat\n");
    printf("==========================\n");
}

int main() {
    int a[100];
    int n = 0;
    int luaChon, viTri, giaTri, x;
    char subChoice;
    
    while (1) {
        hienThiMenu();
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &luaChon);
        system("cls");
        
        switch (luaChon) {
            case 1:
                printf("Nhap so phan tu (toi da 100): ");
                scanf("%d", &n);
                if (n > 0 && n <= 100) {
                    nhapMang(a, n);
                } else {
                    printf("So phan tu khong hop le!\n");
                    n = 0;
                }
                break;
                
            case 2:
                if (n > 0) {
                    inMang(a, n);
                } else {
                    printf("\nMang rong!\n");
                }
                break;
                
            case 3:
                printf("Nhap vi tri can them (0-%d): ", n);
                scanf("%d", &viTri);
                printf("Nhap gia tri: ");
                scanf("%d", &giaTri);
                n = themPhanTu(a, n, viTri, giaTri);
                break;
                
            case 4:
                printf("Nhap vi tri can sua (0-%d): ", n - 1);
                scanf("%d", &viTri);
                printf("Nhap gia tri moi: ");
                scanf("%d", &giaTri);
                suaPhanTu(a, n, viTri, giaTri);
                break;
                
            case 5:
                printf("Nhap vi tri can xoa (0-%d): ", n - 1);
                scanf("%d", &viTri);
                n = xoaPhanTu(a, n, viTri);
                break;
                
            case 6:
                printf("Chon kieu sap xep (a: Giam dan, b: Tang dan): ");
                scanf(" %c", &subChoice);
                switch (subChoice) {
                    case 'a':
                    case 'A':
                        sapXepGiamDan(a, n);
                        break;
                    case 'b':
                    case 'B':
                        sapXepTangDan(a, n);
                        break;
                    default:
                        printf("Lua chon khong hop le!\n");
                }
                break;
                
            case 7:
                printf("Nhap gia tri can tim: ");
                scanf("%d", &x);
                printf("Chon kieu tim kiem (a: Tuyen tinh, b: Nhi phan): ");
                scanf(" %c", &subChoice);
                switch (subChoice) {
                    case 'a':
                    case 'A':
                        timKiemTuyenTinh(a, n, x);
                        break;
                    case 'b':
                    case 'B':
                        printf("\nLuu y: Tim kiem nhi phan yeu cau mang da sap xep tang dan!\n");
                        timKiemNhiPhan(a, n, x);
                        break;
                    default:
                        printf("Lua chon khong hop le!\n");
                }
                break;
                
            case 8:
                printf("\nTam biet!\n");
                return 0;
                
            default:
                printf("\nLua chon khong hop le! Vui long chon lai.\n");
        }
    }
    
    return 0;
}
