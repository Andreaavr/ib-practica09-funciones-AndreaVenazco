/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Andrea Venazco Rodríguez
 * @date 23 Nov 2020
 * 
 * Este programa toma como parámetro por la línea de comando un número N y se comprueba si es un número Armstrong
 *
 * Se dice que un número es Armstrong si dicho número es la suma de sus propios dígitos, cada uno de los cuales está elevado al número de dígitos del número
 *
 * El programa imprimirá que números son Armstrong y cuales no
 */

#include<iostream>
#include<math.h>

using namespace std;

int main (int argc, char* argv[]) {
	int N = stoi(argv[1]);
	int contador=0, suma=0, ultima_cifra=0, cn=0, cantidad;

	while (N <= 0);
	cn = N;

	while (N > 0){
		N /= 10;
		contador++;
	}
	
	N = cn;
	for (int i = 0; i < contador; i++){
		ultima_cifra = N % 10;
		suma = suma + pow(ultima_cifra, contador);
		N /= 10;
	}

	N = cn;
	if (suma == N){
		cout << N << " es un número Armstrong" << endl;
	} else{
		cout << N << " no es un número Armstrong" << endl;
	}
	return 0;
}
