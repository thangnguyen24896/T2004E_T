#include <stdio.h>

int main(){
	int n;
	do{
		printf("nhap vao so phan tu cho mang: ");
		scanf("%d", &n);
	}while(n < 1);
	int ary[n];
	for(int i = 0;i < n;i++){
		printf("nhap vao gia tri thu %d: ",i);
		scanf("%d", &ary[n]);
	}
	int x;
	printf("Nhap so can tim: ");
	scanf("%d", &x);
	int i = 0;
	for(i = 0;i < n;i++){
		if(ary[i] == x){
			break;
		}
	}
	if(i >= n){
		printf("khong ton tai x trong mang");
	}else{
		printf("%d nam trong mang",x);
	}
}

