#include<stdio.h>
#include<dos.h>
#include<conio.h>

#define LPT1 0x378

void main(){

	//clrscr();
	unsigned char Valor=128;
	int pino=0;
	while( Valor > 0)
	{
		outportb(LPT1, Valor);
		printf("incrementando mais um \n");
		delay(1000);
		printf("pino: %d ",pino);
		Valor = Valor >> 1;
		pino = pino + 1;

	}

	  Valor = Valor >> 1;
	  outportb(LPT1, Valor);
	  clrscr();


 }