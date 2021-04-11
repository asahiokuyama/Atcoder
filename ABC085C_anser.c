#include <stdio.h>

int main(int argc, char const *argv[])
{
	int N,Y;
	scanf("%d",&N);
	scanf("%d",&Y);
	int res10000 = -1;
	int res5000 = -1;
	int res1000 = -1;

	for (int i = 0; i <= N; ++i)
	{//10000の枚数は0~N
		for (int j = 0; j+i <= N; ++j)
		{//5000の枚数は0~N-i
			int k = N-i-j;//ここがポイントで、これで1000円の枚数を決定できる
			int total = 10000*i + 5000*j + 1000*k;
			if(i+j+k == N&&total == Y){
				res10000 = i;
				res5000 = j;
				res1000 = k;
			}	
		}
	}

	printf("%d %d %d\n", res10000,res5000,res1000);
	return 0;
}