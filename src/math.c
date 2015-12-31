/*------------------------------------------------------------------------------
| NuCTex	| math.c
| Author	| Benjamin A - Nullsrc
| Created	| 30 December, 2015
| Changed	| 31 December, 2015
|-------------------------------------------------------------------------------
| Overview	| Implementation of various mathematical functions used in the game
\-----------------------------------------------------------------------------*/

#include "math.h"
#include <stdio.h>
#include <stdlib.h>

int rng(int low, int high) {
	high += 1;
	int temp = low;
	int addend = rand() % (high - low);
	temp += addend;
	return temp;
}

int zrng(int range) {
	int temp = rand() % (range + 1);
	return temp;
}

int brng() {
	int temp = rand() % 2;
	return temp;
}

int calcDamage(int strength) {
	int damageTotal = 0;
	damageTotal = strength;
	return damageTotal;
}

int runAway(int escapingAgility, int chasingAgility) {
	if(escapingAgility > chasingAgility) {
		return 1;
	}
	else {
		return 0;
	}
}