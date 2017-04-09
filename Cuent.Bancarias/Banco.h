/*
 * Banco.h
 *
 *  Created on: 9 de abr. de 2017
 *      Author: 15mik
 */

#ifndef BANCO_H_
#define BANCO_H_

typedef struct{
	int liquidez;
	int cliente;
}Cuenta;

void eliminarCuenta(Cuenta * CuentasB, int tamanyo, int cli);
void anadirCuenta(Cuenta * CuentasB, int tamanyo,int liq, int cli);
void transaccion(Cuenta * CuentasB, int tamanyo,int cliA, int cliB, int cant);

#endif /* BANCO_H_ */
