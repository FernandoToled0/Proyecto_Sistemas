#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <cmath>
#include "mis_funciones.h"
using namespace std;
void menu();


void hipotenusa(){

	
	int opc=0,opcion;
  	float cat1,cat2,hip;
	
	TextColor(10);
	
	Say(13,2,"---Calcular la Hipotenusa--"); 
	SetColorB(2,19);		  
	Rectangle(1,4,49,44,"#"); 
	SetColorA(2,22);  
	
	TextColor(7);
	do {
    
    Gotoxy(8,6);cout<<"1.Calcular Hipotenusa De Triangulo"<<endl;
	Gotoxy(8,7);cout<<"2.Salir"<<endl; 
    Gotoxy(15,9);cout<<"Dijite su opcion: ";cin>>opcion;
      
    switch(opcion) {
      case 1:  
        do {         
          
          Gotoxy(3,11);cout<<"Escribe la medida de los catetos"<<endl;
          Gotoxy(3,12);cout<<"Cateto 1: ";cin>>cat1;          
          Gotoxy(3,13);cout<<"Cateto 2: ";cin>>cat2;
                   
          if (cat1 > 0 && cat2 > 0) {
           
            hip = sqrt(pow(cat1,2.0)+ pow(cat2,2.0));
            Gotoxy(3,15);cout<<"La hipotenusa es: "<<sqrt(pow(cat1,2.0)+ pow(cat2,2.0))<<endl;
            Gotoxy(5,46);system("PAUSE");
            Cls();
            hipotenusa();
          }                   
          
          else{
          	
            Gotoxy(3,15);cout<<"Error,los catetos deben ser positivos"<<endl;
            Gotoxy(5,46);system("PAUSE");
            Cls();
            hipotenusa();
          }
        
        } while(cat1 <=0 || cat2 <= 0);
        break;
              
      case 2:
      	
      	Gotoxy(5,46);system("pause");
		Cls();
		opc=0;			
		menu();	
	
        break;
 
      default: 
        Gotoxy(3,11);cout<<"Opcion incorrecta"<<endl;
        Gotoxy(5,46);system("PAUSE"); 
		Cls();
        hipotenusa();                 
    }
  } while(opcion != 2);
	
	
	
		
}
