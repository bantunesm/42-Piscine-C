
#include <stdio.h>
int main(void)
{
    int a;
    int b;
    int z;
    int *d;
    a = 'a';
    d = &a;
    printf("My a has %d as an ascii value, i am printing it with a", a);
    printf("\n");
    printf("My a has %p as an address, printed with &a", &a);
    printf("\n");
    printf("My d has %p as an address, printed with &d", &d);
    printf("\n");
    printf("My d has a's address as a value, which is %p, printed with d (the value of d, created from a's address)", d);
    printf("\n");
    printf("My d, is pointing at my a (a's address is his value), which has %d as an ascii value, which I can see with *d", *d);
    printf("\n");
    printf("My b has %d as a value", b);
    printf("\n");
    printf("My z has %d as a value", z);
    printf("\n");
    printf("They respectively have %p, and %p as an address", &b, &z);
    printf("\n");
    printf("I am now changing b value with \n b = 42 \n and z value with \n z = b");
    b = 42;
    z = b;
    printf("\n");
    printf("b has now %d as a value, z has b value, so it also has %d as a value, their addresses are still b : %p, and z : %p", b, z,  &b, &z);
    return (0);
}