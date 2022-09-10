#include<stdio.h>
#include<dos.h>
#include<time.h>

/* Autor: Alexandro Avena
   Versao: 0.1
   Descritivo: tomar alguma acao em um determinado horario
*/

int main(){

	time_t ligar = time(NULL);
	time_t horario = time(NULL);
	int ligar1 = 19;

	struct tm tm = *localtime(&horario);

	ligar = tm.tm_hour;

	while (ligar != ligar1) {
		printf("horario que eu peguei do sistema : %02d:%02d:%02d\n",tm.tm_hour,tm.tm_min,tm.tm_sec);
		printf("ainda nao de o horario:  %d\n",ligar1);
		delay(10000);
		ligar = tm.tm_hour;
		printf("%d\n",ligar);

	}


	//aqui vai o bloco que liga o atuador
	printf("deu o horario %02d\n: ",tm.tm_hour);

	printf("sai do loop while, agora vai o bloco que liga o atuador\n");






 return 0;
}