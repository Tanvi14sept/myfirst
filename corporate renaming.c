#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	FILE *in,*out;
	int i,n;
	char word[100],ch,read[100],replace[100];
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
	puts("enter the no of test cases: ");
	gets(n);
	puts("\n Enter the word to find: and  ");
	puts("Enter the word to replace it with:");
	for(i=0;i<n;i++)
	{
	gets(word[i]);
	gets(replace[i]);
	}
	fprintf(out,"%s - %s\n",word,replace);
	rewind(in);
	while(!feof(in))
	{
		fscanf(in,"%s",read);
		if(strcmp(read,word)==0)
			strcpy(read,replace);
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
