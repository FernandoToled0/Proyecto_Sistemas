#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include "mis_funciones.h"
#include <time.h>
#include <ctime>
#include<stdlib.h>


using namespace std;
void menu();

void random(){

	
	int opc=0, num, c;
	
	TextColor(10);
	
	Say(10,2,"---Numero random del 1 al 100--"); 
	SetColorB(2,19);		  
	Rectangle(1,4,49,44,"#"); 
	SetColorA(2,22);  
	
	TextColor(7);
	
    srand(time(NULL));
    
    for(c = 1; c <= 100; c++)
    {
        num = 1 + rand() % (101 - 1);
        Gotoxy(3,6);cout<<"El numero random es: " << num<< " (1-100) ";
    }
	
	
	Gotoxy(5,46);system("pause");
	Cls();
	opc=0;			
	menu();	
		
}

void fechas(){
	int opc=0;
	TextColor(10);
	
	Say(10,2,"---Calcular dos fechas--"); 
	SetColorB(2,19);		  
	Rectangle(1,4,49,44,"#"); 
	SetColorA(2,22);  
	
	TextColor(7);	    
	
	std::time_t t = std::time(0); // get time now 
	std::tm* now = std::localtime(&t); 
	
    
    struct std::tm a = {0,0,0,1,0,121}; 
    struct std::tm b = {0,0,0,now->tm_mday,now->tm_mon,121}; 
    std::time_t x = std::mktime(&a);
    std::time_t y = std::mktime(&b);
    if ( x != (std::time_t)(-1) && y != (std::time_t)(-1) )
    {
        double difference = std::difftime(y, x) / (60 * 60 * 24);
        Gotoxy(5,8);std::cout << std::ctime(&x);
        Gotoxy(5,9);std::cout << std::ctime(&y);
        Gotoxy(5,10);std::cout << "Diferencia = " << difference << " dias" << std::endl;
    }
    
     Gotoxy(5,12);std::cout <<"Fecha actual: "<< (now->tm_year + 1900) << '-' << (now->tm_mon + 1) << '-' << now->tm_mday << "\n";
    
   
	Gotoxy(5,46);system("pause");
	Cls();
	opc=0;			
	menu();	
		
}

void colores_letras(){
	int opc=0;
	TextColor(10);
	
	Say(17,2,"---Color de letra--"); 
	SetColorB(2,19);		  
	Rectangle(1,4,49,44,"#"); 
	SetColorA(2,22);  
	
	TextColor(7);
	 
	Gotoxy(15,6);cout<<"1. Rojo"<<endl;
	Gotoxy(15,7);cout<<"2. Verde"<<endl;
	Gotoxy(15,8);cout<<"3. Amarillo"<<endl;
	Gotoxy(15,9);cout<<"4. Salir"<<endl;
	Gotoxy(15,10);cout<<"Dijite su opcion: ";
	scanf("%i" , &opc); 
	
	switch(opc)
	{
		case 1: TextColor(4); Gotoxy(5,12);cout<<"Hola mundo"; break;
 		case 2: TextColor(2); Gotoxy(5,12);cout<<"Hola mundo"; break;
 		case 3: TextColor(14); Gotoxy(5,12);cout<<"Hola mundo"; break;
 		case 4: Cls(); menu(); break;  
		default: Gotoxy(5,12);cout<<"Opcion no valida";  
	}
    
    TextColor(7);
	Gotoxy(5,46);system("pause");
	Cls();
	opc=0;
	colores_letras();
		
}

void color_consola(){
	int opc=0;
	TextColor(10);
	
	Say(17,2,"---Color de letra--"); 
	SetColorB(2,19);		  
	Rectangle(1,4,49,44,"#"); 
	SetColorA(2,22);  
	
	TextColor(7);
	 
	Gotoxy(15,6);cout<<"1. Rojo"<<endl;
	Gotoxy(15,7);cout<<"2. Verde"<<endl;
	Gotoxy(15,8);cout<<"3. Amarillo"<<endl;
	Gotoxy(15,9);cout<<"4. Salir"<<endl;
	Gotoxy(15,10);cout<<"Dijite su opcion: ";
	scanf("%i" , &opc); 
	
	switch(opc)
	{
		case 1: system ("color 4C" ); break;
 		case 2: system ("color 2A" ); break;
 		case 3: system ("color 6E" ); break;
 		case 4: Cls(); menu(); break;  
		default: Gotoxy(5,12);cout<<"Opcion no valida";  
	}
    
    TextColor(7);
	Gotoxy(5,46);system("pause");
	system ("color 0" );
	Cls();
	opc=0;
	color_consola();
	
	
}
