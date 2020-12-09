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
	
int main (int argc,char *argv[]){
	usage (argc, argv);
	int numero = atoi(argv[1]);
      	int primo, numero_actual = 0;
	vector <int>  vector_primo;
	Numero_Vector (vector_primo, numero, numero_actual, primo);
	cout << numero << " el primer numero de Mersenne es: " << Mersenne(vector_primo, numero) << endl;
	  return 0;
}
