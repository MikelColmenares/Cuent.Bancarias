/*
 * Banco.c
 *
 *  Created on: 9 de abr. de 2017
 *      Author: 15mik
 */
#include "Banco.h"
#include <stdio.h>
#include "Banco.h"
#define TAM 20

//Cuenta * CuentasB;

void anadirCuenta(Cuentas * CuentasB, int liq, int cli) {

	Cuenta c;
	c.liquidez = liq;
	c.cliente = cli;
	CuentasB->cuentas[CuentasB->numCuentas] = c;
	CuentasB->numCuentas = CuentasB->numCuentas + 1;
	printf("Exito\n");
}
void buscarCuenta(Cuentas * CuentasB, int cli) {

	int i = 0, enc = 0;
	while (enc == 0 && i < CuentasB->numCuentas) {
		if (CuentasB->cuentas[i].cliente == cli) {
			enc = 1; // en C no existen boolean, por lo tanto cuando queramos usar lo que en java correspondería a un boolean usaremos un int, la similitud sería 1 = true y 0 = false.
		} else {
			i++;
		}
	}
	if (enc == 1) {
		printf("El cliente %i tiene un total de %i en su cuenta\n",
				CuentasB->cuentas[i].cliente, CuentasB->cuentas[i].liquidez);
	} else {
		printf("El cliente %i no existe\n", cli);
	}
}
void eliminarCuenta(Cuentas * CuentasB, int cli) //no funciona
{

	int i = 0; //Contador del for
	int t = 0; //Booleano. Si es 0 es no y si es 1 es si
	while (i < CuentasB->numCuentas && t == 0) {
		if (CuentasB->cuentas[i].cliente == cli) {
			t = 1;
		} else {
			i++;
		}
	}
	if (t == 0) {
		printf("El cliente %i no existe\n", cli);
	} else {
		//remove(CuentasB[i]);
		while (i < CuentasB->numCuentas) {
			CuentasB->cuentas[i] = CuentasB->cuentas[i + 1];
			i++;
		}
		printf("El cliente %i ha sido eliminado con exito\n", cli);
		CuentasB->numCuentas = CuentasB->numCuentas - 1;
	}
	printf("Exito\n");
}
void eliminarCuenta1(Cuentas * CuentasB, int cli) { //funciona
	int i = 0, enc = 0;
	while (enc == 0 && i < CuentasB->numCuentas) {
		if (CuentasB->cuentas[i].cliente == cli) {
			enc = 1; // en C no existen boolean, por lo tanto cuando queramos usar lo que en java correspondería a un boolean usaremos un int, la similitud sería 1 = true y 0 = false.
		} else {
			i++;
		}
	}
	if (enc == 1) {
		printf("eliminado\n");
		CuentasB->numCuentas = CuentasB->numCuentas - 1;
	} else {
		printf("no encontrado\n");
	}

}
void transaccion(Cuentas * CuentasB, int cliA, int cliB, int cant) {

	int i = 0, j = 0;
	int t = 0, t1 = 0;
	while (i < CuentasB->numCuentas && t == 0) {
		if (CuentasB->cuentas[i].cliente == cliA) {
			t = 1;
		} else {
			i++;
		}
	}

	while (j < CuentasB->numCuentas && t1 == 0) {
		if (CuentasB->cuentas[j].cliente == cliB) {
			t1 = 1;
		} else {
			j++;
		}
	}
	if (t == 0 || t1 == 0) {
		printf("No se han encontrado los clientea %i o %i", cliA, cliB);
	} else {
		CuentasB->cuentas[j].liquidez = CuentasB->cuentas[j].liquidez + cant;
		CuentasB->cuentas[i].liquidez = CuentasB->cuentas[i].liquidez - cant;
	}
	printf("Exito\n");
}

void guardarAFichero() {
	FILE *pf;
	int i;
	pf = fopen("SALIDA.TXT", "w");
	if (pf != (FILE*) NULL) {
		for (i = 0; i < 10; i++) {
			fprintf(pf, "Cliente %i tiene %i de saldo \n", 111, 222);
		}
	}

	fclose(pf);
}

