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

using namespace std;

int main (int argc, char* argv[]);
double media (vector<double> v_media, double tamano);
double maximo (vector<double> v_maximo, double tamano_max, double Mmaximo);
double minimo (vector<double> v_minimo, double tamano_min, double Pminimo);
double producto (vector<double> v_producto, double tamano);
