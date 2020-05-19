#include <stdio.h>

int main(){
	int n;
	printf("Nhap vao so phan tu cho mang n = ");
	scanf("%d", &n);
	int ary[n], x;
	for(int i = 0;i < n;i++){
		printf("Nhap vao gia tri thu %d: ",i);
		scanf("%d", &ary[i]);
	}
	for(int i = 0;i < n;i++){
		if(ary[i] % 2 != 0){
			x = ary[i];
			
		}
	}
	printf("So le cuoi cung cua mang la: %d", x);
}
