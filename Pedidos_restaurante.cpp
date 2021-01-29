#include <iostream>
#include <locale>
using namespace std;
int main()

{
	int  cod, quantidade;
	char *produto;
	float valor;
		
	setlocale(LC_ALL, "ptb");
	
	cout << "Digite o cógigo do produto:\n";
	cout << "100 - Hamburguer - R$ 5,50\n";
	cout << "101 - Cachorro quente - R$ 4,50\n";
	cout << "102 - Milkshake - R$ 7,00\n";
	cout << "103 - Pizza brotinho - R$ 8,00\n";
	cout << "104 - Cheeseburguer - 8,50\n";
	cin >> cod;
	cout << "Informe a quantidade desejada:";
	cin >> quantidade;
	
	switch (cod)
	{
		case 100: produto = "Hamburguer\n";
		cout << produto;
		valor = quantidade * 5.50;
	
		break;
		
		case 101: produto = "Cachorro quente\n";
		cout << produto;
		valor = quantidade * 4.50;
	
		case 102: produto = "Milkshake\n";
		cout << produto;
		valor = quantidade * 7.00;
	
		break;
		
		case 103: produto = "Pizza brotinho\n";
		cout << produto;
		valor = quantidade * 8.00;
	
		break;
		
		case 104: produto = "Cheeseburguer\n";
		cout << produto;
		valor = quantidade * 8.50;
	
		break;
		
		default: cout << "Opção inválida";
	}
	
	
	cout << quantidade << "x" << produto << "=" << valor;
}
	


