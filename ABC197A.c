#include <stdio.h>
#include <string.h>

int main(){
	char str[3];
	for (int i = 0; i < 3; ++i)
	{
		scanf("%s",&str[i]);
	}

	char temp2to1 = str[1];
	char temp3to2 = str[2];
	char temp1to3 = str[0];
	str[0] = temp2to1;
	str[1] = temp3to2;
	str[2] = temp1to3;
	

	printf("%s\n", str);
	return 0;


}