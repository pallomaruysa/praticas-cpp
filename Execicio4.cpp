
#include <iostream>

using namespace std;

int main()
{
    string animal[5], aux;
    
    cout<<"PROGRAMA PARA LER NOMES DE ANIMAIS"<<endl;
    
    for(int i=0; i<5; i++){
        cout<<"Digite o nome do animal"<<endl;
        cin>>animal[i];
    }
    cout<<"Lista dos animais digitados normal"<<endl;
    
    for(int i=0; i<5; i++){
        cout<<animal[i]<<endl;
    }
    
    cout<<"Lista dos animais digitados invertida"<<endl;
    
    for(int i=4; i>=0; i--){
        cout<<animal[i]<<endl;
    }
    
    cout<<"Lista dos animais digitados em ordem crescente"<<endl;
    
    for(int i=0; i<5; i++){
        for (int j= i+1; j<=4; j++){
            if (animal[i] > animal[j]){
               aux = animal[i];
               animal[i] = animal[j];
               animal[j] = aux;
            }
        }
    }
    
    for(int i=0; i<5; i++){
        cout<<animal[i]<<endl;
    }

    cout<<"Lista dos animais digitados em ordem decrescente"<<endl;
    
    for(int i=0; i<5; i++){
        for (int j= i+1; j<=4; j++){
            if (animal[i] < animal[j]){
               aux = animal[i];
               animal[i] = animal[j];
               animal[j] = aux;
            }
        }
    }
    
    for(int i=0; i<5; i++){
        cout<<animal[i]<<endl;
    }
    
    
    return 0;
}


