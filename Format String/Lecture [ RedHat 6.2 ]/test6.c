#include<stdio.h>
#include "dumpcode.h"

int main(){
	char buffer[64];
	fgets(buffer,63,stdin);
	printf(buffer);
	dumpcode((char *)buffer,96);
}
