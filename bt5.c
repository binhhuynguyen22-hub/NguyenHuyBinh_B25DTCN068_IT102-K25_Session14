#include<stdio.h>
#include<math.h>
#include<limits.h>
int ham(int n);
int main(){
	int n;
	printf("nhap vao so nguyen: ");
	scanf("%d",&n);
	
	int sum=ham(n);
	printf("%d",sum);
	
}
int ham(int n){
	if(n==0){
		return 1;
	}
	return n*ham(n-1);
}

