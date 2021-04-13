//実行速度オーバー
//考え方
//先頭に０をつけたら、という考えではなく、文字列の後ろの０を全て
//取り除いた時に回文になるようにすればよい

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){

	int N;
	bool can = true;
	scanf("%d",&N);
	char str[9];

	while(N%10 == 0){
		N = N/10;
	}
	sprintf(str,"%d",N);

	int len = 0;
	len = strlen(str);

	for (int i = 0; i < len/2; ++i)
	{
		if(str[i] != str[len-(i+1)]){
			can = false;
			break;
		}
	}

	if(can == false){
		printf("No\n");
	}else{
		printf("Yes\n");
	}

	return 0;
}