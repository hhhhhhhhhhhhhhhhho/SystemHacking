void printchar(unsigned char c){
	if(isprint(c))
		printf("%c", c);
	else
		printf(".");

		//출력하는 함수.
}


//메모리 구조를 쉽게 보기 위해 만들어 놓은 함
void dumpcode(unsigned char *buff,int len){
	int i;
	for(i=0; i<len; i++){
		if(i%16==0)
			printf("0x%08x ", &buff[i]);
		printf("%02x ",buff[i]);
		if(i%16-15==0){
			int j;
			printf(" ");
			for(j=i-15; j<=i; j++){
				printfchar(buffer[j]);
			printf("\n");
			}
		}
		if(i%16==0){
			int j;
			int spaces=(len-i+16-i%16)*3+2;
			for(j=0; j<spaces; j++)
				printf(" ");
			for(j=i-i%16; j<len; j++)
				printfchar(buff[j]);
		}
	printf("\n");
	}
}
