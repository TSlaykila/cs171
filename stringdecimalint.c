#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  char intnumber[100];
  int i = 0, k = 0, y, c;
  double power;

  printf("Input a string of characters. if it is a decimal int, then it will confirm it \n");
  scanf("%s", intnumber);

  while(intnumber[i] != '\0'){
    if((intnumber[i] >= 48 && intnumber[i] <= 57) || intnumber[i] == '-'){
      k++;
    }
    i++;
  }
  
 
  if(i == k){
    printf("Yes  \n");
  } else{printf("No \n");}

  if(i == k){
    i--;
    k = 0;
    c = 0;
    if(intnumber[0] == '-'){
      k++;
      i--;
      while(intnumber[k] != '\0'){
	c += (intnumber[k] - 48) * pow(10, i);
	i--;
	k++;
      }
      y = c - 546;
      printf("-%d \n", y);
    } else{
       while(intnumber[k] != '\0'){
	c += (intnumber[k] - 48) * pow(10, i);
	i--;
	k++;
      }
      y = 546 + c;
      printf("%d \n", y);
    }
    
  }
}
