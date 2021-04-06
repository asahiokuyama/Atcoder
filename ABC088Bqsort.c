//stdlibでqsortを使ったバージョン。
//これでも貫通せず、、、


#include <stdio.h>
#include <stdlib.h>

int compareInt(const void* a,const void* b){
    int aNum = *(int*)a;
    int bNum = *(int*)b;
    return bNum -aNum;
}


int main(){
    int N;
    int array[110];
    scanf("%d",&N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&array[i]);
    }

    qsort(array,sizeof(array)/sizeof(array[0]),sizeof(int),compareInt);
    int Alice = 0;
    int Bob = 0;
    for (int i = 0; i < N; i++)
    {
        if(i%2 == 0){
            Alice += array[i];
        }else{
            Bob += array[i];
        }
    }
    printf("%d\n",Alice-Bob);
    return 0;
}
