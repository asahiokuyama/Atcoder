#include <stdio.h>

int main(){
	int number;
	int change;
	int counter = 1;
	scanf("%d",&number);
	int circle[101];

	for (int i = 0; i < number; ++i)
	{
		scanf("%d", &circle[i]);
	}

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

	for (int i = 1; i < number; ++i)
	{
		if(circle[i] != circle[i-1]){
			counter++;
		}
	}

	printf("%d\n", counter);

	return 0;
}