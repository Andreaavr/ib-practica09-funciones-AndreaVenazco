/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Andrea Venazco Rodríguez
* @date 6 Dic 2020
* 
* Este programa toma como parámetro por línea de comandos tres números naturales N, M, P
*
* Ahora crea un vector de N componentes (double) y los valores se generan aleatoriamente en el rango [M, P]
*
* Despúes el programa tendrá que calcular la media, el máximo, mínimo y la desviación estándar.
*
* Finalmente, imprimirá el resultado de las opereaciones anteriores. 
*/
	
#include<iostream>
#include<cstdlib>
#include<vector>
#include<math.h>
#include "vector_statistics.h"

using namespace std;

int main (int argc, char* argv[]) {
	double	N = stoi(argv[1]), M = stoi(argv[2]), P = stoi(argv[3]);
	double prueba, prueba1, prueba2, prueba3;
	vector<double> v_text(N);
	
	for (int i = 0; i < N; i++){
		v_text[i] = (P-M) * ((double) rand() / (double) RAND_MAX) + M;
	}	
	prueba = media(v_text, N);
	prueba1 = maximo(v_text, N, M);
	prueba2 = minimo(v_text, N, P);
	prueba3 = producto(v_text, N, M, P);
	cout << "La media es: " << prueba << endl;
	cout << "El máximo es: " << prueba1 << endl;
	cout << "El mínimo es: " << prueba2 << endl;
	cout << "El producto es: " << prueba3 << endl;
	return 0;
}

