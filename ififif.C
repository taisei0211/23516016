#include <stdio.h>

int main(void)
{
   int Asizawa,Yaman,Kouji;
   
   Asizawa = 30; // 芦澤の戦闘力
   Yaman = 50; //　ヤーマンの戦闘力
   Kouji = 20; //  皇治の戦闘力
   
   // 変数と定数の比較
   if (Asizawa == 30)
      printf("芦澤の戦闘力は２０です\n");
   if (Yaman != 30)
      printf("ヤーマンの戦闘力は３０ではありません\n");
   if (Yaman >= 20) 
      printf("ヤーマンの戦闘力は２０以上です\n");
   if (Kouji < 20)
      printf("皇治の戦闘力は２０未満です\n");
   //　変数と変数の比較
   if (Asizawa > Kouji)
      printf("芦澤は皇治より戦闘力が高いです\n");
   if (Yaman > Asizawa)
      printf("ヤーマンは芦澤より戦闘力が高いです\n");
   return 0;
}
