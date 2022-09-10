#include<stdio.h>
#include<time.h>
#include<dos.h>
#include<conio.h>

void main(){

//	clrscr();
	int agora = 0;
	int parar =13;

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

	printf("ja deu o horario vou lidar a maquina\n");



}