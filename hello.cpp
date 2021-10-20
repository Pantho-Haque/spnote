#include<stdio.h>

#define display(a,b)    printf(#a#b"=%d\n",a##b)

int main ()
{
    int x3=6;
    display(x,3);
}