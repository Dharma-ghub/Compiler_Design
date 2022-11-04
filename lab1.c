//Program to identify integers as tokens
#include<stdio.h>
//#define MAX_LINE_LENGTH 1000
#define MAX_SIZE 1000
int main()
{
	FILE *f;
	f=fopen("sample1.txt","r");
	char c,ch;
	
	//char    line[MAX_LINE_LENGTH];
	
	char keywords[10][10]={"int","double","float","for","void","main","do","while","break","char"};
	char operators[100]="!%^&*-+=~|.<>/?";
	/* while(fgets(line, MAX_LINE_LENGTH, f)){
        printf(line);
    }*/
     
	//this while loop is to check if the given token is an operator
	 while((ch=fgetc(f))!=EOF)
	 {
	 for(int i=0;i<MAX_SIZE;i++)
	 {
	 	scanf("%c",&ch);
	 }
	}
	/*
		fgets(buff,BUZZ_SIZE,f);
		printf("String read:%s\n",buff);
		fclose(f);
		/* while(fgets(line, MAX_LINE_LENGTH, f)){
        printf(line);*/
	
	
	
	
//to check if the given token is a keyword


    
     
    
     
    
}

		
		


