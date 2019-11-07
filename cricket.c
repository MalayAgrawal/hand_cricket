#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void main()
{
    int i,r,p,cp=0,pp=0,w=0;
    srand(time(0));
    printf("\n         COMPUTER WILL BAT FIRST \n");
    while(w!=1)
    {
        r=rand();
        do
        {
            r=r/10;
            if(r>=7||r<=1)
            {
                r=rand();
            }
        }
        while (r>=7);
        printf("cricket cricket cricket = ");
        scanf("%d",&p);
        printf("computer chose          = %d",r);
        if(r==p)
        {
            printf("\n\n HOW WAS THAT\n\n");
            w++;
        }
        else
        {
            cp+=r;
        }
        printf("\n\n\ncomputer point = %d",cp);
        printf("\nyour score     = %d\n",pp);
    }
    w=0;
    srand(time(0));
    while(w!=1)
    {
        r=rand();
        do
        {
            r=r/10;
            if(r>=7||r<=1)
            {
                r=rand();
            }
        }
        while (r>=7);
        printf("cricket cricket cricket = ");
        scanf("%d",&p);
        printf("computer chose          = %d",r);
        if(r==p)
        {
            printf("\n\nHOW WAS THAT\n\n");
            w++;
        }
        else
        {
            pp+=p;
        }
        printf("\n\n\ncomputer point = %d",cp);
        printf("\nyour score     = %d\n",pp);
    } 
    if(cp>pp)
    {
        printf("\n\n\n                 you lost by %d runs    \n\n",cp-pp);
    }      
    else
    {
        printf("\n\n\n                  You Won BY  %d runs   \n\n",pp-cp);
    }
    
}