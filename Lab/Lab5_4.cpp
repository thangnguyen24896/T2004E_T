// B1: Yeu cau nhap so n can ktra
// B2: duyet vong lap trong khoang tu 2 den n-1, chi can chia het it nhat cho 1 so thi sai
// B3: tao ra bien test = 1 gia su n la mot so nguyen to

#include <stdio.h>

int main(){
	int num;
	printf("Nhap vao 1 so ");  
	scanf("%d", &num);             
	
	int i, test = 1;
	for(i = 2;i <= num - 1;i++){
		if(num % i == 0){
			test = 0;
		}
	}
	if(test == 1){
		printf("%d la so nguyen to", num);
	}else if(test == 0){
		printf("%d khong phai so nguyen to", num);
	}
}

