#include<time.h>
#include<stdio.h>
#include<dos.h>
#include<graphics.h>

void main(){
	time_t t1;
	struct tm*data;

	int hora = 0;
	int segundos = 0;
	t1 = time(NULL);

	while( 3 == 3){

		data = localtime(&t1);

		hora = data->tm_hour;
		segundos = data->tm_sec;

		printf(" teste do relogio: %02d\n",hora);
		printf(" mostra os segundos: %02d\n",segundos);
		delay(1000);
		cleardevice();



	}
}