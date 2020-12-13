/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Andrea Venazco Rodríguez
 * @date 8 Dic 2020
 * 
 * Este programa toma como parámetro por la línea de comando una cadena y un car
ácter
 *
 * Después busca la posición de la cadena en la que está el carácter
 *
 * El programa imprimirá la posicion del carácter y sino se encuentra dicho cará
cter mostrará un -1
 */

#include <iostream>
#include <string>
#include <cstring>
#include "find_first_of.h"

using namespace std;

int main(int argc, char *argv[]){
	usage (argc, argv);
	string word =argv[1];
	string character_to_find = argv[2];
	cout << PositionOfCharacter(word, character_to_find) << endl;
}
