//動作したがコードテスト貫通せず。
//自力でsortしたバージョン。

#include <stdio.h>

void maxsort(int array[],int key1,int N1){
    for (int i = 0; i < N1; i++)
    {
        for (int j = 1; j < N1; j++)
        {
            if(array[j] > array[j-1]){
            key1 = array[j];
            array[j] = array[j-1];
            array[j-1] = key1;
            }
        }  
    }
    return;
}

int cal_allice_bob(int array[],int N){
    int answer;
    int alice,bob;

    for (int i = 0; i < N; i++)
    {
        if(i%2 == 0){
            alice = alice + array[i];
        }else if(i%2 != 0){
            bob = bob + array[i];
        }
    }
    answer = alice - bob;
    return answer;
}

int main(){
    int N;
    int key;
    int answer;
    scanf("%d",&N);

    int array[110];
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&array[i]);
    }

    maxsort(array,key,N);
    answer = cal_allice_bob(array,N);
    
    printf("%d\n",answer);
    return 0;
}
