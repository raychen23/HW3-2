#pragma warning( disable : 4996 )
#include<stdlib.h>
#include<stdio.h>

char charater(char a);

int main() {
	char a;
	printf("��J�j�g�r��");
	scanf("%c", &a);
	printf("turn to %c", charater(a));
}

char charater(char a) { 
	a = a + 32; 	
	return a;
}