#include <iostream>
#include <stdlib.h>
using namespace std;

int main () 
{
	setlocale(LC_ALL, "portuguese");
	int numero1, numero2;
	
	cout<< "1ª Calculadora no Programinha"<<endl;
	cout<< "Digite o 1º numero que deseja: "<< endl;
	cin>> numero1;
	cout<< "Digite o 2º numero que deseja: "<<endl;
	cin>> numero2;
	
	cout<<"A soma desses números: "<<numero1+numero2<<endl;
	cout<<"A substração desses números: "<<numero1-numero2<<endl;
	cout<<"O produto desses números é: "<<numero1*numero2<<endl;
	cout<<"A divisão desses números é: "<<numero1/numero2<<endl;
	
	return 0;
	
}