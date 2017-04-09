/*
 * main.c
 *
 *  Created on: 9 de abr. de 2017
 *      Author: 15mik
 */
#include <stdio.h>
#include "Banco.h"
int main(void)
{
	Cuenta c[6];
	c[1].cliente=652;c[1].liquidez=52624;
	c[2].cliente=652;c[2].liquidez=52624;
	c[3].cliente=652;c[3].liquidez=52624;
	c[4].cliente=652;c[4].liquidez=52624;
	c[5].cliente=652;c[5].liquidez=52624;
	c[6].cliente=652;c[6].liquidez=52624;

	printf("Quien eres un usuario(u) o un trabajador del banco(t)?");
	char a=scanf;//no me acuerdo de como era para pillar un char
	switch(a){
	case 'u':
		printf("Hola usuario ");
		break;
	case 't':
		printf("Hola trabajador");
		break;
	}




}

