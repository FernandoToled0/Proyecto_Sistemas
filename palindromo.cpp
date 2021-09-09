#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include "mis_funciones.h"
using namespace std;
void menu();

void palindromo(){

	string texto;
    int aux = 0, igual = 0, opc = 0;
	
	TextColor(10);
	
	Say(17
	,2,"---Palindromo--"); 
	SetColorB(2,19);		  
	Rectangle(1,4,49,44,"#"); 
	SetColorA(2,22);  
	
	TextColor(7);
	Say(6,6,"--- Ingrese la palabra a evaluar: ---");Gotoxy(23,8);  	
	getline(cin >> ws, texto);
    
    for(int ind = texto.length() - 1; ind >= 0; ind--) {
        if(texto[ind] == texto[aux]) {
            igual++;
        }
        aux++;
    }
	
	if(texto.length() == igual) {
        Say(17
		,10,"Es palindromo");Gotoxy(5,46);  
    } else {
        Say(17,10,"No es palindromo");Gotoxy(5,46);  
    }	
	
	
	system("pause");
	Cls();
	opc=0;			
	menu();	
		
}
