#include<stdio.h>

main(){
	int n;
	int sum = 0; 
	printf("Moi ban nhap mot so nguyen co 4 chu so: \n");
	scanf("%d",&n);
	while(n != 0){
		int i ;
		i = n % 10;
		sum = sum + i; 
		n = n / 10;
		 
	} 
	printf("Tong cac chu so ban vua nhap la: %d \n",sum); 
	 
} 
 

