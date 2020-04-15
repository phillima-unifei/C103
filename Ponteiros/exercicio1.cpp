#include <iostream>

using namespace std;

int main(){

    //Variavel inteira, com valor 20;
	int x = 22;
	
	//p eh um ponteiro que guarda o endereco onde armazenamos a variavel x
	int* p = &x;
	
    cout << "O valor de x: " << x << endl; //imprime o valor de x
	
	cout << "O endereco onde x esta salvo: "<< p << endl;// imprime o endereco de x, salvo no ponteiro p
	
	
	(*p)++; //Primeiro iremos pegar o conteudo de p, e depois iremos incementar esse valor. Resultado sera 23
	
	cout << "Novo conteudo apontado p :" << *p << endl;
	
	
	p++; //incrementar o valor de p. Como p eh um ponteiro para inteiro, ira incrementar 4 posicoes de memoria (4 bytes)
	
	cout << "O valor de p++ " << p << endl;
	
	
	*(p++); //iremos incrementar o valor de p (endereco), depois iremos acessar o conteúdo.
			//Porém como estamos acessando uma área desconhecida, o valor do conteudo pode ser imprevisivel

    cout << "Novo conteudo apontado por p: " << *p << endl; 

	return 0;

}