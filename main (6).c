/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
 int num, reverse = 0;
 printf("Enter any number to find reverse: ");
 scanf("%d", &num);
 while(num != 0)
 {
 reverse = (reverse * 10) + (num % 10);
 num /= 10;
 }
printf("Reverse = %d", reverse);
return 0;
}
