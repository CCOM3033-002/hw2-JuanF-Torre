// escriba su nombre, username en github y numero de estudiante en el header
// incluya cualquier colaboración que haga
#include<iostream>
using namespace std;


int main(){

  cout << "Este programa suma 2 fracciones.\n" << endl;
  

  int num1, num2;
  int den1, den2;

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
