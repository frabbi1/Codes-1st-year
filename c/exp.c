#include<stdio.h>
#include<stdlib.h>

int main( int argc, char *argv[] ){
	
	FILE *fp;
	char c;
	
	fp = fopen( argv[1], "r" );
printf( "%ld",ftell(fp) );
	fseek( fp,0,SEEK_END);
	c = fgetc(fp);
	putchar(c);
	printf( "%ld",ftell(fp) );
	
	return 0;
}	
