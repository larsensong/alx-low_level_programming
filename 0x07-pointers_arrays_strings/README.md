List of Tasks:

0. memset
File : 0-memset.c
Required : A function that fills memory with a constant byte.
Expected Results:
The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b.
Returns a pointer to the memory area s.

1. memcpy
File : 1-memcpy.c
Required : A function that copies memory area.
Expected Results :
The _memcpy() function copies n bytes from memory area src to memory area dest.
Returns a pointer to dest.

2. strchr
File : 2-strchr.c
Required : A function that locates a character in a string.
Expected Results : Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found

3. strspn
File : 3-strspn.c
Required : A function that gets the length of a prefix substring.
Expected Results : Returns the number of bytes in the initial segment of s which consist only of bytes from accept

4. strpbrk
File : 4-strpbrk.c
Required : A function that searches a string for any of a set of bytes.
Expected Results :
The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept.
Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found

5. strstr
File : 5-strstr.c
Required : A function that locates a substring.
Expected Results :
The _strstr() function finds the first occurrence of the substring needle in the string haystack.
The terminating null bytes (\0) are not compared.
Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.

6. Chess is mental torture
File : 7-print_chessboard.c
Required : A function that prints the chessboard.
💬 Quote : “Chess is mental torture” is what Garry Kasparov said in the context of his 1990s match vs Nigel Short.


7. The line of life is a ragged diagonal between duty and desire
File : 8-print_diagsums.c
Required : A function that prints the sum of the two diagonals of a square matrix of integers.
Note :
The following example we are casting an int[][] into an int.*
This is not something you should do.
The goal here is to make sure you understand how an array of array is stored in memory.
💬 Quote : William R. Alger: The line of life is a ragged diagonal between duty and desire.


8. Double pointer, double fun
File : 100-set_string.c
Required : A function that sets the value of a pointer to a char.
