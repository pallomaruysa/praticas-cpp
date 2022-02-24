#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"PORTUGUESE");
	int i=1, num, senha, j=0;
	
	cout<<"Digite a sua senha"<<endl;
	cin>>senha;
	
	if(senha!=123){
		while(senha!=123){
			
			if(senha!=123){
				for(int x=1; x<=3; x++){
					cout<<"Senha incorreta, digite novamente. Tentativa "<<x<<endl;
					cin>>senha;
				}
				cout<<"Cartão bloqueado"<<endl;
				return 0;
			}	
			else{
	
				do{
					cout<<"Bem-vindo ao teste de loop"<<endl;
					cout<<"Digite 1 para continuar ou 0 para sair do loop"<<endl;
					cin>>num;
					i++;
				}
				while(num!=0);
				
				cout<<"Você rodou esse código "<<i-1<<" vezes"<<endl;
				return 0;
			}	
		}		
	}
	else{
		
		do{
			cout<<"Bem-vindo ao teste de loop"<<endl;
			cout<<"Digite 1 para continuar ou 0 para sair do loop"<<endl;
			cin>>num;
			i++;
		}
		while(num!=0);
		
		cout<<"Você rodou esse código "<<i-1<<" vezes"<<endl;
	}
	return 0;
}
