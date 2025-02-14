/*
Asignacion 2: Suma de dos fracciones
Juan F. Torré García
801-24-9424
Profa. Lillian Gonzalez Albino 
CCOM3033-002
17 de febrero de el 2025
*/

#include<iostream>
using namespace std;


int main(){

  //desplegar el proposito del programa
  cout << "Este programa suma 2 fracciones.\n" << endl;
  
  //declarar las variables para los inputs
  int num1, num2;
  int den1, den2;

  //pedirle los numeradores y denominadores individualmente al usuario
  cout << "Entre el numerador de la primera fraccion: ";
  cin >> num1;

  cout << "Entre el denominador de la primera fraccion: ";
  cin >> den1;

  cout << "Entre el numerador de la segunda fraccion: ";
  cin >> num2;

  cout << "Entre el denominador de la segunda fraccion: ";
  cin >> den2;

  //sumar las fracciones 
  int suma_num = (num1 * den2) + (num2 * den1);
  int suma_den = den1 * den2;

  //desplegar resultado
  cout << "La suma es: " << suma_num << "/" << suma_den; 


  return 0;
}
