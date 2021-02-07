/*
Nombre: Volumenes.cpp
Autor: Emiliano Tadeo Carlos Ibarra
Fecha: 05 de febrero del 2021
Descripcion: Este codigo calcula el volumen de un cuerpo que se le da a elegir al usuario, puede ser un cilindro, una esfera, una piramide cuadrangular y un cubo.
*/

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std; 

enum {ESFERA=1,	CILINDRO,CUBO,PIRAMIDE_C};

int main(){
    float volumen;
    int selector;

    cout << "Este programa calcula el volumen de los siguientes cuerpos.\n	[1]Esfera   [2]Cilindro\n	[3]Cubo     [4]Piramide Cuadrangular\nIngrese una opci" << (char)162 << "n: ";
    cin >> selector;

    while(selector>4 || selector<1){
        cout << "Ingrese una opci" << (char) 162 << "n v" << (char)160 << "lida.\n   [1]Esfera   [2]Cilindro\n   [3]Cubo     [4]Piramide Cuadrangular\nIngrese una opci" << (char)162 << "n: ";
        cin >> selector;
    }

    switch (selector){
        case ESFERA:{
        		float radio;
        		
		        cout << "Usted eligi" << (char)162 << ": esfera" <<endl;
		        cout << "Ingrese la medida del radio: ";
		        cin >> radio;
		        while(radio<0){
		            cout << "Ingrese una medida mayor o igual a cero para el radio: ";
		            cin >> radio;
		        }
		        volumen = 1.3333 * M_PI * (radio * radio * radio);
		
		        cout << "El volumen de la esfera es de " << volumen << " unidades cuadraticas." << endl;
       		}
			break;
        case CILINDRO:{
        		float radio, altura;
        		
	            cout << "Usted eligi" << (char)162 << ": cilindro" <<endl;
	            cout << "Ingrese la medida del radio: ";
	            cin >> radio;
	            while(radio<0){
	                cout << "Ingrese una medida mayor o igual a cero para el radio: ";
	                cin >> radio;
	            }
	
	            cout << "Ingrese la medida de la altura: ";
	            cin >> altura;
	            while(altura<0){
	                cout << "Ingrese una medida mayor a cero para la altura: ";
	                cin >> altura;
	            }
	
	            volumen = (M_PI * (radio * radio)) * altura;
	
	            cout << "El volumen del cilindro es de " << volumen << " unidades cuadraticas." << endl;
        	}
            break;
        case CUBO:{
				float lado;
				
	            cout << "Usted eligi" << (char)162 << ": cubo" <<endl;
	
	            cout << "Ingrese la medida del lado: ";
	            cin >> lado;
	            while(lado<=0){
	                cout << "Ingrese una medida mayor a cero para el lado: ";
	                cin >> lado;
	            }
	
	            volumen= lado * lado * lado;
	
	            cout << "El volumen del cubo es de " << volumen << " unidades cuadraticas." << endl;
			}
            break;
        case PIRAMIDE_C:{
        		float lado, altura;
        		
	            cout << "Usted eligi" << (char)162 << ": piramide cuadrangular" <<endl;
	            cout << "Ingrese la medida del lado: ";
	            cin >> lado;
	            while(lado<=0){
	                cout << "Ingrese una medida mayor a cero para el lado: ";
	                cin >> lado;
	            }
	
	            cout << "Ingrese la medida de la altura: ";
	            cin >> altura;
	            while(altura<=0){
	                cout << "Ingrese una medida mayor a cero para la altura: ";
	                cin >> altura;
	            }
	
	            volumen= ((lado * lado) * altura)/3;
	            
	            cout << "El volumen de la piramide cuadrangular es de " << volumen << " unidades cuadraticas." << endl;
	        }	
    }
    system("pause");
    return 0;
}