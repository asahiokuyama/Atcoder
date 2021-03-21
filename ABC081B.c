#include <stdio.h>

int main(){
    int count;
    int counter = 0;
    int fin = 0;
    scanf("%d",&count);

    int array[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d",&array[i]);
    }

    while(1){
        for (int i = 0; i < count; i++)
        {
            if (array[i]%2 != 0)
            {
                fin++;
                break;
            }
            array[i] = array[i]/2;
            
        }
        if(fin == 1){
            break;
        }
        counter++;
    }
    printf("%d\n",counter);
    
    return 0;
}