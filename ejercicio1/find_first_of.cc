
#include <iostream>
#include <cstring>
using namespace std;

// Funcion que muestra por pantalla el mensaje de error
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

// Funcion que va comparando el caracter dado con los caracteres de la palabra introducida
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
