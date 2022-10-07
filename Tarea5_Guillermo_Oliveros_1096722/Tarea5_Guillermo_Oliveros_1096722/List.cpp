#include "List.h"
#include"Carta.h"
#include <String>
#include <iostream>


Baraja::Baraja()
{
}

void Baraja::AgregarAlInicio(std::string numero, std::string valor)
{
	Carta* nuevo = new Carta();
	nuevo->numero = numero;
	nuevo->valor = valor;

	if (header == nullptr) {
		nuevo->next = nullptr;
		header = nuevo;
	}
	else {
		nuevo->next = header;
		header = nuevo;
	}
}

void Baraja::AgregarAlFinal(std::string numero, std::string valor)
{
	Carta* nuevo = new Carta();
	nuevo->numero = numero;
	nuevo->valor = valor;

	if (header == nullptr) {
		nuevo->next = nullptr;
		header = nuevo;
	}
	else {
		Carta* auxiliar = header;
		while (auxiliar->next) {
			auxiliar = auxiliar->next;
		}
		auxiliar->next = nuevo;
	}
}

void Baraja::Clear()
{
	header = new Carta();
}

int Baraja::Count()
{
	Carta* auxiliar = header;
	int n = 0;
	while (auxiliar) {
		n++;
		Carta* x = auxiliar->next;
		auxiliar = x;
	}
	return n;
}

void Baraja::getIndex(int number) {
	Carta* auxiliar = header;
	for (size_t i = 0; i < number; i++)
	{
		auxiliar = auxiliar->next;
	}

	if (auxiliar != nullptr) {
		return temp;

	}
	else {
		Carta* temp2 = new Carta();
		temp2->numero = "";
		temp2->color = "";
		return &temp2;
	}
}
 void Baraja::getFirstItem() {
	Carta* auxiliar = header;
	Carta* auxiliar = header->next;
	header = auxiliar;
	return &auxiliar;
}


