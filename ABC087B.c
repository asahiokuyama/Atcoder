//あなたは、500円玉を A 枚、100 円玉を B 枚、50 円玉を C 枚持っています。
//これらの硬貨の中から何枚かを選び、合計金額をちょうど X円にする方法は何通りありますか。
#include <stdio.h>

int main(){
    int A,B,C,X;
    int res = 0;
    scanf("%d %d %d %d",&A,&B,&C,&X);
    for (int i = 0; i <= A; i++)
    {
        for (int j = 0; j <= B; j++)
        {
            for (int k = 0; k <= C; k++)
            {
                int sum = 500*i + 100*j + 50*k;
                if(sum == X){
                    res++;
                }
            }
            
        }
        
    }
    printf("%d\n",res);
    return 0;
}