#include <stdio.h>

int main(){
	int n;
	do{
		printf("Nhap vao so nguyen duong n = ");
		scanf("%d", &n);
	}while(n <= 0);
	int x = 0;
	while(n != 0){
		x += 1;
		n = n/10;
	}
	printf("So chu so la %d", x);
		
}
