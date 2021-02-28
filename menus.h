#ifndef __MENUS_H__
#define __MENUS_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "heap.h"
#include "gimnasio_y_protagonista.h"


/*
 * Pide un caracter por consola y repite hasta recibir un 
 * caracter solo (sin incluir los enters solos). Descarta los "GG" y los enters.
 */
char leer_letra();
/*
 *   Muestra el menu inicial del juego.
 */
void menu_inicio(juego_t* juego);
/*
 *   Muestra el menu de gimnasio.
 */
void menu_gimnasio(juego_t* juego);
/*
 *   Muestra el menu de victoria.
 */
void menu_victoria(juego_t* juego);
/*
 *   Muestra el menu de derrota.
 */
void menu_derrota(juego_t* juego);
/*
 *  Muestra un menu de combate y los detalles de este.
 */
void combate_pokemon(juego_t* juego);
/*
 *   Imprime el tipo de combate de dicho gimnasio.
 */
void tipo_de_combate_gimnasio(juego_t* juego);
/*
 *   Muestra por consola un ascii art de MAESTRO POKEMON.
 */
void eres_maestro_pokemon(juego_t* juego);






#endif /* __MENUS_H__ */