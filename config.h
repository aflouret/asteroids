#ifndef _CONFIG_H_
#define _CONFIG_H_

#define PI 3.14159265358979323846

#define VENTANA_ANCHO 1000
#define VENTANA_ALTO 800

#define JUEGO_FPS 100

#define NAVE_ROTACION_PASO (PI/20)
#define NAVE_POTENCIA_IMPULSO 1000
#define NAVE_POTENCIA_DECREC 0.1
#define NAVE_VELOCIDAD_DECREC 0.01

#define NAVE_X_INICIAL VENTANA_ANCHO / 2
#define NAVE_Y_INICIAL VENTANA_ALTO / 2
#define NAVE_VX_INICIAL 0
#define NAVE_VY_INICIAL 0
#define NAVE_ANGULO_INICIAL 0
#define NAVE_POTENCIA_INICIAL 0

#define ASTEROIDE_RADIO_GRANDE 32
#define ASTEROIDE_RADIO_MEDIANO 16
#define ASTEROIDE_RADIO_CHICO 8

#define DISPARO_VELOCIDAD 1000

#define VIDAS_CANT_INICIAL 2

#endif // _CONFIG_H_
