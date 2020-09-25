#include <stdio.h> 

int main(void) 

{ 

  int score; 
  printf("Input score: ") ; 

  scanf("%d",&score); 
  switch(score/10)
  {
    case 10:
      printf("Your score : A",score);
      break;
    case 9:
      printf("Your score : A",score);
      break;
    case 8:
      printf("Your score : A",score);
      break;
    case 7:
      if((score >=75)&&(score <=79))
        printf("Your score : B+", score);
      if((score >=70)&&(score <=74))
        printf("Your score : B", score);
      break;
    case 6:
      if((score >=65)&&(score <=69))
        printf("Your score : C+", score);
      if((score >=60)&&(score <=64))
        printf("Your score : C", score);
      break;
    case 5:
      if((score >=55)&&(score <=59))
        printf("Your score : D+", score);
      if((score >=50)&&(score <=54))
        printf("Your score : D", score);
      break;
    default: 
      printf("Your score : F"); 
      break; 
  }

  return 0; 

} 