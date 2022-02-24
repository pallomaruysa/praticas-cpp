#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	int i=1, num, senha;
	cout<<"Digite a sua senha"<<endl;
	cin>>senha;
	
	if(senha==123){
			
		do{
			cout<<i<<endl;
			i++;
			cout<<"Digite 1 para continuar ou 0 para sair do loop"<<endl;
			cin>>num;
			
		}
		while(num==1);
		
	}
	
	return 0;
}
