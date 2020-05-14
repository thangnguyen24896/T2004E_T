#include <stdio.h>

int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	int sum = 0;
	for(int i = 1;i < n;i++){
		sum = sum * (i + 1);
	}
	printf("n! = %d", sum);

}

