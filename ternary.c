#include <stdio.h>

int max(int p, int q);
int bigger(int, int);

main()
{
    int a, b, c;
    a = b = c = 0;

    1 + 1? (a = 1): (b = 1);    // we could put optional parenthesis (1+1) for readability

    // comma operator 
    c = (a = 100, 99);
    
    printf("a = %d, c = %d\n", a, c);

    /*
    printf("a=%d, b=%d\n", a, b);
    printf("The bigger is %d\n", bigger(3,123));
    */
}

int bigger(int a, int b)
{
    // ternary
    return (a > b) ? a : b;
}

int max(int p, int q)
{
    if (p > q)
        return p;
    else
        return q;
}