// Fazer um programa para mostrar se um n�mero lido � primo ou n�o

#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main(){
	
	setlocale (LC_ALL,"PORTUGUESE");
	
	int numero, i=2, primo=0;
	
	cout<<"Digite um n�mero inteiro para saber se � primo ou n�o"<<endl;
	cin>>numero;
	
	while(i<numero){
		
		if(numero%i==0){
			primo = 1;
		}
		i++;
		cout<<i<<endl;
	}
	
	if(primo == 0){
		cout<<numero<<" � um n�mero primo"<<endl;
	}
	else{
		cout<<numero<<" n�o � um n�mero primo"<<endl;
	}
		
	return 0;
}
