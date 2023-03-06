#include <stdio.h>
#define PI 3.14
/*5. Escreva uma função que recebe um ângulo em graus e devolva o cosseno e seno desse
ângulo. Dica: caso necessite, utilize as funções e constante abaixo, lembre-se que o parâmetro informado para função sin e cos é um ângulo em radianos e que 180º = PI radianos
#define PI 3.14
float cos (float x);
float sin (float x);
*/

void calculaSenCos (int angulo, float *senx, float *cosx) {
  float rad = angulo/180*PI;
  *senx = sin(rad);
  *cosx = cos(rad);
}

void main(){
  int angulo = 180;
  float senx, cosx;
  calculaSenCos(angulo, &senx, &cosx);
  printf("senx = %f, cosx = %f", senx, cosx);
}
