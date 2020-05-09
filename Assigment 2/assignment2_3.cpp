#include <stdio.h>
#include <cmath>

int main(){

	
	float a, b, c;
	float x1, x2;
	printf("Nhap vao 3 so \n");
	printf("Nhap vao so thu nhat: \n");
	scanf("%f",&a);
	printf("Nhap vao so thu hai: \n");
	scanf("%f",&b);
	printf("Nhap vao so thu ba: \n");
	scanf("%f",&c);
	if(a==0){
		if(b==0){
			if(c==0){
				printf("Phuong trinh co vo so nghiem");
			}else{
				printf("Phuong trinh vo nghiem");
			}
			}else{
				float xy;
				xy = -b/c;
				printf("Phuong trinh co nghiem la x = %f",xy);
			}
		}else{
			float delta;
			delta = (b * b) - (4 * a * c); // Tinh delta
			// Kiem tra cac truong hop cua delta
			if(delta==0){
				float x;
				x = -b/2*a;
				printf("Phuong trinh co nghiem kep: x = x1 = x2 = %f)",x);
			}else if(delta<0){
				printf("Phuong trinh vo nghiem");
			}else{
				printf("Phuong trinh co 2 nghiem phan biet:\n");
				x1 = (-b + sqrt(delta))/ 2 * a;
				printf("x1 = %f \n",x1);
				x2 = (-b - sqrt(delta))/ 2 * a;
				printf("x2 = %f",x2);
			}
		}
}

