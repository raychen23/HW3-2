#pragma warning( disable : 4996 )
#include<stdlib.h>
#include<stdio.h>

int common(int x,int y);

int main() {
	int x,y;
	printf("enter 2 numbers");
	scanf("%d %d", &x, &y);
	printf("最小公倍數為 %d", common(x,y));
}

int common(int x,int y) {
	for (int a = 1; a < 1000000; a++) {
		if (a%x == 0 && a%y==0) {
			return a;
			break;
		}
	}
}