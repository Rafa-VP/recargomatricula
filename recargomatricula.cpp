#include <iostream>
using namespace std;
main(){

/* Se ingresa la edad de un estudiante. si la edad es de 5 a 10 años, se hace un recargo
del 1% al costo de la matrícula. Si la edad es superior a 10 años y menor o igual que 15 años,
el recargo será del 2%. Si la edad es mayor que 15 y menor o igual que 20, el recargo es del
4%. Si la edad es superior a 20 años, el recargo es del 6%.
Para las edades inferiores a 5 años, no hay recargos */

int edad;
double recargo, costomatricula;

	cout << "Ingrese su edad: ";
	cin >> edad;
	
	cout << "Ingrese el costo de su matricula: $";
	cin >> costomatricula;
	
		if (edad<5){
			recargo=0;
		} 
		else if (edad<=10){
			recargo=0.01;
		}
		else if (edad<=15){
			recargo=0.02;
		}
		else if (edad<=20){
			recargo=0.04;
		}
			else {
				recargo=0.06;
			}
	
double rec = costomatricula * recargo;
double valorapagar = costomatricula + rec;

	cout << "Tu edad es de " << edad << " anios, tu recargo sera de: $" << rec <<endl;
	cout << "El valor total a pagar por la matricula es de: $" << valorapagar <<endl;
}
