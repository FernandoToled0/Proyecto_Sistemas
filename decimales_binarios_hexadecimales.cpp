#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cstring>
#include <sstream>
#include <cstdlib>
#include <windows.h>
#include "mis_funciones.h"

using namespace std;

void menu();
void binario();
void print_hex(int value);

string toBinary(int n);


void binario(){
	
	int opc=0;
	float num=0;
	
	TextColor(10);
	
	Say(15,2,"---Decimal a binario--"); 
	SetColorB(2,19);		  
	Rectangle(1,4,49,44,"#"); 
	SetColorA(2,22);  
	
	TextColor(7);
	Say(3,6,"Ingrese el numero a convertir: ");Gotoxy(3,7);  	
	cin>>num;

	Say(3,10,"El numero binario es:");Gotoxy(3,11);  
	cout<<toBinary(num)<<endl;
	
	Gotoxy(5,46);  		
	system("pause");
	
	Cls();
	opc=0;	
	menu();			
			
}

void hexadecimal(){
	
	int opc=0;	
	long dec;
	
	TextColor(10);
	
	Say(15,2,"---Decimal a binario--"); 
	SetColorB(2,19);		  
	Rectangle(1,4,49,44,"#"); 
	SetColorA(2,22);  
	
	TextColor(7);
	Say(3,6,"Ingrese el numero a convertir: ");Gotoxy(3,7);  	
	cin >> dec;
	
	Say(3,10,"El numero hexadecimal es:");Gotoxy(3,11);  
	print_hex(dec);			
	
	Gotoxy(5,46);  		
	system("pause");
	
	Cls();
	opc=0;	
	menu();			
			
}

string toBinary(int n)
{
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    return r;
}

void print_hex(int value)
{
    if (value == 0)
        return;

    int rem = value % 16;
    value /= 16;
    print_hex(value); 

   	
    if (rem > 9)
    	
        cout << (char)(rem - 10 + 'A');
    else
    	  
        cout << rem;
}


