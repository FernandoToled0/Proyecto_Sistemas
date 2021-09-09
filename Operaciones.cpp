#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include "mis_funciones.h"

using namespace std;
MENU OperacionesMenu;


void menu();
void operacion(char operador,const char *titulo);
void operacionesMenu();

void operacionesMenu()
{


int opc=0;
TextColor(10);
Say(3,2,"*** Suma, Resta, Multiplicacion y Division ***"); 

  bool Salir=false;
  
  OperacionesMenu.Add_Items("1. Suma",1);	
  OperacionesMenu.Add_Items("2. Resta",2);	
  OperacionesMenu.Add_Items("3. Multiplicacion ",3);	
  OperacionesMenu.Add_Items("4. Division",4);	
  OperacionesMenu.Add_Items("5. Regresar",5);
  OperacionesMenu.Set_Space(2);
  
	if(opc==0)
		{
			
		SetColorB(2,19);
		  
		Rectangle(1,4,49,44,"#"); 
		SetColorA(2,22);  
		
		Say(9,6,"*** Seleccione la operacion ***");
  		opc=OperacionesMenu.Draw(4,9);
	    }	
  			
			  
   switch (opc) 
	  {     
			
			case 1:
			Cls();
			operacion('+',"--- Suma ---");
			break;
			   
			case 2:
			Cls();
			operacion('-',"--- Resta ---");
			break;
			
			case 3:
			Cls();
			operacion('*',"Multiplicacion");
			break;
			
			case 4:				
				Cls();
				operacion('/',"Division");			
			break;
			
			case 5:				
				Cls();				
				menu();			  
				
			break;
			
	  }   	  	  
}

void operacion(char operador,const char *titulo){
	
	int opc=0;
	float num=0, num2=0, resultado=0;
	
	TextColor(10);
	
	Say(20,2,titulo); 
	SetColorB(2,19);		  
	Rectangle(1,4,49,44,"#"); 
	SetColorA(2,22);  
	
	TextColor(7);
	Say(9,6,"--- Ingrese el primer valor ---");Gotoxy(23,8);  	
	cin>>num;
	Say(9,10,"--- Ingrese el segundo valor ---");Gotoxy(23,12);  	
	cin>>num2;
	
	switch (operador){
		case '+':
			resultado = num + num2;
		break;
		case '-':
			resultado = num - num2;
		break;
		case '*':
			resultado = (num * num2);
		break;
		case '/':
			resultado = (num / num2);
		break;
	}
	
	Say(9,14,"El resultado de la operacion es:");Gotoxy(23,16);  
	cout<<resultado<<endl;Gotoxy(5,46);  
		
	system("pause");
	
	Cls();
	opc=0;	
			
	operacionesMenu();
	
		
}


