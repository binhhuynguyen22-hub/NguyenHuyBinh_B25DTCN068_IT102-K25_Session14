#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int nhapPhanTu(int a[]){
	int n;
	do{
		
		printf("Nhap vao so phan tu ban muon nhap: ");
		scanf("%d",&n);
	
		if(n < 1 || n > 100){
			printf("Loi! Ban hay nhap lai so phan tu");
			continue;
		}
	}while(n < 1 || n > 100);
	for(int i = 0; i < n; i++){
		printf("arr[%d] = ",i);
		scanf("%d",&a[i]);
	}
	return n;
}
void hienThiPhanTu(int a[],int n){
	//int n;
	printf("Mang sau khi nhap la: \n");
	for(int i = 0; i < n; i++){
		printf("arr[%d] = %d     ",i,a[i]);
	}
	printf("\n\n");
}
int themPhanTu(int a[],int n, int index, int value){
		
		if (n >= 100){
			printf("Mang da day");
			return n;
		}else{
			if(index < 0 || index > n ){
				printf("Vi tri them khong hop le");
				return n;
			}else{
				printf("Nhap vao gia tri ban muon them: ");
				scanf("%d",&value);
				for(int i = n - 1; i >= index; i--){
					a[i+1] = a[i];
				}
				a[index] = value;
				n++;
			}
		}
		printf("Da them phan tu thanh cong!");
		return n;
}
int suaPhanTu(int a[], int n, int index,int value){
	if (n >= 100){
			printf("Mang da day");
			return n;
		}else{
			if(index < 0 || index > n ){
				printf("Vi tri them khong hop le");
				return n;
			}else{
				printf("Nhap vao gia tri ban muon sua: ");
				scanf("%d",&value);
			for(int i = 0; i < n; i++){
			a[index] = value;
			}
		}
	}
}
int xoaPhanTu(int a[], int n, int index){
	if(n == 0){
		printf("Mang rong");
	}else{
			if(index < 0 || index > n ){
				printf("Vi tri them khong hop le");
				return n;
			}else{
				for(int i = index; i < n; i++){
					a[i] = a[i+1];
				}
				n--;
			}
			return n;
				
}
}
int sapXepPhanTuTangDan(int a[], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n-i-1; j++){
			if(a[j] > a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("Mang sap xep tang dan la: \n");
	for(int i = 0; i < n;i ++){
		printf("%d   ",a[i]);
	}
}
int sapXepPhanTuGiamDan(int a[], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n-i-1; j++){
			if(a[j] < a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("Mang sap xep tang dan la: \n");
	for(int i = 0; i < n;i ++){
		printf("%d   ",a[i]);
	}
}
int timKiemTuyenTinh(int a[], int n){
	int found = 0;
	int key;
	printf("Enter the key: ");
	scanf("%d",&key);
	for(int i = 0; i < n; i++){
		if(a[i] == key){
			found ++;
			break;
		}
	}
	if(found){
		printf("Tim thay phan tu %d trong mang\n",key);
	}else{
	
	printf("Khong tim thay phan tu %d trong mang\n",key);
}
}
int timKiemNhiPhan(int a[], int n){
	int key;
	printf("Enter the key: ");
	scanf("%d",&key);
	int left = 0;
	int right = n-1;
	int mid;
	int flag = 0;
	while(left <= right){
		mid = left+(right - left)/2;
		if(a[mid] == key){
			flag = 1;
			break;
		}else if(a[mid] < key){
			left = mid + 1;
		}else{
			right = mid - 1;
		}
	}
	if(flag == 0){
		printf("Khong tim thay phan tu %d trong mang\n",key);
	}else{
		printf("Tim thay phan tu %d trong mang\n",key);
	}
}
int main (){
	int a[100];
	int n;
	int options;
	int index, value;
	char choice;
	char confirm;
	int isSorted = 0;
	
	do{
		printf("MENU\n");
		printf("1. Nhap phan tu\n");
		printf("2. Hien thi phan tu\n");
		printf("3. Them phan tu vao vi tri chi dinh\n");
		printf("4. Sua phan tu vao vi tri chi dinh\n");
		printf("5. Xoa phan tu vao vi tri chi dinh\n");
		printf("6. Sap xep cac phan tu\n");
		printf("       a. Giam dan\n");
		printf("       b. Tang dan\n");
		printf("7. Tim kiem phan tu nhap vao\n");
		printf("       a. Tiem kiem tuyen tinh\n");
		printf("       b. Tiem kiem nhi phan\n");
		printf("8. Thoat\n");
		printf("Moi ban nhap lua chon cua ban(1-8): ");
		scanf("%d",&options);
		system("cls");
		
		switch(options){
			case 1:
				n = nhapPhanTu(a);	
				break;
			case 2:
				hienThiPhanTu(a,n);
				break;
			case 3:
				if (n <= 0) {
        			printf("Ban chua nhap mang!\n");
        			break;
    			}
				printf("Nhap vao vi tri ban muon sua: ");
				scanf("%d",&index);
				n = themPhanTu(a,n,index,value);
				hienThiPhanTu(a,n);
				break;
			case 4:
				if (n <= 0) {
        			printf("Ban chua nhap mang!\n");
        			break;
    			}
				printf("Nhap vao vi tri ban muon sua: ");
				scanf("%d",&index);
				n = suaPhanTu(a,n,index,value);
				hienThiPhanTu(a,n);
				break;
			case 5:
				if (n <= 0) {
        			printf("Ban chua nhap mang!\n");
        			break;
    			}
				printf("Nhap vao vi tri ban muon xoa: ");
				scanf("%d",&index);
				n = xoaPhanTu(a,n,index);
				hienThiPhanTu(a,n);
				break;
			case 6:
				if (n <= 0) {
        			printf("Ban chua nhap mang!\n");
        			break;
    			}
				do{
					printf("a. Mang Tang dan\n");
					printf("b. Mang Giam dan\n");	
					printf("Nhap lua chon cua ban: ");
					scanf(" %c",&choice);
					switch(choice){
						case 'a':
							sapXepPhanTuTangDan(a,n);
							printf("\n\n");
							break;
						case 'b':
							sapXepPhanTuGiamDan(a,n);
							printf("\n\n");
							break;
						default:
							printf("Ban hay nhap a hoac b");
							break;
						}
							printf("Ban co muon tiep tuc khong(Y/N)?");
							scanf(" %c",&confirm);
					}while(confirm == 'y' || confirm == 'Y');
				
				isSorted = 1;
				break;
			case 7:
				if (n <= 0) {
        			printf("Ban chua nhap mang!\n");
        			break;
    			}
				do{
					printf("a. Tim kiem tuyen tinh      \n");
					printf("b. Tim kiem nhi phan        \n");
					printf("Nhap lua chon cua ban: ");
					scanf(" %c",&choice);
					switch(choice){
						case 'a':
							timKiemTuyenTinh(a,n);
							printf("\n\n");
							break;
						case 'b':
							if(isSorted == 0){
								printf("Ban hay sap xep mang truoc khi tim kiem nhi phan\n");
							}else{
								timKiemNhiPhan(a,n);
							}
							printf("\n\n");
							break;
						default:
							printf("Ban hay nhap a hoac b");
							break;
						}
							printf("Ban co muon tiep tuc khong(Y/N)?");
							scanf(" %c",&confirm);
					}while(confirm == 'y' || confirm == 'Y');
				
				break;
			case 8:
				printf("tam biet!");
				break;
			default:
				printf("Thong tin ban nhap khong hop le! Hay chon cac chuc nang(1-8)");
				break;
		}
		
		
	}while(options != 8);
	return 0;
}
