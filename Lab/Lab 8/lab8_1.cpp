#include <stdio.h>
#include <stdlib.h>

int main(){
	int *p;
	int n;
	do{
		printf("Nhap vao so phan tu cho mang n = ");
		scanf("%d", &n);
	}while(n < 0);
	p = (int *)malloc(n * sizeof(int));
	
	for(int i = 0;i<n;i++){
		printf("Nhap vao phan tu thu %d: ",i);
		scanf("%3d", (p + i));
	}
	int i, j, temp;
	for(int i = 0;i < n -1;i++){
		for(int j = 0;j < n - i - 1;j++){
			if(*(p + j) > *(p + j+ 1)){
				int temp = *(p + j);
				*(p + j) = *(p + j+1);
				*(p + j+1) = temp;
			}
		}
	}
	for(int temp = 0;temp < n;temp++){
		printf("%3d", *(p+temp));
	}
	printf("\n");
	
	p = (int *)realloc(p,n*2*sizeof(int));
}
