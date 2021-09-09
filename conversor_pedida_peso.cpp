#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include "mis_funciones.h"

using namespace std;
MENU conversorMenu;

void menu();
void conversionesMenu();
void peso_Distancia(string tipo,const char *titulo);

void conversionesMenu()
{
int opc=0;
TextColor(10);
Say(6,2,"*** Conversor de medidas y peso ***"); 

  bool Salir=false;
  
  conversorMenu.Add_Items("1. Kilometros a Millas",1);	
  conversorMenu.Add_Items("2. Millas a Kilometros",2);	
  conversorMenu.Add_Items("3. Metros a Pulgadas ",3);	
  conversorMenu.Add_Items("4. Pulgadas a Metros",4);	
  conversorMenu.Add_Items("5. Libras a Kilos",5);
  conversorMenu.Add_Items("6. Kilos a Libras",6);
  conversorMenu.Add_Items("7. Regresar",7);
  conversorMenu.Set_Space(2);
  
	if(opc==0)
		{
			
		SetColorB(2,19);
		  
		Rectangle(1,4,49,44,"#"); 
		SetColorA(2,22);  
		
		Say(9,6,"*** Seleccione la conversion ***");
  		opc=conversorMenu.Draw(4,9);
	    }	
  				
   switch (opc) 
	  {     
			case 1:
				Cls();
				opc=0;
				peso_Distancia("km_Mi","Kilometros a Millas");		
			case 2:
				Cls();
				opc=0;
				peso_Distancia("mi_Km","Millas a Kilometros");
			case 3:
				Cls();
				opc=0;
				peso_Distancia("mts_Pulg","Metros a Pulgadas");
			case 4:
				Cls();
				opc=0;
				peso_Distancia("pulg_mts","Pulgadas a Metros");
			case 5:
				Cls();
				opc=0;
				peso_Distancia("lbs_kls","Libras a Kilos");
			case 6:
				Cls();
				opc=0;
				peso_Distancia("kls_lbs","Kilos a Libras");					
			case 7:				
				Cls();
				opc=0;
				menu();			  
			break;
			
	  }   	  	  
}

void peso_Distancia(string tipo,const char *titulo){
	
	int opc=0;
	float num=0, resultado=0;
	
	TextColor(10);
	
	Say(16,2,titulo); 
	SetColorB(2,19);		  
	Rectangle(1,4,49,44,"#"); 
	SetColorA(2,22);  
	
	TextColor(7);
	Say(6,6,"--- Ingrese el valor a convertir ---");Gotoxy(23,8);  	
	cin>>num;
	
	if (tipo=="km_Mi") {
		resultado = (num * 0.621371);
		Say(9,10,"La conversion de KM a MI es:");Gotoxy(20,12);
	}else if (tipo=="mi_Km") {
		resultado = (num * 1.60934);
		Say(9,10,"La conversion de MI a KM es:");Gotoxy(20,12);
	}else if (tipo=="mts_Pulg") {
		resultado = (num * 39.3701);
		Say(9,10,"La conversion de Mts a Pulg es:");Gotoxy(20,12);
	}else if (tipo=="pulg_mts") {
		resultado = (num * 0.025400013716);
		Say(9,10,"La conversion de Pulg a Mts es:");Gotoxy(20,12);
	}else if (tipo=="lbs_kls") {
		resultado = (num * 0.453592);
		Say(9,10,"La conversion de LBS a KLS es:");Gotoxy(20,12);
	}else if (tipo=="kls_lbs") {
		resultado = (num * 2.20462);
		Say(9,10,"La conversion de KLS a LBS es:");Gotoxy(20,12);
	}
	
	
	  
	cout<<resultado<<endl;Gotoxy(5,46);  
		
	system("pause");
	Cls();
	opc=0;			
	conversionesMenu();
		
}
