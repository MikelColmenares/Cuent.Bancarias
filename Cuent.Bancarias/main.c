/*
 * main.c
 *
 *  Created on: 9 de abr. de 2017
 *      Author: 15mik
 */
#include <stdio.h>
#include <stdlib.h>
#include "Banco.h"
#include "Usuario.h"

int main(void) {
	Cuentas cu;
	cu.numCuentas = 6;
	cu.cuentas[0].cliente = 111;cu.cuentas[0].liquidez = 10000;
	cu.cuentas[1].cliente = 222;cu.cuentas[1].liquidez = 5000;
	cu.cuentas[2].cliente = 333;cu.cuentas[2].liquidez = 30000;
	cu.cuentas[3].cliente = 444;cu.cuentas[3].liquidez = 23012;
	cu.cuentas[4].cliente = 555;cu.cuentas[4].liquidez = 54623;
	cu.cuentas[5].cliente = 666;cu.cuentas[5].liquidez = 5642356;

	//buscarCuenta(&cu, 111);
	//anadirCuenta(&cu, 5544, 777);
	//eliminarCuenta1(&cu, 777);
	//transaccion(&cu, 111, 222, 500);
	//buscarCuenta(&cu, 111);

	Cuenta cuenta1;
	cuenta1.cliente = 000;
	cuenta1.liquidez = 10000;
	//Cuenta cuenta2;
	cuenta1.cliente = 111;
	cuenta1.liquidez = 75000;

	int opc = 0, opcu = 0, opct = 0;
	do {

		printf("MENU DE OPCIONES\n\n");
		printf("1. Usuario\n");
		printf("2. Trabajador\n");
		printf("3. Salir");
		fflush(stdout);
		printf("Escoge una opcion: \n\n");
		scanf("%d", &opc);
		fflush(stdout);
		switch (opc) {
		case 1:
			printf("Hola usuario !!!\n\n");
			do {
				printf("MENU DE CLIENTE");
				printf("1. Ingresar dinero en la cuenta.\n");
				printf("2. Sacar dinero de la cuenta.\n");
				printf("3. Salir");
				fflush(stdout);
				printf("Escoge una opcion: \n\n");
				scanf("%d", &opcu);
				switch (opcu) {
				case 1:
					ingresarDinero(100, cuenta1);
					break;
				case 2:
					sacarDinero(100, cuenta1);
					break;
				default:
					break;
				}
			} while (opct != 3);
			break;
		case 2:
			printf("Hola trabajador !!!\n\n");
			do {
				printf("MENU DE TRABAJADOR DEL BANCO");
				printf("1. Añadir cuenta\n");
				printf("2. Eliminar cuenta.\n");
				printf("3. Movimiento de saldo.\n");
				printf("4. Buscar Cuenta.\n");
				printf("5. Salir");
				fflush(stdout);
				printf("Escoge una opcion: \n\n");
				scanf("%d", &opct);
				switch (opct) {
				case 1:
					anadirCuenta(&cu, 4500, 999);
					break;
				case 2:
					eliminarCuenta1(&cu, 555);
					break;
				case 3:
					transaccion(&cu, 111, 222, 750);
					break;
				case 4:
					buscarCuenta(&cu, 222);
					break;
				default:
					break;
				}
			} while (opct != 5);
			break;
		default:
			break;
		}

	} while (opc != 3);

	//escribir a fichero
	FILE *pf;
	int i;
	pf = fopen("SALIDA.TXT", "w");
	if (pf != (FILE*) NULL) {
		fprintf(pf, "Numero de cuentas actual: %i \n", cu.numCuentas);
		for (i = 0; i < sizeof(cu); i++) {
			fprintf(pf, "Cliente %d tiene %d de saldo \n", 111, 111);
		}
	}

	fclose(pf);
	return 0;
}

