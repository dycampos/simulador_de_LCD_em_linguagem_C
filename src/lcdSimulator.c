/*
 ============================================================================
 Name        : lcdSimulator.c
 Author      : DyCampos
 Description : Simulator LCD
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "lcd_simulator.h"

int main(void) {
	lcdBegin(16, 4);

	writeLCD(0, 2, "Simulador de LCD");
	//writeLCD(0, 1, "Hello World!!!");

	//clearPositionLCD(7, 2);
	printLCD();
	clearLCD();
	printLCD();

	return EXIT_SUCCESS;
}
