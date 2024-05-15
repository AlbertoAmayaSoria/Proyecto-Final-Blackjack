/*
Nombre:
    -Proyecto de juego Blackjack
Descripción:
    -Programa que ejecuta el juego Blackjack
Autor:
    -Amaya Soria Angel Alberto
    -Bórquez Guerrero Angel Fernando
Fecha:
    -15/Mayo/2024
*/
#include <iostream>

#include "capturaSegura.h"
#include "colores.h"

using namespace std;

int main()
{
    int ingresarJuego;

    EstablecerColor(ROJO);
    Blackjack();
    EstablecerColor(BLANCO);

//se revisa que la entrada sea correcta, jugar o no jugar
    ingresarJuego = EntrarAlJuego();

//aqui se ejecutara el juego



    return 0;
}
