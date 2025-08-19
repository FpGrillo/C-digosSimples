#include <iostream>
#include <locale>
using namespace std;
int main()

{
	float num1, num2, resultado;
	int op;
	setlocale(LC_ALL, "ptb");
	
	cout<<"Calculadora do Felpao\n";
	cout<< "Digite os primeiros numeros da operação:";
	cin >> num1;
	cout<< "Agora digite os segundos números:";
	cin >> num2;
	cout << "\n escolha a operação matemática \n";
	cout << "1 = adição\n";
	cout << "2 = subtração\n";
	cout << "3 = mutiplicação\n";
	cout << "4 = divisão\n";
	cout << "Opção:";
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
	
	
	cout << "Você está utilizandao a Calculadora do Felpão da forma errada";
	
	} 
}

