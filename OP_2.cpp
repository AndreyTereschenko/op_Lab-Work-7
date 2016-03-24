#include"stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;

//standart strings
char s[100];                         // output string
char p1[100];

const int n = 15;
typedef char array[n][n];   
array arr;                           // array of words

void invert_words(char str[], array mas, char p1[]);   // invert words, that occupy pair positions



int main()
{
	
	puts("Enter string:");
	gets(s);    
	
	// input string
	invert_words(s, arr,p1);        // invert words, that occupy pair positions
	system("pause");
}

void invert_words(char str[], array mas, char p1[])
{
	int k = 0;                     
	char *delim = "., ";       
	char *p;                     
	p = strtok(s, delim);       
	while (p != NULL)                
	{
		strcpy(mas[k], p);           
		k++;                         
		p = strtok(NULL, delim); 
	}
	for (int j = 1; j < k+1; j++){
		if (j % 2 != 0){
		
			strcat(p1, mas[j - 1]);
			strcat(p1, " ");
		}
		else {
			char p2[100] = "";
			strcat(p2, mas[j-1]);
			_strrev(p2);
			strcat(p1, p2);
			strcat(p1, " ");
		}
	}
	cout << "Invert string:" << endl;
	puts(p1);
}

