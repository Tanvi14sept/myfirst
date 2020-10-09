#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	FILE *in,*out;

	int word_len,i,p=0;
	in=fopen("input.txt","r");
	out=fopen("output.txt","w+");
	if(in==NULL || out==NULL)
	{
		printf("can't open file.");
		exit(0);
	}
	puts("File content:\n");
	while(1)
	{
		ch=fgetc(in);
		if(ch==EOF)
			break;
		printf("%c",ch);
	}

	rewind(in);
	while(!feof(in))
	{
		fscanf(in,"%s",read);
		if(strcmp(read,word1)==0)
			strcpy(read,replace1);
		
		if(strcmp(read,word2)==0)
			strcpy(read,replace2);
		
		if(strcmp(read,word3)==0)
			strcpy(read,replace3);
		fprintf(out,"%s",read);
	}
	
	rewind(out);
	while(1)
	{
		ch=fgetc(out);
		if(ch==EOF)
			break;
		printf("%c",ch);
	}
	fclose(in);
	fclose(out);
} 
