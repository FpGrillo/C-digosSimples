#include <iostream>
#include <locale>
using namespace std;
int main()

{
	
	setlocale(LC_ALL, "ptb");
	float hora; 
 	cout << "Informe a hora:";
	cin >> hora;
	if (hora >=6 && hora<=18)
	{
	
	cout << "Est� de dia";
}
	else 
	cout << "Est� de noite";
}


