#include <iostream>
#include <stdlib.h>
using namespace std;

int main () 
{
	setlocale(LC_ALL, "portuguese");
	int numero1, numero2;
	
	cout<< "1� Calculadora no Programinha"<<endl;
	cout<< "Digite o 1� numero que deseja: "<< endl;
	cin>> numero1;
	cout<< "Digite o 2� numero que deseja: "<<endl;
	cin>> numero2;
	
	cout<<"A soma desses n�meros: "<<numero1+numero2<<endl;
	cout<<"A substra��o desses n�meros: "<<numero1-numero2<<endl;
	cout<<"O produto desses n�meros �: "<<numero1*numero2<<endl;
	cout<<"A divis�o desses n�meros �: "<<numero1/numero2<<endl;
	
	return 0;
	
}