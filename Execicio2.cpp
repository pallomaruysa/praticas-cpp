/******************************************************************************

Fazer um programa para ler o nome e a média de 7 alunos. O programa deverá exibir 
duas listas, uma lista dos alunos digitados por ordem alfabética de nomes, 
e outra lista dos alunos por ordem de decrescente de média.
Obs. Exibir nome e média.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    string aluno[7], aux;
    double media[7], aux2;
    
    cout<<"PROGRAMA PARA LER OS NOMES E AS MÉDIAS DOS ALUNOS"<<endl;
    
    for(int i=0; i<7; i++){
        cout<<"Digite o nome do aluno"<<endl;
        cin>>aluno[i];
    }
    
    for(int i=0; i<7; i++){
        cout<<"Digite a média do aluno"<<endl;
        cin>>media[i];
    }
    
    cout<<"Lista dos alunos digitados em ordem alfabética"<<endl;
    
    for(int i=0; i<7; i++){
        for (int j = i+1; j<=6; j++){
            if (aluno[i] > aluno[j]){
               aux = aluno[i];
               aluno[i] = aluno[j];
               aluno[j] = aux;
            }
        }
    }
    
    for(int i=0; i<7; i++){
        cout<<aluno[i]<<endl;
    }
    
    
    cout<<"Lista das médias digitados em ordem decrescente"<<endl;
    
    for(int i=0; i<7; i++){
        for (int j= i+1; j<=6; j++){
            if (media[i] < media[j]){
               aux2 = media[i];
               media[i] = media[j];
               media[j] = aux2;
            }
        }
    }
    
    for(int i=0; i<7; i++){
        cout<<media[i]<<endl;
    }
    
    return 0;
}

