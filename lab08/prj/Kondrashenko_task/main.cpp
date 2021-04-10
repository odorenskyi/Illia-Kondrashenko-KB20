#include <iostream>
#include "moduleskondrashenko.h"
#include <locale.h>
#include <windows.h>

using namespace std;

void developer()
{
cout << "|//////////////////////////////////////////////////|" << endl;
cout << "|///Copyright (c) 2021 Kondrashenko Iliya, CUNTU///|" << endl;
cout << "|//////////////////////////////////////////////////|" << endl;
}

void logexp(char a, char b, bool result)
{
cout << "¬ведiть символ a: ";
cin >> a;
cout << "¬ведiть символ b: ";
cin >> b;
cout << "a + 10 >= b: " << boolalpha  << (a + 10 >= b) << endl;
}

float funchexdec(int x, int y, int z, int S)
{
cout << "\n ”ведiть x(„исло х повинно бути бiльше чим 0): ";
cin >> x;

while (x < 0){
cout << "\n ”ведiть x(„исло х повинно бути бiльше чим 0): ";
cin >> x;
}
cout << "\n ”ведiть y(„исло y повинно бути бiльше чим 0): ";
cin >> y;

while (y < 0){
cout << "\n ”ведiть y(„исло х повинно бути бiльше чим 0): ";
cin >> y;
}
cout << "\n ”ведiть z(„исло z повинно бути бiльше чим 0): ";
cin >> z;

while (z < 0){
cout << "\n ”ведiть z(„исло х повинно бути бiльше чим 0): ";
cin >> z;
}

cout << "X у дес€тковiй системi численн€(dec) - " << dec << x << endl;
cout << "X у шiстнадц€тковiй системi численн€(hex) - " << hex << x << endl << endl;
cout << "Y у дес€тковiй системi численн€(dec) - " << dec << y << endl;
cout << "Y у шiстнадц€тковiй системi численн€(hex) - " << hex << y << endl << endl;
cout << "Z у дес€тковiй системi численн€(dec) - " << dec << z << endl;
cout << "Z у шiстнадц€тковiй системi численн€(hex) - " << hex << z << endl << endl;
S = s_calculation(x, y, z);
cout << "\n S = " << s_calculation(x, y, z) << endl;
}

int main()
{
setlocale(LC_ALL, "ukr");
developer();
char a;
char b;
int x = 0;
int y = 0;
int z = 0;
int S = 0;
bool result;
logexp(a, b, result);
cout << endl;
funchexdec(x, y, z, S);
getchar();
system("pause");

return 0;
}
