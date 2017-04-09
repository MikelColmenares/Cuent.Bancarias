/*
 * Banco.c
 *
 *  Created on: 9 de abr. de 2017
 *      Author: 15mik
 */
#include "Banco.h"
#include <stdio.h>
#include "Banco.h"

//Cuenta * CuentasB;

void anadirCuenta(Cuenta * CuentasB, int tamanyo, int liq, int cli){

	Cuenta c;
	c.cliente = cli;
	c.liquidez = liq;
	CuentasB[tamanyo] = c;
	printf("Exito");
}

void eliminarCuenta(Cuenta * CuentasB, int tamanyo, int cli){

	int i = 0;//Contador del for
	int t = 0;//Booleano. Si es 0 es no y si es 1 es si
	while(i < tamanyo && t == 0){
		if(CuentasB[i].cliente == cli){
			t = 1;
		}else{
			i++;
		}
	}
	if (t == 0){
		printf("El cliente %i no existe", cli);
	}else{
		//remove(CuentasB[i]);
		while(i < tamanyo){
			CuentasB[i] = CuentasB[i +1];
			i++;
		}
		printf("El cliente %i ha sido eliminado con exito", cli);

	}
	printf("Exito");
}

void transaccion(Cuenta * CuentasB,int tamanyo, int cliA, int cliB, int cant){

	int i, j;
	int t = 0, t1 = 0;
	while(i < tamanyo && t == 0){
		if(CuentasB[i].cliente == cliA){
			t = 1;
		}else{
			i++;
		}
	}
	while(j < tamanyo && t1 == 0){
		if(CuentasB[j].cliente == cliB){
			t1 = 1;
		}else{
			j++;
		}
	}
	if (t == 0 || t1 == 0){
		printf("No se han encontrado los clientea %i o %i", cliA, cliB);
	}else{
		CuentasB[j].liquidez = CuentasB[j].liquidez + cant;
		CuentasB[i].liquidez = CuentasB[i].liquidez - cant;
	}
	printf("Exito");
}

void guardarAFichero(){
    FILE *pf;
    int i;
	pf=fopen("SALIDA.TXT","w");
	    if(pf!=(FILE*)NULL)
	    {
	        for(i=0; i<10 ;i++)
	        {
	            fprintf(pf,"Cliente %i tiene %i de saldo \n", 111, 222);
	        }
	    }

	    fclose(pf);
}




