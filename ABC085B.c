#include <stdio.h>

int main(){
	//変数宣言
	int number;
	int change;
	int counter = 1;//これが１からなのは、段数を数える時に0段目とは言わないから
	scanf("%d",&number);
	int circle[101];

	//枚数分、直径を入力する。
	for (int i = 0; i < number; ++i)
	{
		scanf("%d", &circle[i]);
	}

	//ここでソートする。この二重ループはよくあるので覚える。insertion sortというアルゴリズム。
	for (int i = 0; i < number; ++i)
	{
		for (int j = 1; j < number; ++j)
		{
			if(circle[j] <= circle[j-1]){
				change = circle[j];
				circle[j] = circle[j-1];
				circle[j-1] = change;
			}
		}
	}

	//同じ大きさの餅は数えられないため、大きさの違う餅だけカウントする。
	for (int i = 1; i < number; ++i)
	{
		if(circle[i] != circle[i-1]){
			counter++;
		}
	}

	printf("%d\n", counter);

	return 0;
}
