/*
 * Banco.c
 *
 *  Created on: 9 de abr. de 2017
 *      Author: 15mik
 */
#include "Banco.h"
#include <stdio.h>
#include "Banco.h"
#include <stdbool.h>

//Cuenta * CuentasB;

void a�adirCuenta(Cuenta * CuentasB, int liq, int cli){

	Cuenta c;
	c.cliente = cli;
	c.liquidez = liq;
	CuentasB[sizeof(CuentasB)+1] = c;

}

void eliminarCuenta(Cuenta * CuentasB, int cli){

	int i = 0;//Contador del for
	int t = 0;//Booleano. Si es 0 es no y si es 1 es si
	while(i < sizeof(CuentasB) && t == 0){
		if(CuentasB[i].cliente == cli){
			t = 1;
		}else{
			i++;
		}
	}
	if (t == 0){
		printf("El cliente %i no existe", cli);
	}else{
		remove(CuentasB[i]);
		printf("El cliente %i ha sido eliminado con exito", cli);

	}
}

void transaccion(Cuenta * CuentasB, int cliA, int cliB, int cant){

	int i, j;
	int t = 0, t1 = 0;
	while(i < sizeof(CuentasB) && t == 0){
		if(CuentasB[i].cliente == cliA){
			t = 1;
		}else{
			i++;
		}
	}
	while(j < sizeof(CuentasB) && t1 == 0){
		if(CuentasB[j].cliente == cliA){
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

}





