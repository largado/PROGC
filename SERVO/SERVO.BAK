#include<stdio.h>
#include<dos.h>
#include<conio.h>

#define LPT1 0x378

void main(){
	unsigned char Valor=128;
	int pino=0;

	while(Valor > 0){

		outportb(LPT1, Valor);
		printf("pressione qualquer tecla\n");
		//getch();
		printf("vou acender o pino : %d \n",pino);
		//Valor = Valor >> 1;
		//delay(2); // 2 mile segundos
		delay(1); // 1 mile segundos
		delay(1.5); // 1,5 mile segundos
		pino = pino + 1;
		printf("acendi mais um \n");
		//getch();
		Valor = Valor >> 1;
	}
	Valor = Valor >> 1;
	outportb(LPT1, Valor);

}