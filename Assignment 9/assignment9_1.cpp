#include <stdio.h>
#include <string.h>

void NhapMang(int ary[], int n){
	char s[20];
	for(int i = 0;i < n;i++){
		printf("Nhap vao chuoi thu %d", i);
		scanf("%s",s);
	}
}

int main(){
	int n;
	do{
		printf("Nhap vao so chuoi cho mang n = ");
		scanf("%d", &d);
	}while(n <= 0);
	int ary[n];
	NhapMang(ary ,n);
	
	return 0;
}
