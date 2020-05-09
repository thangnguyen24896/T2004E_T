#include <stdio.h>
#include <cmath>

int main(){
	int a, b, c;
	printf("Nhap vao 3 so: ");
	printf("So thu nhat: \n");
	scanf("%d",&a);
	printf("So thu hai: \n");
	scanf("%d",&b);
	printf("So thu ba: \n");
	scanf("%d",&c);
	if(((a + b) > c)&&((a + c) > b)&&((c + b) > a)){
		printf("Day la ba canh cua mot tam giac");
		int p, p2, s;
		p = a + b + c;
		p2 = p/2;
		s = sqrt(p2 * (p2 - a) * (p2 - b) * (p2 - c));
		printf("Chu vi cua tam giac la p = %d \n",p);
		printf("Dien tich cua tam giac la s = %d",s);
	}else{
		printf("Day khong phai ba canh cua mot tam giac");
	}
}


