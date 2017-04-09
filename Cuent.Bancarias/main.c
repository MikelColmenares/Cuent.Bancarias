/*
 * main.c
 *
 *  Created on: 9 de abr. de 2017
 *      Author: 15mik
 */
#include <stdio.h>
#include "Banco.h"
#include "Usuario.h"

int main(void)
{
	Cuenta c[6];
	c[1].cliente=111;c[1].liquidez=10000;
	c[2].cliente=222;c[2].liquidez=5000;
	c[3].cliente=333;c[3].liquidez=30000;
	c[4].cliente=444;c[4].liquidez=23012;
	c[5].cliente=555;c[5].liquidez=54623;
	c[6].cliente=666;c[6].liquidez=5642356;

	anadirCuenta(c, 6, 777, 6500);
	printf("\n");
	transaccion(c, 7, 111, 222, 500);
	printf("\n");
	eliminarCuenta(c, 7, 666);
	printf("\n");
	transaccion(c, 7, 111, 222, 500);
	char* resp;
	fflush(stdout);
	printf("Quien eres un usuario(u) o un trabajador del banco(t)?\n");
	fflush(stdout);
	scanf("%c", resp);
	//scanf(a);
	//fflush(a);
	//no recuerdo como era

	//switch(resp){
	//case 'u':
	//	printf("\nHola usuario ");
	//break;
	//case 't':
	//	printf("\nHola trabajador");
	//break;
	//}

	//escribir a fichero
    FILE *pf;
    int i;
	pf=fopen("SALIDA.TXT","w");
	    if(pf!=(FILE*)NULL)
	    {
	        for(i=0; i<sizeof(c) ;i++)
	        {
	            fprintf(pf,"Cliente %d tiene %d de saldo \n", 111, 111);
	        }
	    }

	    fclose(pf);

	return 0;
}

