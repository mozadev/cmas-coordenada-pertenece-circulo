#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int x;
	int y;
	int r;
	char resultado;

	cout << "ingrese el valor de x: ";
	cin >> x;
	cout << "ingrese el valor de y: ";
	cin >> y;
	
	r = 5;
	resultado = (x*x + y*y <= r*r) ? 'v' : 'f';

	cout << "las coordenadas pertenecen a la circulo: " << resultado << endl;
	
	_getch();











}