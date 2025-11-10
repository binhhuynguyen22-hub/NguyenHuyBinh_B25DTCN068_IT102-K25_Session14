#include<stdio.h>
#include<math.h>
#include<limits.h>
int findmax(int arr[],int n);
int main(){
	int n;
	const int maxsize=100;
	int arr[maxsize];
	
	printf("nhap phan tu cua mang: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){	
	printf("nhap phan tu thu arr[%d]: ",i);

		scanf("%d",&arr[i]);
	}
	
	int max= findmax(arr, n);
	printf("gia tri lon nhat trong mang la: %d\n",max);
	return 0;
}
int findmax(int arr[],int n){
	int max=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}

