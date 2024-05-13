#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n,item,i,top=-1,a[10],op;
    printf("enter the limit\n");
    scanf("%d",&n);
    do
    {
    printf("\n1.PUSH\t2.POP\t3.PEEK\t4.DISPLAY\t5.EXIT\n");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
        printf("enter the element\n");
        scanf("%d",&item);
        if(top==n-1)
        {
            printf("stack overflow");
        
        }
        else
        {
            top++;
            a[top]=item;
            printf("%d inserted to the stack",item);
        }
        break;
        case 2:
        if(top==-1)
        {
            printf("stack underflow");
            
        }
        else
        {
                printf("%d is the deleted from stack",a[top]);
            item=a[top];
            top--;
        }
        break;
        case 3:
        if(top==-1)
        {
            printf("stack underflow");
        }
        else
        {
            printf("%d is the top element",a[top]);
        }
        break;
        case 4:
        printf("stack=");
        for(i=top;i>=0;i--)
        {
            printf("%d\t",a[i]);
        }
        break;
        case 5:
        exit(0);
        break;
        default:
        printf("invalid option");
    }
}while(1);
}