#pragma once
#include <iostream>
#include "List.h"
using namespace std;

using namespace System;



void IniciarJuego (string baraja, string grupoInicial, string GrupoPila) {
    cout << "Juego :" << endl;
    cout << "Baraja:" << baraja << endl;
    cout << "Pila 1: " << grupoInicial << endl;
    cout << "Pila 2: " << GrupoPila << endl;

}


void FuncionamientoBaraja() {
    Boolean agregar = true;
    Baraja lInicio = Baraja();
    Baraja lFinal = Baraja();

    for (size_t i = 0; i < 5; i++)
    {
        string numero = "0";
        string simbolo = "";
        cout << "Cual es el numero:" << endl;
        cin >> numero;
        cout << "Cual es el simbolo:" << endl;
        cin >> simbolo;
        lInicio.AgregarAlInicio(simbolo, numero);
        lFinal.AgregarAlFinal(simbolo, numero);

    }


    