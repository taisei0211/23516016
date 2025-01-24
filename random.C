#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    
    int intelligence = (rand() % 20) + 1;
    int stamina = (rand() % (20 - intelligence)) + 1;
    int charisma = 20 - stamina - intelligence;
    
    printf("記憶力:%d",intelligence);
    printf("瞬発力:%d",stamina);
    printf("魅力:%d",charisma);
    
    if (intelligence > stamina && intelligence > charisma)
       printf("クラス:魔法使い\n");
    else if (stamina > intelligence && stamina > charisma)
       printf("クラス:戦士\n");
    else if (charisma >intelligence && charisma > stamina)
       printf("クラス:盗賊\n");
    else
       printf("クラス:デュアルクラス\n");
    return 0;
}
