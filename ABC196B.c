#include <stdio.h>
#include <string.h>

int main(){
	char X[200];
	scanf("%s",X);

	char *dot = strchr(X, '.');
	if(dot){
		*dot = '\0';
	}

	printf("%s\n", X);

	return 0;
}

//実行時エラー