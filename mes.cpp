#include <iostream>
#include <locale>
using namespace std;
int main()
{

int mes;
char *mes_extenso;

setlocale(LC_ALL, "ptb");
cout <<"Digite o mês:";
cin >> mes;
switch (mes)
{

	case 1: mes_extenso = "Janeiro";
		cout << mes_extenso;
	break;
	case 2: mes_extenso = "Fevereiro";
		cout << mes_extenso;
	break;
	case 3: mes_extenso = "Março";
		cout << mes_extenso;
	break;
	case 4: mes_extenso ="Abril";
		cout << mes_extenso;
	break;
	case 5: mes_extenso = "Maio";
		cout << mes_extenso;
	break;
	case 6: mes_extenso ="Junho";
		cout << mes_extenso;
	break;
	case 7: mes_extenso ="Julho";
		cout << mes_extenso;
	break;
	case 8: mes_extenso ="Agosto";
		cout << mes_extenso;
	break;
	case 9: mes_extenso = "Setembro";
		cout << mes_extenso;
	break;
	case 10: mes_extenso = "Outubro";
		cout << mes_extenso;
	break;
	case 11: mes_extenso = "Novembro";
		cout << mes_extenso;
	break;
	case 12: mes_extenso = "Dezembro";
		cout << mes_extenso;
	break;
	default: cout << "Mês inválido.";
}
}
