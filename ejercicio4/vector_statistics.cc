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
	
double maximo (vector<double> v_maximo, double tamano_max, double Mmaximo){
	v_maximo.reserve(tamano_max);
	double max;
	max = Mmaximo;
	for (int i = 0; i < tamano_max; i++){
		if (v_maximo[i] > max){
			max = v_maximo[i];
		}
	}
	return max;
}
	
double minimo (vector<double> v_minimo, double tamano_min, double Pminimo){
	v_minimo.reserve(tamano_min);
	double min;
	min = Pminimo;
	for (int i = 0; i < tamano_min; i++){
		if (v_minimo[i] < min){
			min = v_minimo[i];
		}
	}
	return min;
}
	
double producto (vector<double> v_producto, double tamano, double v_M, double v_P ){
	v_producto.reserve(tamano);
	double operacion;
	for (int i = 0; i < tamano; i++){
		while (v_P != 0){
			operacion = operacion + v_M;
			v_P = v_P - 1;
		}
	}
	return operacion;
}
	
double media (vector<double> v_media, double tamano){
	v_media.reserve(tamano);
	double med;
	med = 0;
	for (int i = 0; i < tamano; i++){
		med = med + v_media[i];
	}
	med = med / tamano;
	return med;
}
	
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
