#include <iostream>
#include <locale>
using namespace std;
int main()

{
	setlocale(LC_ALL, "ptb");
	int number, rest;
	cout << "Informe o n�mero a ser digitado:";
	cin >> number;
	
	rest = number%2;
	if (rest==0)
    {
	cout << "Este n�mero � par";
}
    else
    cout << "Este n�mero � �mpar";
}
	

