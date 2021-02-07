/*
Nombre: Los_ceros_no_valen.cpp
Autor: Emiliano Tadeo Carlos Ibarra
Fecha: 29-01-2021
Descripcion: Dados tres numeros reales, correspondientes a los tres coeficientes de una funcion cuadratica de la forma f(x) = ax^2 + bx + c se encuentran sus raices. 
*/

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    float a,b,c,x1,x2,discriminante,parte_imaginaria;
    unsigned int cero;
    cout << "Este programa encuentra las ra" << (char)161 <<"ces de una operaci" << (char)162 << "n con forma: " << endl;
    cout << "       f(x)=ax^2+bx+c" << endl;
    cout << "Ingrese los tres coeficientes en orden a,b,c." << endl;
    cout << "   a: ";
    cin >> a;
    while (a==0){
		cout << "El valor de a no puede ser 0, reingreselo: ";
		cin >> a;
	}    
    cout << "   b: ";
    cin >> b;
    cout << "   c: ";
    cin >> c;

    discriminante = (b*b)-4*a*c;

    if(discriminante>0){
        x1= (-b + sqrt(discriminante))/(2*a);
        x2= (-b - sqrt(discriminante))/(2*a);
        cout << "La ra" << (char)161 << "ces son x1= " << x1 << " y x2= " << x2 << endl;
    }else if(discriminante == 0){
        x1= -b/(2*a);
        cout << "La ra" << (char)161 << "z es x= " << x1 << endl;
    }else{
        x1= -b/(2*a);
        parte_imaginaria= sqrt(-discriminante)/(2*a);
        if(x1==-0 || x1==0){
        	cout << "Las ra" << (char)161 << "ces son x1= " << parte_imaginaria << "i y x2= " << (-1*parte_imaginaria) << "i" << endl;
		}else{
			if (parte_imaginaria<0){
				parte_imaginaria=(-1*parte_imaginaria);
			}
			cout << "Las ra" << (char)161 << "ces son x1= " << x1 << (char)241 << parte_imaginaria << endl;
		}
    }   

    system("pause");
    return 0;
}
