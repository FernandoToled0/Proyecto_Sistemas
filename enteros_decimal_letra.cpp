#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include "mis_funciones.h"
#include <sstream>

void menu();

using namespace std;

void entero_letra_decimales(){
	
	int x,y, opc;
	string numero, centena, decena, unidad,centena2, decena2, unidad2;
	
	TextColor(10);
	
	Say(17
	,2,"---Enteros con decimal a letras--"); 
	SetColorB(2,19);		  
	Rectangle(1,4,49,44,"#"); 
	SetColorA(2,22);  
	
	TextColor(7);
	Say(6,6,"--- ingrese un numero con decimal ---");Gotoxy(23,8);  
		
	cin>>numero;
		 
   	string line = numero;   	   
    string str2 = ".";
    string str3 = " ";
    int n=0;
    
    while(n==0)
	{ 
        string::size_type pos= line.find (str2, 0); 
        if (pos==string::npos) break; 
        line.replace (pos, 1, str3);      
    }
    
    int arr[2];
    int i = 0;
    stringstream ssin(line);
    while (ssin.good() && i < 4){
        ssin >> arr[i];
        ++i;
    }       
    	x = arr[0];
    	
        if(x>=900)   {centena = "NOVECIENTOS " ;x=x-900;}
       else if(x>=800)   {centena = "OCHOCIENTOS " ;x=x-800;}
       else if(x>=700)   {centena = "SETECIENTOS " ;x=x-700;}
       else if(x>=600)   {centena = "SEISCIENTOS " ;x=x-600;}
       else if(x>=500)   {centena = "QUINIENTOS "  ;x=x-500;}
       else if(x>=400)   {centena = "CUATROCIENTOS "   ;x=x-400;}
       else if(x>=300)   {centena = "TRESCIENTOS " ;x=x-300;}
       else if(x>=200)   {centena = "DOSCIENTOS "  ;x=x-200;}
       else if(x>100)    {centena = "CIENTO "  ;x=x-100;}
       else if(x==100)   {centena = "CIEN"     ;x=x-100;}
       
        if(x>90) {decena = "NOVENTA Y "   ;x=x-90; }
            if(x==90)   {decena = "NOVENTA"  ;x=x-90; }  
            if(x>80) {decena = "OCHENTA Y "   ;x=x-80; }
            if(x==80)   {decena = "OCHENTA"  ;x=x-80; }
            if(x>70) {decena = "SETENTA Y "   ;x=x-70; }
            if(x==70)   {decena = "SETENTA"  ;x=x-70; }
            if(x>60) {decena = "SESENTA Y "   ;x=x-60; }
            if(x==60)   {decena = "SESENTA"  ;x=x-60; }
            if(x>50) {decena = "CINCUENTA Y " ;x=x-50; }
            if(x==50)   {decena = "CINCUENTA"    ;x=x-50; }
            if(x>40) {decena = "CUARENTA Y "  ;x=x-40; }
            if(x==40)   {decena = "CUARENTA" ;x=x-40; }
            if(x>30) {decena = "TREINTA Y "   ;x=x-30; }
            if(x==30)   {decena = "TREINTA"  ;x=x-30; }
            if(x>20) {decena = "VEINTI"       ;x=x-20; }
            if(x==20)   {decena = "VEINTE"       ;x=x-20; }
        if(x>=16)    {decena = "DIECI"        ;x=x-10; }
       else if(x==15)   {decena = "QUINCE"       ;x=x-15; }
       else if(x==14)   {decena = "CATORCE"  ;x=x-14; }
       else if(x==13)   {decena = "TRECE"        ;x=x-13; } 
       else if(x==12)   {decena = "DOCE"     ;x=x-12; }
       else if(x==11)   {decena = "ONCE"     ;x=x-11; }
       else if(x==10)   {decena = "DIEZ"     ;x=x-10; }      
        if(x==9)    {decena = "NUEVE"        ;x=x-9;  }
        if(x==8)    {decena = "OCHO"     ;x=x-8;  }
        if(x==7)    {decena = "SIETE"        ;x=x-7;  }
            if(x==6)    {unidad = "SEIS"     ;x=x-6;  }
       else if(x==5)    {unidad = "CINCO"        ;x=x-5;  }
       else if(x==4)    {unidad = "CUATRO"       ;x=x-4;  }
       else if(x==3)    {unidad = "TRES"     ;x=x-3;  }
       else if(x==2)    {unidad = "DOS"      ;x=x-2;  }
       else if(x==1)    {unidad = "UNO"      ;x=x-1;  }
       
       y = arr[1];
       
		    if(y>=900)   {centena2 = "NOVECIENTOS " ;y=y-900;}
       else if(y>=800)   {centena2 = "OCHOCIENTOS " ;y=y-800;}
       else if(y>=700)   {centena2 = "SETECIENTOS " ;y=y-700;}
       else if(y>=600)   {centena2 = "SEISCIENTOS " ;y=y-600;}
       else if(y>=500)   {centena2 = "QUINIENTOS "  ;y=y-500;}
       else if(y>=400)   {centena2 = "CUATROCIENTOS "   ;y=y-400;}
       else if(y>=300)   {centena2 = "TRESCIENTOS " ;y=y-300;}
       else if(y>=200)   {centena2 = "DOSCIENTOS "  ;y=y-200;}
       else if(y>100)    {centena2 = "CIENTO "  ;y=y-100;}
       else if(y==100)   {centena2 = "CIEN"     ;y=y-100;}
       
        if(y>90) {decena2 = "NOVENTA Y "   ;y=y-90; }
            if(y==90)   {decena2 = "NOVENTA"  ;y=y-90; }  
            if(y>80) {decena2 = "OCHENTA Y "   ;y=y-80; }
            if(y==80)   {decena2 = "OCHENTA"  ;y=y-80; }
            if(y>70) {decena2 = "SETENTA Y "   ;y=y-70; }
            if(y==70)   {decena2 = "SETENTA"  ;y=y-70; }
            if(y>60) {decena2 = "SESENTA Y "   ;y=y-60; }
            if(y==60)   {decena2 = "SESENTA"  ;y=y-60; }
            if(y>50) {decena2 = "CINCUENTA Y " ;y=y-50; }
            if(y==50)   {decena2 = "CINCUENTA"    ;y=y-50; }
            if(y>40) {decena2 = "CUARENTA Y "  ;y=y-40; }
            if(y==40)   {decena2 = "CUARENTA" ;y=y-40; }
            if(y>30) {decena2 = "TREINTA Y "   ;y=y-30; }
            if(y==30)   {decena2 = "TREINTA"  ;y=y-30; }
            if(y>20) {decena2 = "VEINTI"       ;y=y-20; }
            if(y==20)   {decena2 = "VEINTE"       ;y=y-20; }
        if(y>=16)    {decena2 = "DIECI"        ;y=y-10; }
       else if(y==15)   {decena2 = "QUINCE"       ;y=y-15; }
       else if(y==14)   {decena2 = "CATORCE"  ;y=y-14; }
       else if(y==13)   {decena2 = "TRECE"        ;y=y-13; } 
       else if(y==12)   {decena2 = "DOCE"     ;y=y-12; }
       else if(y==11)   {decena2 = "ONCE"     ;y=y-11; }
       else if(y==10)   {decena2 = "DIEZ"     ;y=y-10; }      
        if(y==9)    {decena2 = "NUEVE"        ;y=y-9;  }
        if(y==8)    {decena2 = "OCHO"     ;y=y-8;  }
        if(y==7)    {decena2 = "SIETE"        ;y=y-7;  }
            if(y==6)    {unidad2 = "SEIS"     ;y=y-6;  }
       else if(y==5)    {unidad2 = "CINCO"        ;y=y-5;  }
       else if(y==4)    {unidad2 = "CUATRO"       ;y=y-4;  }
       else if(y==3)    {unidad2 = "TRES"     ;y=y-3;  }
       else if(y==2)    {unidad2 = "DOS"      ;y=y-2;  }
       else if(y==1)    {unidad2 = "UNO"      ;y=y-1;  }
    
    ;Gotoxy(3,10);
    cout<<centena<<decena<<unidad<<" PUNTO "<<centena2<<decena2<<unidad2<<endl;
    

	;Gotoxy(5,46); 
	system("pause");
	Cls();
	opc=0;			
	menu();	
		
}
