#include <stdlib.h>
#include <math.h>

// TAD: Ponto (interface)

struct ponto {
    float x;
    float y;
};

typedef struct ponto Ponto;

// Função cria ponto
Ponto *pto_cria(float x, float y) {
    Ponto *p = (Ponto *)malloc(sizeof(Ponto));
    if (p == NULL) {
        printf("Memória insuficiente!\n");
        exit(1);
    }
    p->x = x;
    p->y = y;
    return p;
}

// Função libera memória
void pto_libera(Ponto *p) {
    free(p);
}

// Função acessa (get)
void pto_acessa(Ponto *p, float *x, float *y) {
    *x = p->x;
    *y = p->y;
}

// Função atribui (set)
void pto_atribui(Ponto *p, float x, float y) {
    p->x = x;
    p->y = y;
}

// Função distancia entre dois pontos
float pto_distancia(Ponto *p1, Ponto *p2) {
    float dx = p2->x - p1->x;
    float dy = p2->y - p1->y;
    return sqrt(dx*dx + dy*dy);
}