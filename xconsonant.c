#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
  char word[100];
  int counter, i;
  printf("Insert an all lower_case word and switch every second consonat with and X ");
  scanf("%s", word);

  while(word[i] != '\0'){
    if((word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u') && (word[i] <= 122 && word[i] >= 97)){
      counter++;
      if(counter % 2 == 0){
	word[i] = 'X'; 
      }
    }
    i++;
  }
  i = 0;
  while(word[i] != '\0'){
    printf("%c", word[i]);
    i++;
  }
  printf("\n"); 
}
