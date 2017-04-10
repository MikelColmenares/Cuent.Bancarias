/*
 * Usuario.c
 *
 *  Created on: 9 de abr. de 2017
 *      Author: 15mik
 */
#include "Usuario.h"
#include "Banco.h"
#include <stdio.h>

void ingresarDinero(int dinero, Cuenta *c)
{
	c->liquidez = c->liquidez + dinero;
}

void sacarDinero(int dinero, Cuenta *c)
{
		c->liquidez = c->liquidez - dinero;
}
