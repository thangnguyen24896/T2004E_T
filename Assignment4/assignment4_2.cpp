#include <stdio.h>

int main(){
	int n;
	printf("Nhap vao so tu nhien n = ");
	scanf("%d", &n);
	
	if(n > 0){
		printf("Cac so chia het cho 3: ");
		int m;
		for(m = 0;m < n;m += 3){
			m % 3 == 0;
			printf("%d, ", m);
		}
	}else{
		printf("ERROR");
	}
}
