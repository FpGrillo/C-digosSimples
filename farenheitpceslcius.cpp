#include <iostream>
#include <locale>
using namespace std;
int main ()

{
setlocale(LC_ALL, "ptb");
float temp_f, temp_c;

cout << "Escreva a temperatura em F�hrenheit:";
cin >> temp_f;
temp_c=(temp_f-32)/1.8;
cout << "A temperatura em C�lsius:" << temp_c;

}
