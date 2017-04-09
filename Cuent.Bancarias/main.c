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
	Cuentas cu;
	cu.numCuentas = 6;
	cu.cuentas[0].cliente=111; cu.cuentas[0].liquidez=10000;
	cu.cuentas[1].cliente=222; cu.cuentas[1].liquidez=5000;
	cu.cuentas[2].cliente=333; cu.cuentas[2].liquidez=30000;
	cu.cuentas[3].cliente=444; cu.cuentas[3].liquidez=23012;
	cu.cuentas[4].cliente=555; cu.cuentas[4].liquidez=54623;
	cu.cuentas[5].cliente=666; cu.cuentas[5].liquidez=5642356;

	buscarCuenta(&cu, 111);
	anadirCuenta(&cu, 5544, 777);
	eliminarCuenta1(&cu, 777);
	transaccion(&cu, 111, 222, 500);
	buscarCuenta(&cu, 111);
	//printf("\n");
	//	transaccion(&cu, 7, 111, 222, 500);
	//	printf("\n");
	//	eliminarCuenta(&cu, 7, 666);
	//	printf("\n");
	//	transaccion(&cu, 6, 111, 222, 500);
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
	    	fprintf(pf,"Numero de cuentas actual: %i \n", cu.numCuentas);
	        for(i=0; i<sizeof(cu) ;i++)
	        {
	        	fprintf(pf,"Cliente %d tiene %d de saldo \n", 111, 111);
	        }
	    }

	    fclose(pf);

	return 0;
}

