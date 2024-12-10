#include <stdio.h>

int main() {
	
	float a,b,c,sum,average;
	printf("Moi ban nhap diem toan,van,anh: \n");
	scanf("%f%f%f",&a,&b,&c);
	sum = a + b + c;
	printf("Tong diem cua ban la: %.2f \n",sum);
	average = sum / 3;
	printf("Diem trung binh cua ban la: %.2f \n",average); 
	 
} 
