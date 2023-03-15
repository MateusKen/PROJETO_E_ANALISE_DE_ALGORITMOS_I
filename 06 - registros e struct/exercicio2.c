//NOME: MATEUS KENZO IOCHIMOTO TIA: 32216289
/*
2. Faça uma função que converta coordenadas polares para cartesianas:
• Coordenada polar é composto por raio (r) e ângulo (theta) em radianos;
• Coordenada cartesiana composto por x e y.
• Sabe-se que x = r ∗ cos θ e y = r ∗ sin θ
*/
#include <stdio.h>

typedef struct {
float r;
float θ;
} polar;

void convertePolar(polar *coord){
  (*coord).r = (*coord).r * cos((*coord).θ);
  (*coord).θ = (*coord).r * sin((*coord).θ);
}

int main(void) {
  polar coord;

  coord.r = 4;
  coord.θ = 15;

  convertePolar(&coord); // converte as coordenadas polares para cartesianas

  printf("(%f,%f)", coord.r, coord.θ); // printa essas coordenadas ja convertidas
}