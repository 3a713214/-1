#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE*pFile;
	char ch;
	pFile=fopen("somebody.txt","r");
	fseek(pFile,2,SEEK_SET);
	ch=fgetc(pFile);
	printf("第 1 個 fgetc() = %c\n",ch);
	fseek(pFile,3,SEEK_CUR);
	ch=fgetc(pFile);
	printf("第 2 個 fgetc() = %c\n",ch);
	fseek(pFile,-4,SEEK_END);
	ch=fgetc(pFile);
	printf("第 3 個 fgetc() = %c\n",ch);	
fclose(pFile);
system("PAUSE");
return 0;	
}    
