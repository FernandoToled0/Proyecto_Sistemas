#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include "mis_funciones.h"

using namespace std;
MENU CajeroMenu;

void menu();

void cajeroAutomatico();
void depositar(int cantidad);
void retirar(int cantidad);

int saldo_actual = 100;
int cantidad;
 
void cajeroAutomatico()
{

	int opc;
 	TextColor(10);
	
	Say(17,2,"---Cajero Automatico--"); 
	SetColorB(2,19);		  
	Rectangle(1,4,49,44,"#"); 
	SetColorA(2,22);  
	
	TextColor(7);
	 
	Gotoxy(15,6);cout<<"1. Consultar saldo"<<endl;
	Gotoxy(15,7);cout<<"2. Depositar"<<endl;
	Gotoxy(15,8);cout<<"3. Retirar"<<endl;
	Gotoxy(15,9);cout<<"4. Salir"<<endl;
	Gotoxy(15,10);cout<<"Dijite su opcion: ";
	scanf("%i" , &opc); 
	
	switch(opc)
	{
		case 1: Gotoxy(5,12);cout<<"Tu saldo actual es de Q."<<saldo_actual<<endl; break;
 		case 2: Gotoxy(5,12);cout<<"Cuanto dinero desea depositar: "; scanf("%i" , &cantidad); depositar(cantidad);break;
 		case 3: Gotoxy(5,12);cout<<"Cuanto dinero desea retirar: "; scanf("%i" , &cantidad); retirar(cantidad); break;
 		case 4: Cls(); menu(); break;  
		default: Gotoxy(5,12);cout<<"Opcion no valida";  
	}
 
	Gotoxy(5,46);system("pause");
	
	Cls();
	opc=0;	
			
	cajeroAutomatico();		  
  
}

void depositar(int cantidad)
{
	saldo_actual += cantidad;
	
    Gotoxy(5,14);cout<<"Has depositado exitosamente Q."<<cantidad<<endl;
	Gotoxy(5,15);cout<<"Tu saldo actual es de: Q."<<saldo_actual<<endl;
}
 

void retirar(int cantidad)
{
	if (cantidad <= saldo_actual) 
	{ 
		saldo_actual -= cantidad;
	 	Gotoxy(5,14);cout<<"Has retirado exitosamente Q."<<cantidad<<endl;
		Gotoxy(5,15);cout<<"Tu saldo actual es de: Q."<<saldo_actual<<endl;	
	}
	else
	{
		Gotoxy(5,14);cout<<"No tienes suficiente dinero, tu saldo actual es de: "<<saldo_actual<<endl;	
	} 
}
