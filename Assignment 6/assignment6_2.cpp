#include <stdio.h>

int main(){
	int n;
	printf("Nhap vao so phan tu cua mang n = ");
	scanf("%d", &n);
	int ary[n];
	for(int i = 0;i < n;i++){
		printf("Nhap vao phan tu thu %d: ",i);
		scanf("%d", &ary[i]);
	}
	int amin = ary[0];
	for(int i = 0;i < n;i++){
		if(ary[i] > 0 && amin > ary[i]){
			amin = ary[i];
		}
	}
	printf("So duong nho nhat la: %d", amin);
}
