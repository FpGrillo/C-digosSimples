#include <iostream>
#include <locale>
using namespace std;
int main()

{
	int idade;
	setlocale(LC_ALL, "ptb");
	cout << "Informe a idade para identificar a categoria do competidor:";
	cin >> idade;
	
	if (idade >=7 && idade<=12)
	{
		cout << "Voc� ir� participar do torneio INFANTIL.";
	}
	else if (idade >=13 && idade<=17)
	{
		cout << "Voc� ir� participar do torneio JUVENIL.";
	}
	else if (idade >= 18 && idade<= 49)
	{
		cout << "Voc� ir� participar do torneio ADULTO.";
	}
	else if (idade>=50 && idade<=65)
	{
		cout << "Voc� ir� participar do torneio SENIOR";
	} 

	else 
	{
		cout << "Op��o inv�lida.";
	}
}

