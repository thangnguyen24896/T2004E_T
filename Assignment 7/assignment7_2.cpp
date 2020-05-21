#include <stdio.h>

int main(){
	int ary[4][3], arr[4][3];
	
	for(int i = 0;i < 4;i++){
		for(int j = 0;j < 3;j++){
			printf("ary[%d][%d]: ", i, j);
			scanf("%d", &ary[i][j]);
		}
	}
	for(int i = 0;i < 4;i++){
		for(int j = 0;j < 3;j++){
			printf("ary[%d][%d]: ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	printf("Ma tran thu nhat la : \n");
	for(int i = 0;i < 4;i++){
		for(int j = 0;j < 3;j++){
			printf("%2d", ary[i][j]);
		}
		printf("\n");
	}
	printf("Ma tran thu hai la: \n");
	for(int i = 0;i < 4;i++){
		for(int j = 0;j < 3;j++){
			printf("%2d", arr[i][j]);
		}
		printf("\n");
	}
	int sum[4][3];
	printf("Tong 2 ma tran la: \n");
	for(int i = 0;i < 4;i++){
		for(int j = 0;j < 3;j++){
			sum[i][j] = ary[i][j] + arr[i][j];
		}
	}
	for(int i = 0;i < 4;i++){
		for(int j = 0;j < 3;j++){
			printf("%2d", sum[i][j]);
		}
		printf("\n");
	}
}
