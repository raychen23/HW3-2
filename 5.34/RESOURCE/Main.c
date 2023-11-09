#pragma warning( disable : 4996 )
#include<stdlib.h>
#include<stdio.h>

int recursive1(int,int);

int main() {
	int x, y,ans;
	printf("enter 2 intergers");
	scanf("%d %d", &x, &y);
	printf("power is %d", recursive1(x,y));
}

int recursive1(int a, int b) {
	int i = a;
	for (int q = 1; q < b; q++) {
		a = a * i;
	}
	return a;
}