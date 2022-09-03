#include <stdio.h>

sertao(){
  printf("sertao");
}


void p1002(){
  double area,raio;
  scanf("%lf", &raio);
  area = 3.14159 * (raio * raio);
  printf("A=%.4lf\n", area);
}

void p1005(){


  //chama as variaveis
   double a, b, media;

  //escaneia
  scanf("%lf", &a);
  scanf("%lf", &b);

  //calcula
  media = (a * 3.5 + b * 7.5) / (3.5 + 7.5);

  //imprime na tela
  printf("media = %5lf\n", media);
}

void p1006(){

  //chama as variaveis
  double a, b, c, media;

  //escaneia
  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &c);

  //calcula
  media = (a * 2 + b * 3 + c * 5) / (2 + 3 + 5);

  printf("media = %.1lf\n", media);
  

  
}

int main() {

  //retorna o void p1006
  p1006();
  
  //retorna o void p1005
  p1005();
  
  //retorna o void p1002
  p1002();

  //retorna sertao
  sertao();


  //imprime o que esta na main
  printf("\nO peso da corrente é o mesmo da enxada\n");

  int a, b, x;
  
  scanf("%d", &a);
  scanf("%d", &b);

    x = a + b;

  printf("X = %d\n", x);
   

  
  return 0;
}