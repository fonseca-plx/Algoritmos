#include <stdlib.h>
#include "ponto.h"

#define PI 3.14159

// TAD Circulo (interface)

struct circulo {
    Ponto *p;
    float r;
};

typedef struct circulo Circulo;

// Função cria circulo
Circulo *circ_cria(float x, float y, float r) {
    Circulo *c = (Circulo *)malloc(sizeof(Circulo));
    if (c == NULL) {
        printf("Memória insuficiente!\n");
        exit(1);
    }
    c->p = pto_cria(x, y);
    c->r = r;
    return c;
}

// Função libera memória
void circ_libera(Circulo *c) {
    pto_libera(c->p);
    free(c);
}

// Função calcular area do circulo
float circ_area(Circulo *c) {
    return PI*(c->r)*(c->r);
}

// Função verificar se um ponto está dentro do círculo
int circ_interior(Circulo *c, Ponto *p) {
    float distancia = pto_distancia(c->p, p);
    return (distancia < c->r);
}
