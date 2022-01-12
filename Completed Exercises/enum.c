#include <stdio.h>

int main(void)
{
    enum days {mon, tues, wed, thurs};  // no equal sign! mon tues are called enumerators, values must be int
    printf("%d \n", thurs);
    const int pi = 3.14;
}