#include <stdio.h>

int main(){
	int N;
	scanf("%d",&N);

	if(N == 1){
		printf("%d\n", 0);
	}else{
		printf("%d\n", N-1);
	}

	return 0;
}