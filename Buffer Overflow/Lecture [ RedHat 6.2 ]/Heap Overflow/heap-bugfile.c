#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<dlfcn.h>

#define ERROR -1

int function(const char *str){
	printf("function 포인터에 호출되는 정상적인 함수\n",str);
	return 0;
}

int main(){
	static char buf[16];
	static int(*funcptr)(const char *str);
	if(argc <= 2){
		fprintf(stderr,"Usage : %s <buffer> <function's arg> \n". argv[0]);
		exit(ERROR);
	}
	
	printf("system() function's address = %p\n,&system);
	
	funcptr = (int(*)(const char *str))function;
	
	memset(buf,0,sizeof(buf));
	
	strncpy(buf,argv[1],strlen(argv[1]));
	(void)(*funcptr)(argv[2]);
