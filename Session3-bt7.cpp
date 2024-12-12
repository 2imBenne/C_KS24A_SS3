#include <stdio.h>

int main(){
	printf("Moi nhap vao mot so nguyen co 4 chu so ");
	int n,sum=0,n1,n2,n3;	scanf("%d", &n);
	n1 = n%10;
	n/=10;
	n2=n%10;
	n/=10;
	n3 = n%10;
	n/=10;
	sum += n1 + n2 + n3 + n;
	printf("Tong cac chu so nhap vao la %d ", sum);
