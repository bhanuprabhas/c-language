#include<studio.h>
#include<conio.h>
Main()
{
Char ch
//Here "ch" variable gets memory allocation with empty.
Printf("enter one char:");
Scanf("%c"&ch);
//After scanning the value goes to ch variable memory.
//By using & you address the character in variable 'ch'.
Printf("ASCII value is:%d",ch);
}
