#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include "mis_funciones.h"
using namespace std;
void menu();

void arabigos_Romanos(){

	
	int numero, unidades, decenas, centenas, millares, opc;
	
	TextColor(10);
	
	Say(17
	,2,"---Arabigos a romanos--"); 
	SetColorB(2,19);		  
	Rectangle(1,4,49,44,"#"); 
	SetColorA(2,22);  
	
	TextColor(7);
	Say(6,6,"--- ingrese un numero a convertir ---");Gotoxy(23,8);  
		
	cin>> numero;
	
	unidades = numero % 10; numero /= 10;
	decenas = numero % 10; numero /= 10;
	centenas = numero % 10; numero /= 10;
	millares = numero % 10; numero /= 10;
	
	;Gotoxy(23,10);
	
		switch (millares)
	 {
	  case 1: cout<<"M"; break;
	  case 2: cout<<"MM"; break;
	  case 3: cout<<"MMM"; break;
	 }
	 
	 switch (centenas)
	 {
	  case 1: cout<<"C"; break;
	  case 2: cout<<"CC"; break;
	  case 3: cout<<"CCC"; break;
	  case 4: cout<<"CD"; break;
	  case 5: cout<<"D"; break;
	  case 6: cout<<"DC"; break;
	  case 7: cout<<"DCC"; break;
	  case 8: cout<<"DCCC"; break;
	  case 9: cout<<"CM"; break; 
	 }
	 
	 switch (decenas)
	 {
	  case 1: cout<<"X"; break;
	  case 2: cout<<"XX"; break;
	  case 3: cout<<"XXX"; break;
	  case 4: cout<<"XL"; break;
	  case 5: cout<<"L"; break;
	  case 6: cout<<"LX"; break;
	  case 7: cout<<"LXX"; break;
	  case 8: cout<<"LXXX"; break;
	  case 9: cout<<"XC"; break; 
	 }
	 
	 switch (unidades)
	 {
	  case 1: cout<<"I"; break;
	  case 2: cout<<"II"; break;
	  case 3: cout<<"III"; break;
	  case 4: cout<<"IV"; break;
	  case 5: cout<<"V"; break;
	  case 6: cout<<"VI"; break;
	  case 7: cout<<"VII"; break;
	  case 8: cout<<"VIII"; break;
	  case 9: cout<<"IX"; break;
	 }
	

	;Gotoxy(5,46); 
	system("pause");
	Cls();
	opc=0;			
	menu();	
		
}
