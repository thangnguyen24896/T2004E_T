#include <stdio.h>

int main(){
	int a,b;
	do{
		printf("Nhap vao so a = ");
		scanf("%d", &a);
		printf("Nhap vao so b = ");
		scanf("%d", &b);
	}while(a >= b);
		int s;
		for(int i = a;i <= b; i++){
		s = s + i;
	}
	printf("Tong = %d", s);
}

