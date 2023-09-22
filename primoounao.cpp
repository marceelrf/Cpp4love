#include <iostream>

using namespace std;


int main(){
	int aux, num=999999999, div=0;
	cout<<"digite um numero para testar"<<endl;
	cin>>num;
	
	for(aux=2; aux<=num/2; aux++){
		if(num%aux==0){
			div++;
		}
	}
	
	if(div==0){
		cout<<num<<" é primo"<<endl;
	} else{
		cout<<num<<" não é primo"<<endl;
	}
	
	return 0;
}