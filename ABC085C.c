//for文を三重ループにした最も簡単な回答だが、2000^3回最大で調べるので、実行制限時間を上回る。

#include <stdio.h>

int main(){
	int N,Y;
	scanf("%d",&N);
	scanf("%d",&Y);
	int getkey = 0;

	for (int i = 0; i <= N; ++i)
	{
		for (int j = 0; j <= N; ++j)
		{
			for (int k = 0; k <= N; ++k)
			{
				int total = 10000*i + 5000*j + 1000*k;
				if(i+j+k == N&&total == Y){
					printf("%d %d %d\n", i,j,k);
					getkey++;
					break;
				}
			}
			if(getkey != 0){
				break;
			}
		}
		if (getkey != 0)
		{
			break;
		}
	}

	if(getkey == 0){
		printf("%d %d %d\n",-1,-1,-1);
	}
	return 0;
}