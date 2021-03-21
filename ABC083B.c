//自PCでは動作OKだがコードテストを通らない
#include <stdio.h>

int main(){
    int max,a,b;
    int sum;
    scanf("%d %d %d",&max,&a,&b);

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                for (int r = 0; r < 10; r++)
                {
                    for (int s = 0; s < 10; s++)
                    {
                        if((i+j+k+r+s)>=a && (i+j+k+r+s)<=b){
                          if(i*10000+j*1000+k*100+r*10+s <= max){
                             sum = sum + i*10000+j*1000+k*100+r*10+s;
                          }
                        }
                    }
                    
                }
                
            }
            
        }
        
    }
    printf("%d\n",sum);
    return 0;
}