#include <iostream>

using namespace std;

class celula
{
private:
	string nome;
	char sexo;
	int idade;
	bool cachaceiro;
	celula * proxima;
public:
	celula()
	{
		proxima = NULL;
	}
	celula(string n)
	{
		nome = n;
	}
	celula(string n, celula *p)
	{
		nome = n;
		proxima = p;
	}
	celula(string nome, char sexo, int idade, bool cachaceiro, celula *p)
	{
		this->nome = nome;
		this->sexo = sexo;
		this->idade = idade;
		this->cachaceiro = cachaceiro;
		proxima = p;
	}
	string getNome()
	{
		return nome;
	}
	void setNome(string nome)
	{
		this->nome = nome;
	}
	
	char getSexo(){
		return sexo;
	}
	void setSexo(char sexo){
		this->sexo = sexo;
	}
	
	int getIdade(){
		return idade;
	}
	void setIdade(int idade){
		this->idade = idade;
	}
	
	bool getCachaceiro(){
		return cachaceiro;
	}
	void setCachaceiro(bool cachaceiro){
		this->cachaceiro = cachaceiro;
	}

	celula * getProxima()
	{
		return proxima;
	}

	void setProxima(celula * l)
	{
		proxima = l;
	}
	
};


class lista
{
private:
	celula * inicio;

public:
	lista()
	{
		inicio = NULL;
	}
	~lista()
	{
		esvaziar();
	}
	lista(celula *i)
	{
		inicio = i;
	}
	celula * getInicio()
	{
		return inicio;
	}

	void inserirInicio(string nome, char sexo, int idade, bool cachaceiro)
	{
		celula *nova = new celula;
		nova->setNome(nome);
		nova->setSexo(sexo);
		nova->setIdade(idade);
		nova->setCachaceiro(cachaceiro);
		nova->setProxima(inicio);
		inicio = nova;
	}

	void inserirFim(string nome, char sexo, int idade, bool cachaceiro)
	{
		if(inicio == NULL)
		{
			inserirInicio(nome, sexo, idade, cachaceiro);
		}
		else
		{
			celula *aux = inicio;
			while(aux->getProxima() != NULL)
			{
				aux = aux->getProxima();
			}
			celula *nova = new celula(nome, sexo, idade, cachaceiro, NULL);
			aux->setProxima(nova);
		}
	}


	void imprimir()
	{
		if(inicio == NULL)
		{
			cout << "Lista vazia.\n";
		}
		else
		{
			celula *aux = inicio;
			while(aux != NULL)
			{
				cout << aux->getNome() << " - " << aux->getSexo() << " - " << aux->getIdade() << " - " << aux->getCachaceiro() << endl;
				aux = aux->getProxima();
			}
		}
	}

	void esvaziar()
	{
		celula *aux = inicio;
		while(aux != NULL)
		{
			inicio = inicio->getProxima();
			delete aux;
			aux = inicio;
		}
		cout << "\n----Memoria liberada----\n";
	}
};

int main()
{
	lista listaChurras;
	listaChurras.inserirInicio("Miguel", 'M', 20, true);
	listaChurras.inserirFim("Jorge", 'M', 18, false);
	listaChurras.inserirFim("Ana", 'F', 15, true);
	listaChurras.inserirInicio("Chey", 'F', 20, false);
	listaChurras.imprimir();
	return 0;
}
