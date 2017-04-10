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
	cu.cuentas[0].cliente = 111;
	cu.cuentas[0].liquidez = 10000;
	cu.cuentas[1].cliente = 222;
	cu.cuentas[1].liquidez = 5000;
	cu.cuentas[2].cliente = 333;
	cu.cuentas[2].liquidez = 30000;
	cu.cuentas[3].cliente = 444;
	cu.cuentas[3].liquidez = 23012;
	cu.cuentas[4].cliente = 555;
	cu.cuentas[4].liquidez = 54623;
	cu.cuentas[5].cliente = 666;
	cu.cuentas[5].liquidez = 5642356;

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

	int opc = 0, opcu = 0, opct = 0, a, b, c;
	do {

		printf("MENU DE OPCIONES\n\n");
		printf("1. Usuario\n");
		printf("2. Trabajador\n");
		printf("3. Salir\n");
		printf("Escoge una opcion: \n\n");
		fflush(stdout);
		scanf("%d", &opc);
		//fflush(stdout);
		switch (opc) {
		case 1:
			printf("Hola usuario !!!\n\n");
			do {
				printf("MENU DE CLIENTE \n");
				printf("1. Ingresar dinero en la cuenta.\n");
				printf("2. Sacar dinero de la cuenta.\n");
				printf("3. Salir\n");
				printf("Escoge una opcion: \n\n");
				fflush(stdout);
				scanf("%d", &opcu);

				switch (opcu) {
				case 1:
					printf("Introduce el importe: \n");
					fflush(stdout);
					scanf("%d", &a);
					//fflush(stdout);
					ingresarDinero(a, cuenta1);
					break;
				case 2:
					//fflush(stdout);
					printf("Introduce el importe: \n");
					fflush(stdout);
					scanf("%d", &a);
//					fflush(stdout);
					sacarDinero(a, cuenta1);
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
				printf("5. Salir\n");
				printf("Escoge una opcion: \n\n");
				fflush(stdout);
				scanf("%d", &opct);
//				fflush(stdout);
				switch (opct) {
				case 1:
//					fflush(stdout);
					printf("Introduce el cliente: \n");
					printf("Introduce la liquidez: \n");
					fflush(stdout);
					scanf("%d %d", &a, &b);
//					fflush(stdout);
					anadirCuenta(&cu, b, a);
					break;
				case 2:
					printf("Introduce el cliente: \n");
					fflush(stdout);
					scanf("%d", &a);
//					fflush(stdout);
					eliminarCuenta1(&cu, a);
					break;
				case 3:
//					fflush(stdout);
					printf("Introduce el cliente A: \n");
					printf("Introduce el cliente B: \n");
					printf("Introduce el importe: \n");
					fflush(stdout);
					scanf("%d %d %d", &a, &b, &c);
//					fflush(stdout);
					transaccion(&cu, a, b, c);
					break;
				case 4:
//					fflush(stdout);
					printf("Introduce el cliente: \n");
					fflush(stdout);
					scanf("%d", &a);
//					fflush(stdout);
					buscarCuenta(&cu, a);
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
		for (i = 0; i < cu.numCuentas; i++) {
			int a = cu.cuentas[i].cliente;
			int b = cu.cuentas[i].liquidez;
			fprintf(pf, "Cliente: %i \t Saldo: %i\n", a, b);
		}
	}

	fclose(pf);
	printf("\n\n Gacias por utilizar nuestro producto\n Un Saludo !!!");
	return 0;
}

