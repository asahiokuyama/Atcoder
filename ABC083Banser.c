#include <stdio.h>

int findSum0fDigits(int n){
    int sum = 0;
    while (n > 0)
    {
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int main(){
    int N,A,B;
    scanf("%d %d %d",&N,&A,&B);
    int total = 0;
    for (int i = 1; i <= N; i++)
    {
        int sum = findSum0fDigits(i);
        if(sum >= A&&sum <= B){
            total += i;
        }
    }
    printf("%d\n",total);

    return 0;
}