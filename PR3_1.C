#include<stdio.h>
#include<conio.h>
void main(){
	char alpha='a';
	clrscr();
	do{
		printf("%c ",alpha);
		alpha+=4;
	}while(alpha<='z');
	getch();
}
