#include <stdio.h>

int function (const char[]);

int main(void)
{
    enum workdays {MON = 1, TUES, WED, THURS, FRI}; // an enum constant is a list of integers
    /* automatically TUES = 2, WED = 3 etc since unspecified values continue from last specified*/     

    // an enumeration is a set of name-integer pairs, whereas names must be unique since they are identifiers, values need not be uniquely associated to names
    const float pi = 3.14159;
    const char msg[] =  "Hello world"; 

    printf("Friday %d %s \n", MON, msg);
    return 0;
}

other()
{
    printf("%lu\n", sizeof(long double)); // long int often abbreviated long
    printf("%lu\n", sizeof(unsigned long));
    printf("%lu" "is the size of unsigned long\n", sizeof(unsigned long));  // concatenation
}