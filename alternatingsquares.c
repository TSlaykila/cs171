#include "FPToolkit.c"

int main(){
  int swidth = 800, sheight = 800;
  G_init_graphics(swidth, sheight);
  G_rgb(0.7, 0.4, 0.2);
  G_clear();

  int square_size = 20;
  int x_location = 0, y_location = 0;
  int i = 2;
  G_rgb(0.2, 0.1, 0.8);
  while(y_location < sheight){
    if((i % 2) == 0){
      x_location = 0;} else{x_location = 20;} 
  while(x_location < swidth){
    G_fill_rectangle(x_location, y_location, square_size, square_size);
    x_location += 40;
    
  }
  i++;
  y_location +=20;
  }
  G_wait_key();
}
