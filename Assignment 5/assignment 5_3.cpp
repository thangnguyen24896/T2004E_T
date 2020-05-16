#include <stdio.h>

int main(){
	int n;
	do{
		printf("Nhap vao so nguyen duong n = ");
		scanf("%d", &n);
	}while(n <= 0);
	int sum = 0;
	while(n > 0){
		sum += n%10;
		n = n/10;
	}
	printf("Tong cac chu so = %d", sum);
}
