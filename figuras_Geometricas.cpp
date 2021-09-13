#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include "mis_funciones.h"
#include<stdio.h>
#include<conio.h>
#include<dos.h>

using namespace std;
MENU FigurasMenu;


void menu();
void Circulo();
void cuadrado();
void triangulo();
void figurasMenu();
void rectangulo();

void figurasMenu()
{


int opc=0;
TextColor(10);
Say(13,2,"*** Figuras geometricas ***"); 

  bool Salir=false;
  
  FigurasMenu.Add_Items("1. Circulo",1);	
  FigurasMenu.Add_Items("2. Cuadrado",2);	
  FigurasMenu.Add_Items("3. Triangulo ",3);	
  FigurasMenu.Add_Items("4. Rectangulo",4);	
  FigurasMenu.Add_Items("5. Regresar",5);
  FigurasMenu.Set_Space(2);
  
	if(opc==0)
		{
			
		SetColorB(2,19);
		  
		Rectangle(1,4,49,44,"#"); 
		SetColorA(2,22);  
		
		Say(13,6,"*** Seleccione la figura ***");
  		opc=FigurasMenu.Draw(4,9);
	    }	
  			
			  
   switch (opc) 
	  {     
			
			case 1:
				Cls();
				Circulo();
			break;
			   
			case 2:
				Cls();
				cuadrado();
			break;
			
			case 3:
				Cls();
				triangulo();
			break;
			
			case 4:				
				Cls();
				rectangulo();
			break;
			
			case 5:				
				Cls();				
				menu();			  
				
			break;
			
	  }   	  	  
}

void Circulo(){
	
	int opc=0;	
	int x[20] = { 7 ,15 ,19 ,23 ,25 ,27 ,27 ,27 ,27 ,25 ,23 ,19 ,15 ,7 };
	int col[20] = { 11 ,7 ,5 ,3 ,2 ,1 ,1 ,1 ,1 ,2 ,3 ,5 ,7 ,11 };
	
	int i,j;
	
	int temp=0,fil=5;
	
		
		for(j=0 ; j<14 ; j++, temp++,fil++)
		{
		   for(i=0 ; i<x[temp] ; i++)
		   {
		       Gotoxy(col[temp]+10,fil);printf("*"); 
		       col[temp]++;
		   }
		}
	
	Gotoxy(5,46); 
	system("pause");
	
	Cls();
	opc=0;	
			
	figurasMenu();		
}

void cuadrado(){
	
	int opc=0;	
	int x[20] = { 27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 };
	int col[20] = { 1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 };
	
	int i,j;
	
	int temp=0,fil=5;
	
		
		for(j=0 ; j<14 ; j++, temp++,fil++)
		{
		   for(i=0 ; i<x[temp] ; i++)
		   {
		       Gotoxy(col[temp]+10,fil);printf("*"); 
		       col[temp]++;
		   }
		}
	
	Gotoxy(5,46); 
	system("pause");
	
	Cls();
	opc=0;	
			
	figurasMenu();		
}

void triangulo(){
	
	int opc=0;	
	int x[20] = { 1, 3 ,5 ,7 ,9 ,11 ,13 ,15 ,17 ,19 ,21 ,23 ,25 ,27 };
	int col[20] = { 14 ,13 ,12 ,11 ,10 ,9 ,8 ,7 ,6 ,5 ,4 ,3 ,2 ,1 };
	
	int i,j;
	
	int temp=0,fil=5;
	
		
		for(j=0 ; j<14 ; j++, temp++,fil++)
		{
		   for(i=0 ; i<x[temp] ; i++)
		   {
		       Gotoxy(col[temp]+10,fil);printf("*"); 
		       col[temp]++;
		   }
		}
	
	Gotoxy(5,46); 
	system("pause");
	
	Cls();
	opc=0;	
			
	figurasMenu();		
}

void rectangulo(){
	
	int opc=0;	
	int x[20] = { 27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 };
	int col[20] = { 1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 };
	
	int i,j;
	
	int temp=0,fil=5;
	
		
		for(j=0 ; j<7 ; j++, temp++,fil++)
		{
		   for(i=0 ; i<x[temp] ; i++)
		   {
		       Gotoxy(col[temp]+10,fil);printf("*"); 
		       col[temp]++;
		   }
		}
	
	Gotoxy(5,46); 
	system("pause");
	
	Cls();
	opc=0;	
			
	figurasMenu();		
}



