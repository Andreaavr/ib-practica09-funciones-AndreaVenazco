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
#include <vector>

using namespace std;
	
void usage (int argc, char *argv[]);
bool es_primo(int number);
int Numero_Vector (vector <int> &vector_primo, int numero, int numero_actual, int primo);
int Mersenne (vector <int> &vector_primo, int numero);
