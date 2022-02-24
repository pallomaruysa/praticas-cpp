#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"PORTUGUESE");
	int i=1, num, senha, j=0;
	
	cout<<"Digite a sua senha"<<endl;
	  cin>>senha;
	
		while(senha!=123){
			j++;
				if(j==4){
					cout<<"Cartão bloqueado"<<endl;
				      return 0;
			}
			cout<<"Senha incorreta, digite novamente. Tentativa "<<j<<endl;
					cin>>senha;
						 
		}
					do{
						cout<<"Bem-vindo ao teste de loop Do While"<<endl;
						cout<<"Digite 1 para continuar ou 0 para sair do loop"<<endl;
						cin>>num;
						i++;
					}
					while(num!=0);
					
					cout<<"Você rodou esse código "<<i-1<<" vezes"<<endl;
					return 0;
				
	}
