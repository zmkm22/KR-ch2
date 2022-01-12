#include <stdio.h>

int main(void)
{
    int i, j, k , l;
    i = j = k = l = 3;

    char word[] = "012345";
    char copy[] = "abcdefghijklmn";

    printf("%c\n", word[++i]);          // out 4
    printf("%c\n", word[j++]);          // 3
    printf("%d\n", j);                  // 4
    printf("%c\n", word[k = k + 1]);    // 4

    copy[l++] = '*'; // problematic copy[l++] = word[i]
    printf("l was 3, it is now %d. copy[3] = %c, and copy[4] = %c \n the string is %s\n", l, copy[3], copy[4], copy);

}