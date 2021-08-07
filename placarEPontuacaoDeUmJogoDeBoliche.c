#include <stdio.h>

int main(int argc, char *argv[]){
  int jogada1 = 0;
  int jogada2 = 0;
  int bonus = 0;
  int rodadas = 10;
  int soma = 0;

  for(int i = 1; i <= rodadas; i++){
    jogada1 = 0;
    jogada2 = 0;
    scanf("%d", &jogada1);


    if(bonus > 0){
      soma += jogada1;
      if(bonus > 2){
          soma += jogada1;
          bonus --;
      }
       bonus --;
    }

    if (jogada1 == 10){  //strike
      printf("X ");
      if(i <10){
       printf("_ | "); 
       bonus += 2;
      }
      if(i == 10){
        rodadas += 2;
      }
    }
    else if(i > 10){
      printf("%d ", jogada1);
    }
    else{
      scanf("%d", &jogada2); 
      if(bonus > 0){
        soma += jogada2;
        bonus--;
      } 
      if(jogada1 + jogada2 == 10){  //spare
      printf("%d / ", jogada1);
      if(i < 10){
       printf("| ");
        bonus +=1;
      }
      if(i == 10){
        rodadas += 1;
      }
      }
      else if(i == 10 && jogada1 + jogada2 != 10){
        printf("%d ", jogada1);
        printf("%d ", jogada2);
      }
      else{
        printf("%d ", jogada1);
        printf("%d | ", jogada2);
      }
    }

    soma += jogada1 + jogada2;
  }

  printf("\n%d", soma);

}