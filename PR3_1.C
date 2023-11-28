#include<stdio.h>
#include<conio.h>
void main(){
	char alpha=65;
	clrscr();
	do{
		printf("%c ",alpha);
		alpha+=4;
	}while(alpha<=90);
	getch();
}