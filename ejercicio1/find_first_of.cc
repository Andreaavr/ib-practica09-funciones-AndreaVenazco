/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Andrea Venazco Rodríguez
 * @date 8 Dic 2020
 * 
 * Este programa toma como parámetro por la línea de comando una cadena y un carácter
 *
 * Después busca la posición de la cadena en la que está el carácter
 *
 * El programa imprimirá la posicion del carácter y sino se encuentra dicho carácter mostrará un -1
 */

#include <iostream>
#include <cstring>

using namespace std;

void usage (int argc, char *argv[]){
	if (argc == 2 && strcmp(argv[1], "--help") == 0){
    	cout << "Este programa necesita que al compilarlo introduzca una palabra y un caracter para ver en que posicion de la palabra esta el caracter" << endl;
    	exit (EXIT_SUCCESS);
	}
  	if (argc == 1){
		cout << "Pruebe 'ejecutable -- help' para mas informacion " << endl;
    		exit(EXIT_SUCCESS);
  	}
}

int PositionOfCharacter (string word, string character_to_find){
	int cout;
	for (auto &character: word){
		if(character_to_find.find(character) == string::npos){
			cout++ ;
			continue;
    		}
		else{
			return cout;
    		}
	}
	return -1;
}
