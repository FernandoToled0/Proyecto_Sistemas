#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include "mis_funciones.h"


using namespace std;
int opc=0;

HANDLE wHnd;
MENU miMenu;

//-------------------AREA DE MENUS-----------------------//
void menu();
void conversionesMenu();
void operacionesMenu();
//-------------------FIN AREA DE MENUS------------------//


void suma();
void resta();
void multiplicacion();
void division();

void par_impar();
void palindromo();
void entero_letra();

main(){
	
	
	system("mode con: cols=51 lines=50");	
	menu();

}


void menu(){
  
  
  bool Salir=false;
  
  miMenu.Add_Items("1. Suma, Resta, Multiplicacion y Division",1);	
  miMenu.Add_Items("2. Numero par o impar",2);	
  miMenu.Add_Items("3. Conversor de medidas y peso ",3);	
  miMenu.Add_Items("4. palabra o numero palindromo",4);	
  miMenu.Add_Items("5. arabigos a romanos",5);	
  miMenu.Add_Items("6. numeros enteros a letras",6);	
  miMenu.Add_Items("7. numeros enteros con decimal a letras",7);	
  miMenu.Add_Items("8. tabla de multiplicar",8);	
  miMenu.Add_Items("9. tablas de multiplicar del 1 al 10",9);		
  miMenu.Add_Items("10. Grafica de multiplicacion",10);	
  miMenu.Add_Items("11. numeros decimales a binario",11);	
  miMenu.Add_Items("12. Numeros decimales a hexadecimales .",12);	
  miMenu.Add_Items("13. Figuras Geometricas Basicas",13);	
  miMenu.Add_Items("14. Punto en toda la pantalla",14);	
  miMenu.Add_Items("15. Cajero Automatico",15);	
  miMenu.Add_Items("16. Calcular la hipotenusa",16);	
  miMenu.Add_Items("17.",17);	
  miMenu.Add_Items("18.",18);	
  miMenu.Add_Items("19.",19);	
  miMenu.Add_Items("20.",20);	
  miMenu.Set_Space(2);


do{
	TextColor(10);
	Say(13,1,"Sistemas Multiples Algoritmos");
	Say(18,2,"<< 20 Sistemas >>");
	
	if(opc==0)
		{
		SetColorB(2,19);  
		Rectangle(1,4,49,44,"#"); 
		SetColorA(2,22);  
		Say(15,6,"*** MENU PRINCIPAL ***");
  		opc=miMenu.Draw(4,8);
	    }	
  				
   switch (opc) 
	  {     
			
			case 1:
			   Cls();
			   opc=0;
			   
			   operacionesMenu();	
			   
			case 2:
				Cls();
				opc=0;
				par_impar();	
			case 3:
				Cls();
				opc=0;
				conversionesMenu();
			case 4:
				Cls();
				opc=0;
				palindromo();
			case 6:
				Cls();
				opc=0;
				entero_letra();
			break;
			
	  }
  

}while(Salir==false);
  
}

