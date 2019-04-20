#include <iostream>

using namespace std;

int main(int argc,char** argv){
	
		
	//** variaveis
	float quilometro, litro, consumo_medio;
	
	//** entrada de dados
	cout<< "Digite o numero de quilometros percorridos:";
	cin>> quilometro;
	cout<< "Digite a quantidade de litros suportados no tanque:";
	cin>> litro;
	
	//** calculo
	consumo_medio = quilometro/litro;
	
	//** Resultado.
	cout<< "O consumo medio e igual a "<<consumo_medio<< " quilometros por litro.";
	
	return 0;
	
	
}

