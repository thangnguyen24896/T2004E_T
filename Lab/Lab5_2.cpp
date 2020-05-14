#include <stdio.h>

int main(){
	int n;
	printf("Nhap vao so tu nhien n ");
	scanf("%d", &n);
	float n2 = 0;
	for(float i = 1;i <= n;i++){
		n2 += 1/i;
	}
	printf("Tong = %0.3f", n2);
	
}

