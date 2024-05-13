#include<stdio.h>
void main()
{
    int f=-1,r=-1,n,op,item,a[10],i;
    printf("enter the limit");
    scanf("%d",&n);
    do
    {
    printf("enter the option");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
        printf("enter the element");
        scanf("%d",&item);
        if(f==(r+1)%n)
        {
            printf("queue is full");
        }
        else if(f==-1&&r==-1)
        {
            f=0;r=0;
            a[r]=item;
                    printf("%d entered into queue",item);
        }
        else
        {
            r=(r+1)%n;
            a[r]=item;
            printf("%d entered into queue",item);
        }
        break;
        case 2:
        if(f==-1)
        {
            
            printf("queue is empty");
        }
        else if(f==r)
        {
            item=a[f];
            f=-1;
            r=-1;
                  printf("%d deleted from queue",item);
        
        }
        else
        {
            item=a[f];
            f=(f+1)%n;
              printf("%d deleted from queue",item);
        }
        break;
        case 3:
        printf("queue=");
        if(f==-1)
        {
            printf("queue is empty");
        }
        else
        {
            for(i=f;i!=r;i=(i+1)%n)
            {
                printf("%d",a[i]);
            }
             printf("%d",a[i]);
        }
    }
}while(1);
}git add