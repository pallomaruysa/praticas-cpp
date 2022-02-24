#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"PORTUGUESE");
	int i=1, num, senha, j=0;
	
	if(senha!=123){
		while(senha!=123){
			for(int x=0; x<3; x++){
				cout<<"Digite a sua senha"<<endl;
				cin>>senha;
			}
			cout<<"Cartão bloqueado"<<endl;
			return 0;
		}		
	}
		do{
			cout<<i<<endl;
			i++;
			cout<<"Digite 1 para continuar ou 0 para sair do loop"<<endl;
			cin>>num;
			
		}
		while(num==1);
	
	return 0;
}
