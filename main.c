// main.c
// Runs on LM4F120/TM4C123
// UART runs at 115,200 baud rate 
// Daniel Valvano
// May 23, 2014

/* This example accompanies the books
"Embedded Systems: Introduction to ARM Cortex M Microcontrollers",
ISBN: 978-1469998749, Jonathan Valvano, copyright (c) 2014

"Embedded Systems: Real Time Interfacing to ARM Cortex M Microcontrollers",
ISBN: 978-1463590154, Jonathan Valvano, copyright (c) 2014
 
Copyright 2014 by Jonathan W. Valvano, valvano@mail.utexas.edu
You may use, edit, run or distribute this file
as long as the above copyright notice remains
		
Modified by NISI 11.10.2017 to demonstrate basic usage of pointers
 */

#include <stdio.h>
#include <stdint.h> // C99 variable types
void Output_Init(void);

int main(void){ 
	Output_Init();        // initialize output device

	uint16_t var	= 625;	//variable declaration - R value is 625
	uint16_t *ip;					//pointer variable declaration
	
	ip = &var;						//store address of var in pointer variable

  printf("Address of var1 variable: %#x\n", &var); //Address of var variable						
	printf("Value stored in ip variable: %#x\n", ip); //address stored in pointer variable	
	printf("Value of *ip variable: %d\n", *ip); //access the value using the pointer
	
	*ip = 84; //store new value to var through ip pointer 
	
	printf("New value of var is: %d\n", var);
	
	return 0;
}

