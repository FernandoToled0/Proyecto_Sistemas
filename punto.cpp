#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <cmath>
#include "mis_funciones.h"
using namespace std;
void menu();

void gotoxy(int x , int y);
void punto_pantalla(){

	int x = 10 , y = 10;
    gotoxy(x,y);
    printf("*");

	TextColor(7);
	
	Say(1,1,"Use las flechas del teclado para mover la figura"); 
	
    while(1)
    {
        
        Sleep(100);
       
        if (GetAsyncKeyState(0x25)){
            
            gotoxy(x,y); printf(" ");            
            x--;    
            gotoxy(x,y); printf("*");

        }
        
        if (GetAsyncKeyState(0x27)){
            
            gotoxy(x,y); printf(" ");           
            x++;           
            gotoxy(x,y); printf("*");

        }
        
        if (GetAsyncKeyState(0x28)){            
            gotoxy(x,y); printf(" ");           
            y++;           
            gotoxy(x,y); printf("*");
        }
        
        if (GetAsyncKeyState(0x26)){            
            gotoxy(x,y); printf(" ");        
            y--;           
            gotoxy(x,y); printf("*");
        }
    }
}

void gotoxy(int x , int y){

HANDLE consola = GetStdHandle(STD_OUTPUT_HANDLE);

COORD pos;
pos.X = x;
pos.Y = y;

SetConsoleCursorPosition(consola,pos);

}
