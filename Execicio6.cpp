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
        cout<<"Digite o nome do "<<i+1<<"o aluno"<<endl;
        cin>>aluno[i];
        cout<<"Digite a média de "<<aluno[i]<<endl;
        cin>>media[i];
    }
    
    cout<<"Lista dos alunos digitados em ordem alfabética"<<endl;
    
    for(int i=0; i<7; i++){
        for (int j = i+1; j<=6; j++){
            if (aluno[i] > aluno[j]){
               aux = aluno[i];
               aluno[i] = aluno[j];
               aluno[j] = aux;
               aux2 = media[i];
               media[i] = media[j];
               media[j] = aux2;
            }
        }
    }
    
    for(int i=0; i<7; i++){
        cout<<aluno[i]<<" media: "<<media[i]<<endl;
        
    }
    
    cout<<"Lista das medias dos alunos em ordem decrescente de notas"<<endl;
    
    for(int i=0; i<7; i++){
        for(int j=i+1; j<6; j++){
        	if(media[i] < media[j]){
        		aux2 = media[i];
        		media[i] = media[j];
        		media[j] = aux2;
        		aux = aluno[i];
        		aluno[i] = aluno[j];
        		aluno[j] = aux;
			}
		}
    }
    for (int i=0; i<7; i++){
    	cout<<"Media "<<media[i]<<" de "<<aluno[i]<<endl;
	}
    
    for (int i=0; i<7; i++){
    	if(media[i]<6){
    		cout<<"Aluno: "<<aluno[i]<<" |  Media: "<<media[i]<<endl;
    		cout<<"REPROVADO!! Dessa vez voce não conseguiu, se esforce um pouco mais!  <3 "<<endl;
		}
		else{
			cout<<"Aluno: "<<aluno[i]<<" |  Media: "<<media[i]<<endl;
    		cout<<"APROVADO!! Parabens, voce arrasa!  <3 "<<endl;
		}
	}
    
    
    return 0;
}



