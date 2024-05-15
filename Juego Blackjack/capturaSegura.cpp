#include <iostream>
#include <limits>

#include "capturaSegura.h"

using namespace std;

int RespuestaSegura()
{
    int dato;
    cin >> dato;

    while(cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<int>::max(), '\n');
        cout << "ERROR, no es un n\243mero" << endl;
        cin >> dato;
    }

    return dato;
}

int EntrarAlJuego()
{
    int entrar;
    cout << "\250Deseas jugar Blackjack\77" << endl;
    cout << "Ingresa  1 para jugar o 2 para abandonar" << endl;
    do{
        entrar = RespuestaSegura();
        if (entrar !=1 && entrar != 2)
        {
            cout << "Ingresa 1 o 2" << endl;
        }
    }while(entrar !=1 && entrar != 2);
    return entrar;
}

void Blackjack()
{
    cout << "$$$$$$$\134  $$\134                     $$\134                                     $$\134       " << endl;
    cout << "$$  __$$\134 $$ |                    $$ |                                    $$ |      " << endl;
    cout << "$$ |  $$ |$$ | $$$$$$\134   $$$$$$$\134 $$ |  $$\134       $$\134  $$$$$$\134   $$$$$$$\134 $$ |  $$\134 " << endl;
    cout << "$$$$$$$\134 |$$ | \134____$$\134 $$  _____|$$ | $$  |      \134__| \134____$$\134 $$  _____|$$ | $$  |" << endl;
    cout << "$$  __$$\134 $$ | $$$$$$$ |$$ /      $$$$$$  /       $$\134  $$$$$$$ |$$ /      $$$$$$  / " << endl;
    cout << "$$ |  $$ |$$ |$$  __$$ |$$ |      $$  _$$<        $$ |$$  __$$ |$$ |      $$  _$$<  " << endl;
    cout << "$$$$$$$  |$$ |\134$$$$$$$ |\134$$$$$$$\134 $$ | \134$$\134       $$ |\134$$$$$$$ |\134$$$$$$$\134 $$ | \134$$\134 " << endl;
    cout << "\134_______/ \134__| \134_______| \134_______|\134__|  \134__|      $$ | \134_______| \134_______|\134__|  \134__|" << endl;
    cout << "                                            $$\   $$ |                              " << endl;
    cout << "                                            \$$$$$$  |                              " << endl;
    cout << "                                             \______/                               " << endl;
}
