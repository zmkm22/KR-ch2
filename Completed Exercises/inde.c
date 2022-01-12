//              /indi.c
// increment - decrmenet    

#include <stdio.h>

int main(void)
{
    // does comparison incrmenet as well?
    char word[] = "01234";
    int j = 2;
    
    printf("%d, j=%d\n", word[++j] == '2', j);

    return 0;
}