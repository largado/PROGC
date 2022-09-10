#include<stdio.h>
#include<time.h>
#include<dos.h>
#include<conio.h>

#define LPT1 0x378

void main(){

//	clrscr();

	unsigned char Valor=128;
	int pino=0;

	int agora = 0;
	int parar =22;

	time_t relogio;
	time_t timer;
	struct tm *hora;
	struct tm *tblock;

	while (agora != parar){
		relogio = time(NULL);
		timer = time(NULL);
		hora = localtime(&relogio);
		tblock = localtime(&timer);
		printf("variavel tblock: %s\n", asctime(tblock) );
		printf("\n");
		printf("hora de agora: %s\n", hora->tm_hour);
		agora = hora->tm_hour;
		printf("agora %s\n",agora);
		delay(1000);
	}




	while( Valor > 0)
	{
		outportb(LPT1, Valor);
		printf("pressione qualquer tecla\n");
		//getch();
		delay(1000);
		printf("pino: %d ",pino);
		Valor = Valor >> 1;
		pino = pino + 1;

	}
}