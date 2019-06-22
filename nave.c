#include "nave.h"

struct nave {
    float x;
    float y;
    float vx;
    float vy;
    float angulo;
    float potencia;
};

nave_t *nave_crear() {
    nave_t *n = malloc(sizeof(nave_t));
    if(n == NULL)
        return NULL;

    n->x = NAVE_X_INICIAL;
    n->y = NAVE_Y_INICIAL;

    n->vx = NAVE_VX_INICIAL;
    n->vy = NAVE_VY_INICIAL;

    n->angulo = NAVE_ANGULO_INICIAL;
    n->potencia = NAVE_POTENCIA_INICIAL;

    return n;
}

void nave_destruir(nave_t *n) {
    free(n);
}

float nave_get_x(const nave_t *n) {
    return n->x;
}
float nave_get_y(const nave_t *n) {
    return n->y;
}

float nave_get_angulo(const nave_t *n) {
    return n->angulo;
}

void nave_incrementar_angulo(nave_t *n, float angulo) {
    n->angulo += angulo;
}

void nave_impulso(nave_t *n) {
    n->potencia += NAVE_POTENCIA_IMPULSO;
}

void nave_mover(nave_t *n, float dt) {

    n->vx += n->potencia * cos(n->angulo) * dt;
    n->vy -= n->potencia * sin(n->angulo) * dt;

    n->vx -= n->vx * NAVE_VELOCIDAD_DECREC;
    n->vy -= n->vy * NAVE_VELOCIDAD_DECREC;

    n->x += n->vx * dt;
    n->y += n->vy * dt;
    graficador_ajustar_variables(&(n->x), &(n->y));

    n->potencia *= (1 - NAVE_POTENCIA_DECREC);
}

bool nave_dibujar(const nave_t *n) {
    return graficador_dibujar(NAVE_SPRITE, ESCALA_NAVE, n->x, n->y, n->angulo) && graficador_dibujar(CHORRO_SPRITE, ESCALA_NAVE, n->x, n->y, n->angulo);
}
