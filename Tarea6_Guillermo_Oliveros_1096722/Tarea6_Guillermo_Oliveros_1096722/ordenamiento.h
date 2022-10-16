#pragma once
#define ORDENAMIENTO_H

int Burbuja(int [], int)
{
	int i, j, aux, n;
	int pokedexx[80];
	

	for (i = 0; i < 80; i++)
	{
		for (j = 0; j < 80; j++)
		{
			if (pokedexx[i] < pokedexx[i + 1])
			{
				aux = pokedexx[j];
				pokedexx[j] = pokedexx[j + 1];
				pokedexx[j + 1] = aux;

			}
		}
	}

	return pokedexx[i];
	
}

int Quicksort(int pokedexx[], int n, int i)
{
	int pokedexx[80];
	int i, pos, aux;

	for (i = 0; i < 80; i++) {
		pos = i;
		aux = pokedexx[i];

		while ((pos > 0) && (pokedexx[pos - 1] > aux)) {
			pokedexx[pos] = pokedexx[pos - 1];
			pos--;
		}
		pokedexx[pos] = aux;
	}


	return pokedexx[1];
}

int Mergesort(int[], int init, int n)
{
	int pokedexx[80];
	int i, j, aux, min;

	//Algoritmo del Ordenamiento por Selección
	for (i = 0; i < 5; i++) {
		min = i;
		for (j = i + 1; j < 5; j++) {
			if (pokedexx[j] < pokedexx[min]) {
				min = j;
			}
		}
		aux = pokedexx[i];
		pokedexx[i] = pokedexx[min];
		pokedexx[min] = aux;
	}



	return pokedexx[1];
}

