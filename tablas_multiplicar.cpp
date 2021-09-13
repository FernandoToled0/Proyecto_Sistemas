#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include "mis_funciones.h"
using namespace std;
void menu();

void tabla_Multiplicar(){

	int numero, opc;
	
	TextColor(10);
	
	Say(17,2,"---tabla de multiplicar--"); 
	SetColorB(2,19);		  
	Rectangle(1,4,49,44,"#"); 
	SetColorA(2,22);  
	
	TextColor(7);
	Say(6,6,"--- ingrese el numero de la tabla ---");Gotoxy(23,8);  
		
	do{
	
		cin>>numero;
				
	}while((numero<1) || (numero>10));
			
	for(int i=1; i<=10; i++){
		switch (i){
			case 1:
				Gotoxy(20,i + 9);
				break;
			case 2:
				Gotoxy(20,i + 9);
				break;
			case 3:
				Gotoxy(20,i + 9);
				break;
			case 4:
				Gotoxy(20,i + 9);
				break;
			case 5:
				Gotoxy(20,i + 9);
				break;
			case 6:
				Gotoxy(20,i + 9);
				break;
			case 7:
				Gotoxy(20,i + 9);
				break;
			case 8:
				Gotoxy(20,i + 9);
				break;
			case 9:
				Gotoxy(20,i + 9);
				break;
			case 10:
				Gotoxy(20,19);
				break;
		}
		
		cout<<numero<<" * "<<i<<" = "<<numero * i<<endl;
	}
	
	Gotoxy(5,46); 
	system("pause");
	Cls();
	opc=0;			
	menu();	
		
}

void toda_Multiplicar(){

	int opc;
	
	TextColor(10);
	
	Say(13,2,"---todas las tablas de multiplicar--"); 
	SetColorB(2,19);		  
	Rectangle(1,4,49,44,"#"); 
	SetColorA(2,22);  
	
	TextColor(7);
	for(int n=1; n<=9; n++){
			int x,y;
			switch (n)
			{
				case 1:
					x = 3;
					y = 5;
					break;
				case 2:
					x = 19;
					y = 5;
					break;
				case 3:
					x = 35;
					y = 5;
					break;
				case 4:
					x = 3;
					y = 16;
					break;
				case 5:
					x = 19;
					y = 16;
					break;
				case 6:
					x = 35;
					y = 16;
					break;
				case 7:
					x = 3;
					y = 27;
					break;
				case 8:
					x = 19;
					y = 27;
					break;
				case 9:
					x = 35;
					y = 27;
					break;
			}
			
		for(int i=1; i<=10; i++){
			
			switch (i){
				case 1:
					Gotoxy(x,i + y);
					break;
				case 2:
					Gotoxy(x,i + y);
					break;
				case 3:
					Gotoxy(x,i + y);
					break;
				case 4:
					Gotoxy(x,i + y);
					break;
				case 5:
					Gotoxy(x,i + y);
					break;
				case 6:
					Gotoxy(x,i + y);
					break;
				case 7:
					Gotoxy(x,i + y);
					break;
				case 8:
					Gotoxy(x,i + y);
					break;
				case 9:
					Gotoxy(x,i + y);
					break;
				case 10:
					Gotoxy(x,i + y);
					break;
			}
			
			cout<<n<<" * "<<i<<" = "<<n * i<<endl;
		}
		
		for(int i=1; i<=10; i++){
			
			switch (i){
				case 1:
					Gotoxy(8,i + 38);
					break;
				case 2:
					Gotoxy(8,i + 38);
					break;
				case 3:
					Gotoxy(8,i + 38);
					break;
				case 4:
					Gotoxy(8,i + 38);
					break;
				case 5:
					Gotoxy(8,i + 38);
					break;
				case 6:
					Gotoxy(26,i + 33);
					break;
				case 7:
					Gotoxy(26,i + 33);
					break;
				case 8:
					Gotoxy(26,i + 33);
					break;
				case 9:
					Gotoxy(26,i + 33);
					break;
				case 10:
					Gotoxy(26,i + 33);
					break;
			}
			
			cout<<10<<" * "<<i<<" = "<<10 * i<<endl;
		}
	
	}
	

	Gotoxy(5,46); 
	system("pause");
	Cls();
	opc=0;			
	menu();	
		
}
