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
	cout << "Sua idade �:" << idade; 
	cout << "anos";
	if (idade >= 18)
	{
	
	cout << "Voc� � maior de idade";

}
	else 
	cout << "Voc� � menor de idade";
}
