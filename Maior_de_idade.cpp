#include <iostream>
#include <locale>
using namespace std;
int main ()

{

	setlocale(LC_ALL, "ptb");
	int data_nasc, idade;
	cout << "Infome sua data de nascimento:";
	cin >> data_nasc;
	idade=2021-data_nasc;
	cout << "Sua idade é:" << idade; 
	cout << "anos";
	if (idade >= 18)
	{
	
	cout << "Você é maior de idade";

}
	else 
	cout << "Você é menor de idade";
}
