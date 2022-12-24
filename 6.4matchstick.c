#include<stdio.h>
int main()
{
    int m=21,p,c;
    while(1)
    {
        printf("\ntotal no. of match stick: %d",m);
        printf("\nPick 1 or 2 or 3 or 4 match sticks:");
        scanf("%d",&p);
        if(p<1 || p>4)
        {
            continue;
        }
        printf("\nYou picked %d match sticks",p);
        m=m-p;
        c=5-p;
        printf("\nComputer picked %d match sticks",c);
        m=m-c;
        if(m==1)
        {
            printf("\nThe last stick is picked by you");
            printf("\nYou lose!!!");
            break;
        }
    }
}
