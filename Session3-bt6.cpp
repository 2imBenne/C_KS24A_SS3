#include <stdio.h>

int main() {
	
	float a,h,S;
	printf("Moi ban nhap canh day cua hinh tam giac: \n");
	scanf("%f",&a);
	printf("Moi ban nhap chieu cao cua hinh tam giac: \n");
	scanf("%f",&h);
	S = 0.5 * a * h;
	printf("Dien tich hinh tam giac co canh la %f va chieu cao la %f la: %f \n",a,h,S); 
	 
} 
