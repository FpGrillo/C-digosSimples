#include <iostream>
#include <locale>
using namespace std;
int main()

{
	float num1, num2, resultado;
	int op;
	setlocale(LC_ALL, "ptb");
	
	cout<<"Calculadora do Felpao\n";
	cout<< "Digite os primeiros numeros da opera��o:";
	cin >> num1;
	cout<< "Agora digite os segundos n�meros:";
	cin >> num2;
	cout << "\n escolha a opera��o matem�tica \n";
	cout << "1 = adi��o\n";
	cout << "2 = subtra��o\n";
	cout << "3 = mutiplica��o\n";
	cout << "4 = divis�o\n";
	cout << "Op��o:";
	cin >> op;
	
	if (op==1)
	{
		resultado = num1+num2;
		cout << num1 << "+" << num2 << "=" << resultado;
	}
	else if (op==2)
	{
		resultado = num1-num2;
		cout << num1 << "-" << num2 << "=" << resultado;
	}
	else if (op==3)
	{
		resultado = num1*num2;
		cout << num1 << "*" << num2 << "=" << resultado;
	}
		
	
	else if (op==4)
	{
		resultado = num1/num2;
		cout << num1 << "/" <<num2 << "=" << resultado;
	}
		
	else
	{
	
	
	cout << "Voc� est� utilizandao a Calculadora do Felp�o da forma errada";
	
	} 
}
