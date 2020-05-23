#include <stdio.h>

int main(){
	int n;	
	printf("Nhap vao so phan tu cho mang n = ");
	scanf("%d", &n);
	int ary[n];
	
	for(int i=0;i<n;i++){
		printf("Nhap vao phan tu thu %d: ", i);
		scanf("%d", &ary[i]);
	}
	
	int max = 0, count = 0;
	for(int i=0;i<n;i++){
		if(ary[i] > 0){
			count++;
			if(count > max) max = count;
		}else{
			count = 0;
		}
	}
	printf("So luong so duong lien tiep nhieu nhat: %d\n",max);
}
