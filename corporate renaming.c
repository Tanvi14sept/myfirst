#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	FILE *in,*out;
	char word1[100],ch,read[100],replace1[100],replace2[100],replace3[100],word2[100],word3[100];
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
	puts("\n Enter the word to find:");
	puts("Enter the word to replace it with:");
	
	gets(word1);
	gets(replace1);
	
	gets(word2);
	gets(replace2);
	
	gets(word3);
	gets(replace3);
	
	fprintf(out,"%s - %s\n",word1,replace1);
	
	fprintf(out,"%s - %s\n",word2,replace2);
	
	fprintf(out,"%s - %s\n",word3,replace3);
	rewind(in);
	while(!feof(in))
	{
		fscanf(in,"%s",read);
		if(strcmp(read,word1)==0)
			strcpy(read,replace1);
		fprintf(out,"%s",read);
	}
	
	while(!feof(in))
	{
		fscanf(in,"%s",read);
		if(strcmp(read,word2)==0)
			strcpy(read,replace2);
		fprintf(out,"%s",read);
	}
	
	while(!feof(in))
	{
		fscanf(in,"%s",read);
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
