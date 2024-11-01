#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
  char leftword[100], rightword[100], result[100];
  int i, k , t;

  printf("Input two words and get a third word from half of the first one and half of the second one ");

  scanf("%s", leftword);
  scanf("%s", rightword);

  i = 0;
  while(leftword[i] != '\0'){
    i++;
  }

  k = 0;
  while(k < floor((i / 2))){
   result[k] = leftword[k];
   k++;
  }

  i = 0;
  while(rightword[i] != '\0'){
    i++;
  }
 
  floor(t = (i / 2));
  
  while(t <= i){
    result[k] = rightword[t];
    t++;
    k++;
  }
  
  result[k] = '\0';
  i = 0;
  printf("\n");
  while(result[i] != '\0'){
    printf("%c", result[i]);
    i++;
      }

  printf("\n");
}
