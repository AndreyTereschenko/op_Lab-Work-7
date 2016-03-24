#include"stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;

char s[100];                         // вихідний рядок
char p1[100];

const int n = 20;
typedef char array[n][n];
array arr;                           // масив слів

void create_words(char str[], array mas, char p1[]);  // 



int main()
{
	
	puts("enter string:");
	gets(s);                         // ввести рядок
	create_words(s, arr,p1);        // визначити перелік і кількість слів у рядку
	system("pause");
}

void create_words(char str[], array mas, char p1[])
{
	int k = 0;                       // кількість лексем у рядку
	char *delimiter = "., ";         // покажчик на розділові символи
	char *p;                         // покажчик на поточну лексему
	p = strtok(s, delimiter);        // визначити першу лексему
	while (p != NULL)                // поки є рядку є лексеми
	{
		strcpy(mas[k], p);           // копіювати поточну лексему в масив
		k++;                         // перейти до наступної лексеми
		p = strtok(NULL, delimiter); // продовжити пошук лексем
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
	cout << "P1" << endl;
	puts(p1);
}

