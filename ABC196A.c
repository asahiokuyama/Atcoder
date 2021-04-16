#include <stdio.h>

int main(){
	int a,b,c,d;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);

	int x,y;
	if(a<=b){
		x = b;
	}else{
		x = a;
	}
	if(c<=d){
		y = c;
	}else{
		y = d;
	}

	printf("%d\n", x-y);

	return 0;
}