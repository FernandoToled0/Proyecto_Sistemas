#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include "mis_funciones.h"
using namespace std;
void menu();

void par_impar(){

	
	int opc=0;
	int num=0;
	
	TextColor(10);
	
	Say(15,2,"---Par o Impar--"); 
	SetColorB(2,19);		  
	Rectangle(1,4,49,44,"#"); 
	SetColorA(2,22);  
	
	TextColor(7);
	Say(6,6,"--- Ingrese el numero a verificar ---");Gotoxy(23,8);  	
	cin>>num;	
	
	if(num % 2 ==0 ){
		Say(15,10,"El numero es par");Gotoxy(5,46);  
	}else{
		Say(15,10,"El numero es impar");Gotoxy(5,46);  
	}
	
	
	system("pause");
	Cls();
	opc=0;			
	menu();	
		
}
