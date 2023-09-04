#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *lf,*rt;
}*r,*t,*nw,*a[50];
void insert()
{
    int ch,flag,i=-1,j=-1;
    nw=(struct node*)malloc(sizeof(struct node));
      printf("\nEnter the root node - ");
    nw->lf=NULL;
    nw->rt=NULL;
    scanf("%d",&nw->data);
    i++;
    a[i]=nw;
    if(j==-1)
    {
        j++;
        r=nw;
    }
    flag=0;
    ch=1;
    while(ch!=0)
    {
        nw=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter the child node - ");
        scanf("%d",&nw->data);
        nw->lf=NULL;
        nw->rt=NULL;
        i++;
        a[i]=nw;
        if(flag==0)
        {
            t=a[j];
            t->lf=nw;
            flag=1;
        }
        else
        {
            t=a[j];
            t->rt=nw;
            j++;
            flag=0;
        }
        printf("Inserted\nPress 1 to continue\nPress 0 to exit from insertion ==> ");
        scanf("%d",&ch);
    }
}
int display(struct node *z)
{
    if(z==NULL)
    {
        return 0;
    }
    else
    {
        display(z->lf);
        printf("%d ",z->data);
        display(z->rt);
        
    }
}

int main()
{
    int n,k;
    while(k)
    {
    printf("\nPress 1 to insert a node\nPress 2 to display\nPress 3 to exit ==> ");
    scanf("%d",&n);
    if(n<=3)
    {
    switch(n)
    {
        case 1: insert();
        break;
        case 2: display(r);
        break;
    }
    }
    else
    {
        break;
    }
    }
    
}
