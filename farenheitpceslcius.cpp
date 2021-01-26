#include <iostream>
#include <locale>
using namespace std;
int main ()

{
setlocale(LC_ALL, "ptb");
float temp_f, temp_c;

cout << "Escreva a temperatura em Fáhrenheit:";
cin >> temp_f;
temp_c=(temp_f-32)/1.8;
cout << "A temperatura em Célsius:" << temp_c;

}
