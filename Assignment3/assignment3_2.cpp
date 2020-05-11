#include <stdio.h>

int main(){
	int num;
	num = 4000;
	printf("So tien gui tiet kiem la %d \n",num);
	float a,b,c,x;
	a = num + 0.08*num;
	b = a + 0.08*a;
	c = b + 0.08*b;
	x = c + 0.08*c;
	
	printf("So tien lai sau 4 nam la : %0.3f",x);
}

