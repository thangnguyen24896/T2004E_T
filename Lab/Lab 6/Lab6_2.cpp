#include <stdio.h>

int main(){
	int n;
	printf("Nhap so phan tu cho mang: \n");
	scanf("%d", &n);
	int ary[n], sum = 0, count = 0;
	for(int i = 0;i < n;i++){
		printf("Nhap vao gia tri thu %d: ",i);
		scanf("%d", &ary[i]);
	}
	for(int i = 0;i < n;i++){
		if(ary[i]%2 != 0 && i%2 == 0){
			sum += ary[i];
			count++;        // se dem co bao nhieu lan trong vong lap
		}
	}
	printf("Trung binh cac so le: %f",(float)sum/count);
	printf("So lan lap %d",count);
}
