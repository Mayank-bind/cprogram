#include<stdio.h>
#define r 10
#define c 7
int main()
{
    int i=1,j=1;
    do
    {
       // j=1;
        do
        {
            printf("%d\t",i*j);
            j++;
        }
        while(j<=c);
        i++;
        printf("\n");
    }
    while(i<=r);


}
