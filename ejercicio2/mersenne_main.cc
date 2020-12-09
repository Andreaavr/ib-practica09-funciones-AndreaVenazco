/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Andrea Venazco Rodríguez
 * @date 8 Dic 2020
 * 
 * Este programa toma como parámetro por la línea de comando un número N y tiene que ser primo
 *
 * Después se halla el primo de Mersenne que es número primo de la forma 2^p -1
 *
 * El programa imprimirá los primeros N primos de Mersenne
 */

#include <iostream>
#include <math.h>
#include <cstring>
#include <vector>
#include "mersenne.h"

using namespace std;

void usage (int argc, char* argv[]){
	if (argc == 2 && strcmp(argv[1], "--help") == 0){
		cout << "Este programa necesita que al compilarlo introduzca un numero" << endl;
		exit (EXIT_SUCCESS);
	}
	if (argc == 1){
		cout << "Pruebe 'ejecutable -- help' para mas informacion " << endl;
		exit(EXIT_SUCCESS);
	}
}

bool es_primo(int number){
	for (int i = 2; i < number ; i++){
		if (number % i== 0){
			return false;
		}
		return true;
	}
}

int Numero_Vector (vector <int> &vector_primo, int numero, int numero_actual, int primo){
	for (int i = 0; i < numero; i++){
		do{
			++numero_actual;
		}
		while(!es_primo(numero_actual));
		if (es_primo(numero_actual)){
			primo = numero_actual;
			vector_primo.push_back (numero_actual);
			++numero_actual;
		}
	}
}

int Mersenne (vector <int> &vector_primo, int numero){
	int total = 0, elevado = 0;
	for (int i = 0; i < numero; i++){
		elevado = pow (2, vector_primo[i]);
		total += elevado;
	}
	return total;
}
