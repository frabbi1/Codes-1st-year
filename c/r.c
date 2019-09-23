#include<stdio.h>
#include<stdlib.h>

int main( int argc, char *argv[] ){
		
		FILE *fp;
		int loc;
		char ch[80];
		
		fp = fopen(argv[1],"rb+");


		//fseek(fp,0,SEEK_END);
		fseek(fp,6,SEEK_CUR);
		//fread(&ch,sizeof ch,1,fp);
		//fprintf(fp, "%s","efgh" );
		//fputs("efgh",fp);
		fgets(ch,4,fp);
		puts(ch);
		fclose(fp);
		return 0;
	}	
