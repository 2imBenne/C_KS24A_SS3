#include <stdio.h>

int main(){
	int n,reverse = 0;
	printf("Moi ban nhap mot so nguyen co 4 chu so: "); 
	scanf("%d",&n); 
	while( n != 0) {
		int i = n % 10;
		reverse = reverse * 10 + i;
		n /= 10; 
		  }
		  printf("So nghich dao la: %d \n",reverse); 
} 
