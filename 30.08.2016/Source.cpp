#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
//
//void problema1(){
//	FILE *f;
//	char rand[100], *p, sablon[100],text[100];
//	int contor=0, *nr_cuv;
//	f = fopen("in.txt", "r");
//	if (f == NULL)
//		printf("Fisierul nu s.a deschis!\n");
//
//	printf("Dati sablonul de cautare:");
//	gets(sablon);
//
//	while (!feof(f)){
//		contor = 0;
//		fgets(rand, 1024, f);
//		strcpy(text, rand);
//		p = strstr(rand, sablon);
//		while (p != NULL){
//			contor++;
//			strcpy(rand, p+strlen(sablon));
//			p = strstr(rand, sablon);
//		}
//		printf("%d %s", contor, text);
//	}
//
//}

//void problema2(){
//	FILE *f;
//	char rand[100],sablon[100], *p;
//	f = fopen("in.txt", "r");
//	if (f == NULL)
//		printf("Fisierul nu s.a deschis la citire!\n");
//
//	printf("Dati sablonul de cautare:");
//	gets(sablon);
//
//	while (!feof(f)){
//		fgets(rand, 1024, f);
//		p = strstr(rand, sablon);
//		if (p == NULL)
//			printf("%s", rand);
//	}
//
//}

//void problema3(){
//	FILE *f;
//	char rand[100], sablon[100], new_sablon[100],new_line[100], *p;
//	f = fopen("in.txt", "r");
//	if (f == NULL)
//		printf("Nu s.a deschis fisierul la intrare!\n");
//
//	printf("Dati sablonul de cautare: "); gets(sablon);
//	fflush(stdin);
//	printf("Dati sablonul de inlocuire: "); gets(new_sablon);
//
//	while (!feof(f)){
//		fgets(rand, 1024, f);
//		p = strstr(rand, sablon);
//		while (p != NULL){
//			strncpy(new_line, rand, strlen(rand) - strlen(p));
//			new_line[strlen(rand) - strlen(p)] = '\0';
//			strcat(new_line, new_sablon);
//			p += strlen(sablon);
//			strcat(new_line, p);
//			strcpy(rand, new_line);
//			p = strstr(rand, sablon);
//		}
//		printf("%s", rand);
//	}
//
//}

void problema4(){



}
void main(){
//	problema1();
//	problema2();
//	problema3();
	problema4();
	_getch();
}