# Current 

For binary operators we often have the shorthand `a op = b` to mean `a = a op b`. 
When we write `x *= y + 1` then this means `x = x * (y+1)` where the RH expression is evaluated first.

`a[i] = i++` is ambiguous and depends on the compiler, don't do this

![precedence of operators](https://github.com/zmkm22/KR-ch2/blob/master/precedence.png)

# Take Some Notes 🐳

> The point of types is to allocate appropriate quantity of memory together with proper operations

A bit = binary digit (0 or 1) is the smallest unit of information <br>
The size of data types (such as `int`) are described in units called bytes where 1 byte = 8 bits = 256 configurations. The function `sizeof(int) = 4` outputs in bytes. <br> 
`short int = int` and `unsigned ints` does arithmetic modulo the size of ints in decimal. There's also `singed ints`

1. Pefix is for octal, hex or whatever number system
2. Suffix uU lL indicate type (unsigned, long)
3. Character constants are acutally integers `'0'`
4. `'\n'` looks like two characters, but is actually a single character
5. Concatenation by juxatposition
6. A string is an array of chars. It is delimited by double quotes "string" and the internatlly represention ends in a null terminating character `\0`. Thus size of string array is 1 more than length of string. 
7. The `strlen()` libraray function gives the length of string, ignoring the null terminating character. 
8. Coersion operator `(int) PI` does not alter the variable, it has same precendence as unary operator
9. `--n` means decrement before n is used, `n++` means increment after n is used. `(i+j)++` is illegal since in(de)crement only applies to variables (if you think about this, it make sense `(i+j)++` is illegal).
10. Float has regular precision and `double` precision; integers have normal, short, long, unsigned or signed types.

> Task: write a program to concatenate two strings

# Homework 

> learn bitwise operators in section 2.9