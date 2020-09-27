#include <stdio.h> 

int main(void) 

{ 
  float score; 
  printf("Input score: ") ; 
  scanf("%f",&score); 
  int x = (int) score;
  switch( x /10)
  {
    case 10:
      if(score <= 100)
        printf("Your score : A");
        break;
    case 9:
      printf("Your score : A");
      break;
    case 8:
      printf("Your score : A");
      break;
    case 7:
      if((score >=75)&&(score <=79))
        printf("Your score : B+");
      if((score >=70)&&(score <=74))
        printf("Your score : B");
      break;
    case 6:
      if((score >=65)&&(score <=69))
        printf("Your score : C+");
      if((score >=60)&&(score <=64))
        printf("Your score : C");
      break;
    case 5:
      if((score >=55)&&(score <=59))
        printf("Your score : D+");
      if((score >=50)&&(score <=54))
        printf("Your score : D");
      break;
    case 4:
        printf("Your score : F");
        break;
    case 3:
        printf("Your score : F");
        break;  
    case 2:
        printf("Your score : F");
        break;   
    case 1:
        printf("Your score : F");
        break;
    case 0:
        if(score >=0)
        printf("Your score : F");
        break;      
  }

  return 0; 

} 