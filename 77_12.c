#include<stdio.h>
void main()
{
    int marks=0;
    puts("Enter the marks: ");
    scanf("%d", &marks);
    if(marks>=80)
        printf(" Grade is A");
    else if(marks<80 && marks>60)
        printf(" Grade is B");
    else if(marks<60 && marks>40)
        printf(" Grade is C");
    else 
        printf(" Grade is F");
}