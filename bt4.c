#include<stdio.h>
#include<math.h>
#include<limits.h>
void inputarr(int arr[],int n);
void showarr(int arr[],int n);
int main()
{
	int n;
	const int max=100;
	int arr[max];
	do{
		printf("nhap so phan tu cua mang: ");
		scanf("%d",&n);
		if(n<1||n>max){
			printf("loi-nhap lai n\n");
		}
	}while(n<1||n>max);
	inputarr(arr,n);
	showarr(arr,n);
	
}
void inputarr(int arr[], int n){
	for (int i=0;i<n;i++){
		printf("nhap phan tu arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
}
void showarr(int arr[],int n){
	printf("cac phan tu trong mang la: \n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

