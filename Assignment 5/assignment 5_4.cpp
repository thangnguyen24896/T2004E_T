// Tim uoc chung lon nhat
// cach lam: tru 2 so den khi bang nhau


#include <stdio.h>

int main(){
	int a,b,x;
	printf("Nhap vao 2 so a,b \n");
	do{
		printf("Nhap vao so thu nhat a = ");
		scanf("%d", &a);
		printf("Nhap vao so thu hai b = ");
		scanf("%d", &b);
	}while(a < 0&&b < 0 &&printf("K co UCLN \n"));
	if(a == 0&&b != 0){
		printf("UCLN = %d", a);
	}else if(a != 0&&b == 0){
		printf("UCLN = %d", b);
	}else{
		while(a != b){
			if(a > b){
				a = a - b;
			}else{
				b = b - a;
			}
		}
		printf("UCLN = %d", a);
	}
}

