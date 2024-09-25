#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  double a,b,i,area;
  int n;
  a = 100; //changing base
  b = 30; //height
  i = 0; //cycles
  area = 0;
  printf("Input number of triangles desired for the nautilus \n");
  scanf("%d",&n);

  while(i < n){
    i++; //loop cycle
    area +=  0.5*a*b;
    a = sqrt(a*a + b*b);
  }

  printf(" The total area is %f \n" , area);
}
