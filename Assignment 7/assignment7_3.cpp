#include <stdio.h>

int main(){
	int ary[4][3];
	
	for(int i = 0;i < 4;i++){
		for(int j = 0;j < 3;j++){
			printf("ary[%d][%d]: ", i, j);
			scanf("%d", &ary[i][j]);
		}
	}
	printf("Ma tran nhap vao la: \n");
	for(int i = 0;i < 4;i++){
		for(int j = 0;j < 3;j++){
		printf("%2d", ary[i][j]);	
		}
		printf("\n");
	}
	int arr[3][4];
	for(int i = 0;i < 3;i++){
		for(int j = 0;j < 4;j++){
			arr[i][j] = ary[i][j];
		}
	}
	printf("Ma tran tim dc la: \n");
	for(int i = 0;i < 3;i++){
		for(int j = 0;j < 4;j++){
			printf("%2d",arr[i][j]);
		}
		printf("\n");
	}
}
