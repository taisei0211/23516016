#include <stdio.h>

int main()
{
    int k,l;
    printf("あなたの数学のテストの点数は何点ですか");
    scanf("%d",&k);
    printf("あなたの国語の点数は何点ですか");
    scanf("%d",&l);
    
    if (k+l  >=200)
    {
        printf("あなたは神です。");
    }
    else if (k+l >=100)
    {
        printf("普通です");
    }
    
    else
    {
        printf("bakaです");
    }
    
    return 0;
}
