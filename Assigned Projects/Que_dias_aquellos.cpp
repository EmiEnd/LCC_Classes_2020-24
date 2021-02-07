/*
Nombre: Que_dias_aquellos.cpp
Autor: Emiliano Tadeo Carlos Ibarra
Fecha:  07-febrero-2021
Descripcion: Dados un año y un mes se indica el dia de la semana en el cual cayeron o caeran el priemro y el ultimo dia de ese mes.
*/

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>

using namespace std;

int main()
{	
	enum {DOMINGO,LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO};
	enum {ENE=1,FEB,MAR,ABR,MAY,JUN,JUL,AGO,SEP,OCT,NOV,DIC};

    int dia, mes, anio, a, y, m, indicador, aux; 
    string mes_anio;
    
    cout << "Este programa determina que d" << (char)161 << "a de la semana fue/ser" << (char)160 << " el primero y el " << (char)163 << "ltimo d" << (char)161 << "a del mes de un a" << (char)164 << "o espec" << (char)161 << "fico." << endl;
    
    cout << "Ingrese un mes [1/12]: ";
    cin >> mes;
    while(mes>12 || mes<1){
    	cout << "Opci" << (char)162 << "n no v" << (char)160 << "lida, reingrese su entrada: ";
    	cin >> mes;
	}
	
    cout << "Ingrese un a" << (char)164 << "o [1582-XXXX]: ";
    cin >> anio;
    while(anio<1582){
    	cout << "Opci" << (char)162 << "n no v" << (char)160 << "lida, reingrese su entrada: ";
    	cin >> anio;
	}
	
	switch(mes){
		case ENE:
			mes_anio="enero";
			aux=31;
		break;
		case MAR:
			mes_anio="marzo";
			aux=31;
		break;
		case MAY:
			mes_anio="mayo";
			aux=31;
		break;
		case JUL:
			mes_anio="julio";
			aux=31;
		break;
		case AGO:
			mes_anio="agosto";
			aux=31;
		break;
		case OCT:
			mes_anio="octubre";
			aux=31;
		break;
		case DIC:
			mes_anio="diciemre";
			aux=31;
		break;
		
		case ABR:
			mes_anio="abril";
			aux=30;
		break;
		case JUN:
			mes_anio="junio";
			aux=30;
		break;
		case SEP:
			mes_anio="septiembre";
			aux=30;
		break;
		case NOV:
			mes_anio="noviembre";
			aux=30;
			break;	
			
		case FEB:
			mes_anio="febrero";
			aux=28;
			if(anio%4==0 && (anio%100 != 0 || anio%400==0)){
				aux=29;
			}	
	}
	
	a = (14-mes)/12;
	y = anio - a;
	m = mes + (12*a) -2;
	
	for(dia=1; dia<=aux;dia++){
		if(dia==1 || dia==aux){
			indicador = dia + y + y / 4 - y / 100 + y / 400 + (31*m) / 12;
			indicador = indicador % 7;
			
			switch(indicador){
				case LUNES:
					cout << "El "<< dia << " de " << mes_anio << " del " << anio << " cae en lunes."<< endl;
				break;
				case MARTES:
					cout << "El "<< dia << " de " << mes_anio << " del " << anio << " cae en martes."<< endl;
				break;
				case MIERCOLES:
					cout << "El "<< dia << " de " << mes_anio << " del " << anio << " cae en mi" << (char)130 << "rcoles."<< endl;
				break;
				case JUEVES:
					cout << "El "<< dia << " de " << mes_anio << " del " << anio << " cae en jueves."<< endl;
				break;
				case VIERNES:
					cout << "El "<< dia << " de " << mes_anio << " del " << anio << " cae en viernes."<< endl;
				break;
				case SABADO:
					cout << "El "<< dia << " de " << mes_anio << " del " << anio << " cae en s" << (char)160 << "bado."<< endl;
				break;
				case DOMINGO:
					cout << "El "<< dia << " de " << mes_anio << " del " << anio << " cae en domingo."<< endl;
			}
		}
	}
    system("pause");
    return 0;
}