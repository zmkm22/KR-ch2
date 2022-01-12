#include <stdio.h>

int upper(int l);
int lower(int U);

int main(void)
{
    // the % operator gives remainder, does not apply to float or double
    // integer division / truncates fractional part
    // short, long
    // != and == have lower precedence than > < >= and <=
    // a + 1 > b is equivalent to (a+1) > b relational operators have lower precedence than arithemtic 
    // the precedence of != is higher than assignment 

    // char is a small int, so char is a subset of the ints and can be opearted by arithmetic operators
    
    // printf("%d\n", 15%4);

    /* convert uppercase to lower case */
    printf("%c\n", upper('t'));
    printf("%c\n", lower('T'));
    printf("%c\n", upper(lower('M'))); // inverse functions!
    
    int a = (int) 3.14;     // (type name) expression where brackets are part of syntax, coerces the float into int type
    printf("%d\n", a);      
    
    return 0;

}

int upper(int lower)
{
    /* assume input is lowercase letter, output upper case letter */

    return 'A' + lower - 'a';
}

int lower(int upper)
{
    /* assume uppercase is given, convert to lowercase */

    return 'a' + upper - 'A';
}