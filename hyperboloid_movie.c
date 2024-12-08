#include "FPToolkit.c"

int main (){
  G_init_graphics(800,800);
  G_rgb(0,0,0);
  int i = 0;
  double x = 150, y = 600, degree = 0, radius = 50, A[40], B[40], C[40], D[40];
 

  int k = 0, j = 0, l;
  while(k < 40){
   G_rgb(1.0,1.0,1.0);
   G_clear();
   G_rgb(0,0,0);

    //UPPER ELIPSE
   x = 150, y = 600, degree = 0;
   i = 0;
   while(i < 40){
     G_fill_circle(x,y,3);
     A[i] = x; B[i] = y;
     degree = degree + (M_PI / 20);
     y = 600 + sin(degree) * radius;
  if(i >= 20){
    x = x - 22;
  } else{ x = x + 22;  }
  i++;
  }
   //LOWER ELIPSE
  i = 0;
  x = 150, y = 200, degree = 0;
  while(i < 40){
  G_fill_circle(x,y,3);
  C[i] = x; D[i] = y;
  degree = degree + (M_PI / 20);
  y = 200 + sin(degree) * radius;
  if(i >= 20){
    x = x - 22;
  } else{ x = x + 22;  }
  i++;
  }

  // LINES
  i = 0;
  while(i < 40 - k){
  G_line(A[i], B[i], C[i + k], D[i + k]);
  i++;
  }
  j = 0;
  l = i;
  while(i < 40){
    G_line(A[i], B[i], C[j], D[j]);
    j++;
    i++;
  }
  G_wait_key();
  k++;
  if(k == 40){k = 0;}
  }
  

}
