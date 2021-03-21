#include <stdio.h>
#include <string.h>
#include <strings.h>

int main(){
    char s[] = " , , ";
    int count = 0;
    scanf("%s %s %s",&s[0],&s[1],&s[2]);
    if(s[0] == '1'){
        count++;
    }
    if (s[1] == '1')
    {
        count++;
    }
    if (s[2] == '1')
    {
      count++;
    }
    printf("%d\n",count);
    return 0;
}