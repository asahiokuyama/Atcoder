#include <stdio.h>

int main(){
    int number;
    scanf("%d\n",&number);
    int array[number];

    for (int i = 0; i < number; i++)
    {
        scanf("%d",&array[i]);
    }

    for (int i = 0; i < number; i++)
    {
        if(array[i]%4 == 0){
            printf("Even\n");
        }else if (array[i]%4 != 0&&array[i]%2 == 0)
        {
            printf("Same\n");   
        }else if (array[i]%2 != 0)
        {
            printf("Odd\n");
        }
    }

    return 0;
}