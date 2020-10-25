#include<stdio.h>

int main(int argc, char *argv[]){
	char buffer[10]; // Vulnerable Segment
	strcpy(buffer, argv[1]);
	//argv[0] = file name
	//argv[1~n] = the n'th argument

	printf("%s\n",&buffer);
}
