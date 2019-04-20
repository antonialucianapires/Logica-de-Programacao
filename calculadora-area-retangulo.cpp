#include <iostream>

using namespace std;

int main (int argc, char**argv){
	
	//**Variaveis
	float area, base, altura;
	
	//**Entrada de dados
	cout<< "Digite a base do retangulo:";
	cin>>base;
	cout<< "Digite a altura do retangulo:";
	cin>>altura;
	
	//**Calculo
	area= base*altura;
	
	//**Resultado
	cout<< "A area do retangulo e: "<<area;
	
	return 0;
	
}
