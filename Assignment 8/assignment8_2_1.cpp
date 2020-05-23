#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, *p;
	printf("Nhap n = ");
	scanf("%d", &n);
	p = (int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		printf("Nhap pt thu %d: ",i);
		scanf("%d", p+i);
	}
	int max = 0,count = 0;
	for(int i=0;i<n;i++){
		if(*(p+i) > 0){
			count+=*(p+i);
			if(count > max) max = count;
		}else{
			count = 0;
		}
	}
	printf("So luong do duong lien tiep lon nhat: %d",max);
}
