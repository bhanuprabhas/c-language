#include<stdio.h>
#include<conio.h>
int main()
{
char ch;
//Here "ch" variable gets memory allocation with empty.
printf("enter one char:");
scanf("%c",&ch);
//After scanning the value goes to ch variable memory.
//By using & you address the character in variable 'ch'.
printf("ASCII value is:%d",ch);
}
