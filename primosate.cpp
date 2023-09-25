#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int aux, num, div=0;
	
	cout << "Entre com um número\n";
	cin >> num;

    for(aux=2 ; aux<=num ; aux++)
        if(num%aux==0){
            div++;
			cout << aux <<" é primo!" <<endl;
		}

    /*if(div==1)
        cout<<"É primo"<<endl;
    else
        cout<<"Não é primo"<<endl;*/
    return 0;
}