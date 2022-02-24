// Fazer um programa para mostrar se um número lido é primo ou não

#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main(){
	
	setlocale (LC_ALL,"PORTUGUESE");
	
	int numero, i=2, primo=0;
	
	cout<<"Digite um número inteiro para saber se é primo ou não"<<endl;
	cin>>numero;
	
	while(i<numero){
		
		if(numero%i==0){
			primo = 1;
		}
		i++;
		cout<<i<<endl;
	}
	
	if(primo == 0){
		cout<<numero<<" é um número primo"<<endl;
	}
	else{
		cout<<numero<<" não é um número primo"<<endl;
	}
		
	return 0;
}
