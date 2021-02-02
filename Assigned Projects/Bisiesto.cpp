/*
Nombre: .cpp
Autor: Emiliano Tadeo Carlos Ibarra
Fecha: 
Descripcion: 
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int anio, mes;

    cout << "Ingrese un a" << (char)164 << "o mayor a 1582: " << endl;
    cin >> anio;
    while(anio<1582){
        cout << "Reingrese un a" << (char)164 << "o v" << (char)160 << "lido: " << endl;
        cin >> anio;
    }

    cout << "Ingrese un mes entre [1,12]: " << endl;
    cin >> mes;
    while(mes<1 || mes>12){
        cout << "Reingrese un mes v" << (char)160 << "lido." << endl;
        cin >> mes;
    }
    
    if (anio%4==0 && (anio%100 != 0 || anio%400==0) && mes==2){
        mes=13;
    }

    switch(mes){
        case 1:
            cout << "El mes de enero tiene 31 dias en " << anio << "." << endl; 
            break;
        case 2: 
            cout << "El mes de febrero tiene 28 dias en " << anio << "." << endl; 
            break;
        case 3:
            cout << "El mes de marzo tiene 31 dias en " << anio << "." << endl; 
            break;
        case 4:
            cout << "El mes de abril tiene 30 dias en " << anio << "." << endl; 
            break;
        case 5:
            cout << "El mes de mayo tiene 31 dias en " << anio << "." << endl; 
            break;
        case 6:
            cout << "El mes de junio tiene 30 dias en " << anio << "." << endl; 
            break;
        case 7:
            cout << "El mes de julio tiene 31 dias en " << anio << "." << endl; 
            break;
        case 8:
            cout << "El mes de agosto tiene 31 dias en " << anio << "." << endl; 
            break;
        case 9:
            cout << "El mes de septiembre tiene 30 dias en " << anio << "." << endl; 
            break;
        case 10:
            cout << "El mes de octubre tiene 31 dias en " << anio << "." << endl; 
            break;
        case 11:
            cout << "El mes de noviembre tiene 30 dias en " << anio << "." << endl; 
            break;
        case 12:
            cout << "El mes de diciembre tiene 31 dias en " << anio << "." << endl; 
            break;
        case 13:
            cout << "El mes de febrero tiene 29 dias en el " << anio << "." << endl; 
    }

    system("pause");
    return 0;
}
