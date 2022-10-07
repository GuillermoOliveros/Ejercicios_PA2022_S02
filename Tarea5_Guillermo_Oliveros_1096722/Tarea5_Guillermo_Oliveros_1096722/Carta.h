#pragma once
#include <string>


struct Carta
{
public:
		// Info a utilizar: 
		std::string numero;
		std::string valor;


		/// Apuntador hacia siguiente Nodo
		Carta* next;
	
};

