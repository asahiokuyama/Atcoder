#include <stdio.h>

int main(){
    unsigned int a,b;
    scanf("%u %u",&a,&b);

    if (a*b%2 == 0) 
    {
        printf("Even\n");
    }else{
        printf("Odd\n");
    }
    return 0;
}