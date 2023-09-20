#include <iostream>
using namespace std;

int idade; // Define a idade do usuario
int main(){
	
	cout << "Entre com sua idade, por favor \n\n";
	cin >> idade;
	
	if(idade < 30){
		cout << "UAU, que novinho(a)\n";
	} else if(idade < 45){
		cout << "Que demais! Ta inteirão(rona) \n";
	} else {
		cout << "Essa é a melhor idade!!!\n";
	}
	
}