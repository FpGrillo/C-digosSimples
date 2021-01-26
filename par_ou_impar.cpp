#include <iostream>
#include <locale>
using namespace std;
int main()

{
	setlocale(LC_ALL, "ptb");
	int number, rest;
	cout << "Informe o número a ser digitado:";
	cin >> number;
	
	rest = number%2;
	if (rest==0)
    {
	cout << "Este número é par";
}
    else
    cout << "Este número é ímpar";
}
	

