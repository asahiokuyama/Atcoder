/////途中。出力に問題があり。


#include <stdio.h>

int main()
{
	int H,W;
	scanf("%d",&H);
	scanf("%d",&W);
	char array[256];
	int count = 0;

	for (int i = 0; i < H; ++i)
	{
		for (int j = 0; j < W; ++j)
		{
			count++;
			// printf("%d", i*j);
			scanf("%c\n",&array[count]);
		}
		printf("\n");
	}

	count = 0;

	for (int i = 0; i < H; ++i)
	{
		for (int j = 0; j < W; ++j)
		{
			count++;
			printf("%c", array[count]);
		}
		printf("\n");
	}

	
	printf("%d\n", count);
	return 0;
}