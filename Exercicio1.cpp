/******************************************************************************
 Sabendo que Porto Seguro dista 600km de Salvador, e que meu carro faz 10km/l, 
 desejo saber quanto tempo de viagem vou gastar, quantos litros de gasolina 
 e qual on custo da gasolina.
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{        
    float vel, tempo, val2, despesa, consumo, distancia, cons;
    string destino;
    
    cout<<"Informe o seu destino: "<< endl;
    cin>> destino;
    cout<<"Informe a distância do destino" <<endl;
    cin>>distancia;
    cout<<"Qual o consumo médio do seu carro?" << endl;
    cin >> cons;
    cout<<"Qual será sua velocidade média?" << endl;
    cin >> vel;
    cout<<"Informe o valor do litro de gasolina: "<< endl;
    cin >> val2;
    
    tempo = distancia / vel;
    consumo = distancia / cons;
    despesa = consumo * val2;
    
    system("cls");
    
    cout << "O tempo de viagem é: " << tempo << " horas" << endl;
    cout << "O consumo de gasolina será de: "<< consumo<< " litros" <<endl;
    cout << "A despesa com gasolina será de: "<< despesa<< " reais" <<endl;

    return 0;
}
