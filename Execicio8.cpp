//1.	Prog para receber um n�mero e imprimir os inteiros de 1 at� este n�mero
//2.	Modificar o prog 1 para imprimir apenas os pares

#include <iostream>
using namespace std;

int main(){
	int valor, i=1;
	
	cout<<"Digite um numero"<<endl;
	cin>> valor;
	
	while(valor!=i){
		if(i%2==0)	
			cout<<i<<endl;
		i++;
	}
	system("pause");
	return 0;
}
