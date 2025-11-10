#include<stdio.h>
#include<math.h>
#include<limits.h>
int cong(int x,int y);
int main(){
	int a,b;
	printf("nhap a: ");
	scanf("%d",&a);
	printf("nhap b: ");
	scanf("%d",&b);
	int c= sum(a,b);
	
	printf("tong cua %d va %d la: %d",a,b,c);
	
}int sum(int x,int y){
	return x+y;
}
