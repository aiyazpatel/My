#include<stdio.h>

int add(int a,int b)
{
        return a+b;
}
void main()
{
        int a=10,b=20;
        int (*func)(int,int);
        func = add;
        int c = func(a,b);
        printf("%d\n",c);

	printf("added in quick-test branch\n");
}

