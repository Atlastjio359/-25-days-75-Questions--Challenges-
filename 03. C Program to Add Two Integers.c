// 25-days-75-Questions-C-Coding-challange
// Question number 03 :- C Program to Add Two Integers

#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter two Integer : ");
    scanf("%d %d", &x, &y);
    z = x + y;
    printf("Sum of two integer;\n %d + %d = %d", x, y, z);
    return 0;
}
