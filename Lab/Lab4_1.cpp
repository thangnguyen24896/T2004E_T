#include <stdio.h>

int main(){
	int num;
	printf("Nhap vao so nguyen bat ki: \n");
	scanf("%d",&num);
	int x,y;
	y=0;
	for(num;num != 0;num/=10){
		x = num%10;
		y = y*10 + x;
	}
	printf("%d la nghic dao cua %d",y,num);
}

