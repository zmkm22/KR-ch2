#include <stdio.h>
#define MAXLINE 1000

int get_line(char s[], int lim);
void copy(char to[], char from[]);
int test(void);

int main(void)
{   
    // print longest input line
    int len, max;   // current line length and max line length
    char line[MAXLINE], longest[MAXLINE];

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);    // function with array input recieves a pointer, hence modifies the input
        }
    if (max > 0)
        printf("the longest line has %d characters \n %s \n", max, longest);
}

void copy(char to[], char from[])
{
    int k, j;   // k is character, j is counter
    j = 0;
    while ((k = from[j]) != '\0')
        to[j++] = k;

    /* the book offers a more elegant implementation

    int counter;
    j = 0;

    while ((to[j] = from[j]) != '\0')
        ++j;
    */

   /* inspired by the book, I came up with a more compact implementation 

   for (int j = 0; (to[j] = from[j]) != '\0'; ++j)
        ;

   */
}

int get_line(char s[], int lim)
{
    // read line in s, output length of line, lim is the maximum length the program will handle

    int character, length;

    for (length = 0; length<lim-1 && (character=getchar())!=EOF && character!='\n' ; ++length)
        s[length] = character;  // record character in line
    
    if (character == '\n')
    {    
        s[length] = character;  // add new line character
        ++length;
    }  

    s[length] = '\0';         // add mull terminating character

    return length;              // return length of line
}

int test(void)
{
    char line[20];
    char string = "hello world!";
    copy(line, string);
    // test 1: printf("length: %d \n", get_line(line, 100));
    printf("old string: %c  new string: %s \n", string, line);
}
