#pragma once
#define ORDENAMIENTO_H
#include <fstream>
#include <sstream>
#include "Pokemon.h"
#include "Leer.h"


class ordenamiento 
{
struct Node
{
	Pokemon data;
	Node* next;
};

private:

	Node* Inicio = nullptr;

public:

	// --------------- Shell Sort -----------------------

	void swap(Pokemon* antes, Pokemon* despues)
	{
		Pokemon aux = *antes;
		*antes = *despues;
		*despues = aux;
	}
	Pokemon* ShellSort(Pokemon data[], int mayor, int menor)
	{
		int grupo = mayor / 2;
		int indice = 0;

		while (grupo > 0 && grupo < mayor)
		{
			int suma = grupo;
			if (suma == 0)
			{
				suma = 1;
			}

			for (int j = 0; j < mayor; j = j + grupo)
			{
				if (suma < mayor)
				{
					if (data[j].NumeroPoke > data[suma].NumeroPoke)
					{
						swap(&data[j], &data[suma]);
					}
					suma = suma + grupo;
				}

			}
			grupo = grupo / 2;
		}
		return data;
	}

	// ---------------QuickSort -------------------------

	Pokemon* InicioQuickSort(Pokemon data[], int menor, int mayor)
	{
		QuickSort(data, menor, mayor);
		return data;
	}

	

	int QuickSortClasificacion(Pokemon data[], int mayor, int menor)
	{

		std::string pivote = data[mayor].NombrePoke;

		int i = (menor - 1);  

		for (int j = menor; j <= mayor; j++)
		{
			
			if (data[j].NombrePoke < pivote)
			{
				i++;    // increment index of smaller element
				swap(&data[i], &data[j]);
			}
		}

		swap(&data[i + 1], &data[mayor]);
		return (i + 1);
	}

	void QuickSort(Pokemon data[], int menor, int mayor)
	{
		if (menor < mayor)
		{
			int pi = (data, mayor, menor);

			QuickSort(data, menor, pi - 1);
			QuickSort(data, pi + 1, mayor);
		}
	}




	// ------------- Selection Sort -----------------------------------

	Pokemon* SelectionSort(Pokemon data[], int mayor, int menor)
	{
		int n = mayor;

		for (int i = 0; i < mayor; i++)
		{
			int pivote = data[i].GeneracionPoke;
			int Aux = data[i].NumeroPoke;
			int valorinicial = 0;

			for (int j = (i + 1); j <= n - 1; j++)
			{
				if (data[j].GeneracionPoke < pivote)
				{
					valorinicial = j;
					pivote = data[j].GeneracionPoke;
				}
				else if (data[j].GeneracionPoke == pivote)
				{
					if (data[j].NumeroPoke < Aux)
					{
						valorinicial = j;
						Aux = data[j].NumeroPoke;
					}
				}
				if (j == n - 1 && valorinicial != 0)
				{
					swap(&data[i], &data[valorinicial]);
				}
			}
		}
		return data;
	}








	int contador()
	{
		int conteo = 0;
		Node* Cantidad = Inicio;
		while (Cantidad) {
			conteo++;
			Cantidad = Cantidad->next;
		}
		return conteo;
	}

		void AgregaraLista(Node * lineas)
		{
			Node* Nuevo_Valor = new Node();
			Nuevo_Valor->data.NumeroPoke = lineas->data.NumeroPoke;
			Nuevo_Valor->data.NombrePoke = lineas->data.NombrePoke;
			Nuevo_Valor->data.GeneracionPoke = lineas->data.GeneracionPoke;

			if (lineas->data.NombrePoke != "" && lineas->data.NombrePoke != " ")
			{
				if (Inicio == nullptr)
				{
					Nuevo_Valor->next = nullptr;
					Inicio = Nuevo_Valor;
				}
				else
				{
					Node* Moment = Inicio;
					while (Moment->next)
					{
						Moment = Moment->next;
					}
					Moment->next = Nuevo_Valor;
				}
			}
		}

		// links de referencia https://www.codespeedy.com/iosgood-and-iosbad-functions-in-cpp/
		// https://www.tutorialspoint.com/cpp_standard_library/cpp_fstream_open.htm
	//https://cplusplus.com/reference/string/stoi/

		Node* LeerArchivo(std::string nombre) {
			std::fstream archivo;
			int totalLines = 0;
			archivo.open(nombre, std::ios_base::in);
			std::string linea;
			char delimitador = ',';
			static Node Poke[100];
			while (archivo.good())
			{
				getline(archivo, linea);

				std::stringstream X(linea);
				Node* lineas = new Node;
				int countT = 0;
				std::string lineaT = "";
				std::string Espacios = "";

				while (getline(X, lineaT, delimitador)) {
					if (countT == 0) {

						lineas->data.NumeroPoke = std::stoi(lineaT);
					}
					if (countT == 1) {
						Espacios = "";
						//Validacion de espacios iniciales
						for (size_t i = 0; i < lineaT.length(); i++)
						{
							if (i < 2 && lineaT[i] == ' ')
							{
							}
							else
							{
								Espacios += lineaT[i];
							}
						}
						lineas->data.NombrePoke = Espacios;
					}
					if (countT == 2) {

						lineas->data.GeneracionPoke = std::stoi(lineaT);
					}
					countT = countT + 1;
				}
				totalLines = totalLines + 1;
				AgregaraLista(lineas);
			}
			archivo.close();
			return Poke;
		}

		std::string ImprimirPokemons()
		{
			std::string Imprimir = "";
			Node* ImprimirPoke = new Node();
			ImprimirPoke = Inicio;
			while (ImprimirPoke)
			{
				std::string NumeroPoke = "";
				std::string GeneracionPoke = "";

				System::String^ num = ImprimirPoke->data.NumeroPoke.ToString();

				for (size_t i = 0; i < num->Length; i++)
				{
					NumeroPoke += num[i];
				}

				System::String^ Gen = ImprimirPoke->data.GeneracionPoke.ToString();

				for (size_t i = 0; i < Gen->Length; i++)
				{
					GeneracionPoke = Gen[i];
				}

				Imprimir += NumeroPoke + ", " + ImprimirPoke->data.NombrePoke + ", " + GeneracionPoke + "\r\n";
				ImprimirPoke = ImprimirPoke->next;
			}
			return Imprimir;


		}

		Pokemon* Almacenar()
		{
			static Pokemon podedexxx[200];
			int contador = 0;
			Node* intercambio = new Node;
			intercambio = Inicio;

			while (intercambio)
			{
				podedexxx[contador].GeneracionPoke = intercambio->data.GeneracionPoke;
				podedexxx[contador].NombrePoke = intercambio->data.NombrePoke;
				podedexxx[contador].NumeroPoke = intercambio->data.NumeroPoke;
				contador++;
				intercambio = intercambio->next;
			}
			return podedexxx;
		}
};
