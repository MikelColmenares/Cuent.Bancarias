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

typedef struct{
	Cuenta *cuentas;
	int numCuentas;
}Cuentas;

void eliminarCuenta(Cuentas * CuentasB, int cli);
void anadirCuenta(Cuentas * CuentasB, int liq, int cli);
void transaccion(Cuentas * CuentasB, int cliA, int cliB, int cant);
void eliminarCuenta1(Cuentas * CuentasB, int cli);
void buscarCuenta(Cuentas * CuentasB, int cli);
int existeCuenta(Cuentas * CuentasB, int cli);
Cuenta buscarCuenta1(Cuentas * CuentasB, int cli);
void actualizarCuenta(Cuentas * CuentasB, int cli, Cuenta c);

#endif /* BANCO_H_ */
