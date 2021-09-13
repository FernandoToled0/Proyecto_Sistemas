#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include "mis_funciones.h"

#define N 100

using namespace std;

void menu();

void multiplicacion_Manual(){
	
  	int i, n, m, opc = 0;
    float multiplicando;
    char digitos[N];
    char digitosMultiplicando[N];
	
	TextColor(10);
	
	Say(17,2,"---Grafica de multiplicacion--"); 
	SetColorB(2,19);		  
	Rectangle(1,4,49,44,"#"); 
	SetColorA(2,22);  
	
	TextColor(7);
   Gotoxy(3,5);cout<<"Escribe el multiplicando: ";   
      

   scanf ("%s",digitos);   
   fflush( stdout );
   Gotoxy(3,6); printf( "Escribe el multiplicador: ", N );
  
   scanf ("%s",digitosMultiplicando);   
   
   for (n=0;digitos[n]!='\0';n++);
   for (m=1;digitosMultiplicando[m]!='\0';m++);
    
	cout<<endl;
  
   for (i=0;i<n;i++){   	   	
		switch (m){
	   	case 1: Gotoxy(11+i,7);cout<<digitos[i]; break;
	   	case 2: Gotoxy(12+i,7);cout<<digitos[i]; break;
	   	case 3: Gotoxy(13+i,7);cout<<digitos[i]; break;
	   	case 4: Gotoxy(14+i,7);cout<<digitos[i]; break;
	   	case 5: Gotoxy(15+i,7);cout<<digitos[i]; break;
	   	case 6: Gotoxy(16+i,7);cout<<digitos[i]; break;
	   	case 7: Gotoxy(17+i,7);cout<<digitos[i]; break;
	   	case 8: Gotoxy(18+i,7);cout<<digitos[i]; break;
	   	case 9: Gotoxy(19+i,7);cout<<digitos[i]; break;
	   }           	
   }    
   
  cout<<endl;
  Gotoxy(9,8);cout<<"X";
  
   for (i=0;i<m;i++){   	
	   switch (n){
	   	
	   	case 1: Gotoxy(11+i,8);cout<<digitosMultiplicando[i]; break;
	   	case 2: Gotoxy(12+i,8);cout<<digitosMultiplicando[i]; break;
	   	case 3: Gotoxy(13+i,8);cout<<digitosMultiplicando[i]; break;
	   	case 4: Gotoxy(14+i,8);cout<<digitosMultiplicando[i]; break;
	   	case 5: Gotoxy(15+i,8);cout<<digitosMultiplicando[i]; break;
	   	case 6: Gotoxy(16+i,8);cout<<digitosMultiplicando[i]; break;
	   	case 7: Gotoxy(17+i,8);cout<<digitosMultiplicando[i]; break;
	   	case 8: Gotoxy(18+i,8);cout<<digitosMultiplicando[i]; break;
	   	case 9: Gotoxy(19+i,8);cout<<digitosMultiplicando[i]; break;
	   	
	   }   		 	
   }
   
   	Gotoxy(5,9);cout<<"-----------------";
   	
   	for (i=0;i<m;i++){   		
	    multiplicando = digitosMultiplicando[m - i - 1] - '0';
	    switch (n)
		{
		    case 1: Gotoxy(11-i,10+i);cout<<atoi(digitos) * multiplicando; break;
		   	case 2: Gotoxy(12-i,10+i);cout<<atoi(digitos) * multiplicando; break;
		   	case 3: Gotoxy(13-i,10+i);cout<<atoi(digitos) * multiplicando; break;
		   	case 4: Gotoxy(14-i,10+i);cout<<atoi(digitos) * multiplicando; break;
		   	case 5: Gotoxy(15-i,10+i);cout<<atoi(digitos) * multiplicando; break;
		   	case 6: Gotoxy(16-i,10+i);cout<<atoi(digitos) * multiplicando; break;
		   	case 7: Gotoxy(17-i,10+i);cout<<atoi(digitos) * multiplicando; break;
		   	case 8: Gotoxy(18-i,10+i);cout<<atoi(digitos) * multiplicando; break;
		   	case 9: Gotoxy(19-i,10+i);cout<<atoi(digitos) * multiplicando; break;
	    }			   				   	   		 	
   }
   
   Gotoxy(5,9 + m + 1);cout<<"-----------------";
   Gotoxy(5,9 + m + 2);cout<<atoi(digitos) * atoi(digitosMultiplicando);
         
	
	Gotoxy(5,46);  
	system("pause");
	Cls();
	opc=0;			
	menu();	
		
}
