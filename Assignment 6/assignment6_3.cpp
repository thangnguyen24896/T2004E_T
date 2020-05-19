#include <stdio.h>

int main(){
	int n;
	do{
		printf("Nhap so phan tu cho mang n = ");
		scanf("%d", &n);
	}while(n < 1);
	int ary[n];
	for(int i = 0;i < n;i++){
		do{
			printf("Nhap vao gia tri thu %d: ",i);
			scanf("%d", &ary[i]);
		}while(ary[i] != ary[i]);
	}
}
// e k biet lam @@
