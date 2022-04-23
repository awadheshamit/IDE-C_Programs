#include<stdio.h>
void main(  )
{
    
    int s[5];
    int i=0, t=0; double per=0;
    puts("Enter marks of 5 subjects out of 10 marks for each of the subjects: ");
    for(;i<5;i++)
    {
        scanf("%d",&s[i]);
        fflush(stdin);

    }
    printf("\n S=%d ", s[2]);
   for(i=0;i<5;i++)
    {
        t=t+s[i];
    }
    printf("\n T1=%d", t);
    per=(t*100)/(i*10.0);

    printf("\n T=%d  per=%lf", t,per);
    
}