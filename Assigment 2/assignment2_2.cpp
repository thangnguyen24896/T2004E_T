#include <stdio.h>

int main(){
	int a,b,c;
	printf("Nhap vao 3 so: \n");
	printf("Nhap vao so thu nhat: \n");
	scanf("%d",&a);
	printf("Nhap vao so thu hai: \n");
	scanf("%d",&b);
	printf("Nhap vao so thu ba: \n");
	scanf("%d",&c);
	if(a<b&&a<c){
		printf("%d la so nho nhat",a);
	}else if(b<a&&b<c){
		printf("%d la so nho nhat",b);
	}else{
		printf("%d la so nho nhat",c);
	}
}
