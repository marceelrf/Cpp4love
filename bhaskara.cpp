#include <iostream>
#include <cmath>
using namespace std;

float r1, r2, delta; //Valores float (reais) para receber o resultado das raízes
int a, b, c;
int main() {
	cout << "Entre com os valores de A,B e C\n";
	cout << "A:\n";
	cin >> a;
	cout << "B:\n";
	cin >> b;
	cout << "C:\n";
	cin >> c;

 //Calcular as raízes
	delta = pow(b,2) - 4*a*c;

	if(delta>0){
	r1 = (-b+sqrt(delta))/(2*a);
	r2 = (-b-sqrt(delta))/(2*a);
   
	cout << "r1 é " << r1 << "\n";
	cout << "r2 é " << r2 << "\n";
	} else if(delta==0){
	r1 = (-b)/(2*a);
	cout << "Raíz única com valor " << r1 << "\n";

	} else {
		cout << "Não existem raízes reais. Tente outros valores :) \n";
	}


}
