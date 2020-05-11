#include <stdio.h>

int main(){
	int x;
	printf("Nhap vao so nguyen duong \n");
	scanf("%d",&x);
		
	if(999< x && x < 10000){
		printf("%d la so nguyen duong co 4 chu so \n",x);	
		int a,b,c,d,y;
		d = x%10;
		c = (x/10)%10;
		b = (x/100)%10;
		a = (x/1000)%10;
		y = d*1000 + c*100 + b*10 + a;
		printf("%d la so nghich dao cua %d",y,x);

	}else{
		printf("day khong phai so nguyen duong co 4 chu so");
	}
}
// em chi biet lam nhu nay @@
