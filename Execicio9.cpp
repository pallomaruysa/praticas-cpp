/*
1.	Prog para receber um n�mero e imprimir os inteiros de 1 at� este n�mero
2.	Modificar o prog 1 para imprimir apenas os pares
3.	Fazer um programa para ler o nome de uma pessoa e dar boa noite a ela,
repetir enquanto o usu�rio assim dejejar*/

#include <iostream>
using namespace std;

int main(){
	int valor, i=1;
	string nome;
	
	
	while(i!=0){
		cout<<"Digite useu nome"<<endl;
		cin>> nome;
		cout<<"Boa noite, "<<nome<<endl;
		cout<<"Digite 0 para parar ou 1 para continuar com o loop"<<endl;
		cin>> i;		
	}
	
	system("pause");
	return 0;
}
