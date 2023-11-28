#include<stdio.h>
#include<conio.h>
void main(){
	int i=0,n;
	clrscr();
	printf("Enter the value of N: ");
	scanf("%d",&n);
	while(n!=0){
		n=n/10;
		i++;
	}
	printf("%d",i);
	getch();
}