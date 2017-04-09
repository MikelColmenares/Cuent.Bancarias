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
	c[1].cliente=111;c[1].liquidez=10000;
	c[2].cliente=222;c[2].liquidez=5000;
	c[3].cliente=333;c[3].liquidez=30000;
	c[4].cliente=444;c[4].liquidez=23012;
	c[5].cliente=555;c[5].liquidez=54623;
	c[6].cliente=666;c[6].liquidez=5642356;

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

