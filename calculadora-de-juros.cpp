#include <iostream>

using namespace std; 

int main (int argc, char** argv) {
	
	//** Essa calculadora tem por objetivo calcular a taxa de juros (%) de uma conta. 
	float conta, juros, valorJuros, novoValor;
	
	cout<<"Escreva o valor da conta:";
	cin>> conta;
	cout<<"Escreva a taxa percentual de juros :";
	cin>> juros;
	valorJuros=(juros*conta)/100;
	novoValor=valorJuros+conta;
	
	cout<<novoValor;
	return 0;
	
}

