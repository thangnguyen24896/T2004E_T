#include <stdio.h>

int main(){
	int n = 0;
	for(int i = 1;i <= 200;i++){
		if(i%2 != 0){
			n += i;
		}
	}
	printf("Tong = %d", n);
}
