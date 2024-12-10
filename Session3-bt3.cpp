#include <stdio.h>

int main(){
	
	int r;	
	printf("Moi ban nhap do dai ban kinh \n"); 
	scanf("%d",&r);
	const float PI = 3.14;
	float P =  PI * (r * r);
	float S = 2 * PI * r; 
	printf("Chu vi hinh tron la: %.2f \n",P);
	printf("Dien tich hinh tron la: %.2f \n",S);	 
} 
