#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next,*prev;
} *head = NULL, *temp, *new,*newnode,*last;

void InsertFront ()
{
  int vlu;
  printf ("Enter the number - ");
  scanf ("%d", &vlu);
  new = (struct node *) malloc (sizeof (struct node));
  new->data = vlu;
  new->prev=NULL;
  new->next = NULL;
  temp = head;
  if (head == NULL)
    {
      head =temp= new;
    }
    else
    {
        new->next=head;
        head=new;
        new->prev=NULL;
    }
    printf("Inserted.\n");
  
}

void InsertMid()
{
    int vlu,pos,i=1;
    printf("Enter the number - ");
    scanf("%d",&vlu);
    printf("Enter the position - ");
    scanf("%d",&pos);
    new = (struct node *) malloc (sizeof (struct node));
    new->data=vlu;
    new->next=NULL;
    new->prev=NULL;
    temp=head;
    if(head==NULL)
    {
        head=new;
    }
    else
    {
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        new->next=temp->next;
        new->prev=temp;
        temp->next=new;
    }
    printf("Inserted.\n");
    
}

void InsertEnd()
{
    int vlu;
    printf("Enter the number - ");
    scanf("%d",&vlu);
    new = (struct node *) malloc (sizeof (struct node));
    new->data=vlu;
    new->prev=NULL;
    new->next=NULL;
    temp=head;
    if(head==NULL)
    {
        head=new;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new;
        new->prev=temp;
        temp=new;
    }
    printf("Inserted.\n");
}

void delFront()
{
    if(head==NULL)
    {
        printf("\nEmpty list.\n");
    }
    else
    {
        temp=head;
        head=temp->next;
        free(temp);
    }
    printf("Deleted.\n");
}

void delMid()
{
    int vlu,pos,i=0;
    if(head==NULL)
    {
        printf("Empty list.\n");
        
    }
    else if(head->next==NULL)
    {
        
        printf("This list contains only one element,So try deleting at front.\n");
        
    }
    else
    {
        printf("Enter the position - ");
        scanf("%d",&pos);
        temp=head;
        while(i<pos-1)
        {
            last=temp;
            temp=temp->next;
            i++;
        }
        newnode=temp->next;
        last->next=temp->next;
        newnode->prev=last;
        free(temp);
        printf("Deleted.\n");
    }
    
}

void delEnd()
{
    if(head==NULL)
    {
        printf("Empty list.\n");
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            last=temp;
            temp=temp->next;
        }
        last->next=NULL;
        free(temp);
    }
    printf("Deleted.\n");
}

void display()
{
   if (head==NULL)
   {
       printf("Empty list.\n");
   }
   else
   {
       temp=head;
       printf("\nElements are - ");
       while(temp!=NULL)
       {
           printf("%d ",temp->data);
           temp=temp->next;
       }
       
   }
}

int main()
{
    int n,a;
    while(a)
    {
        printf("\nPress 1 to insert at front\nPress 2 to insert at specific position\nPress 3 to insert at last\nPress 4 to delete at front\nPress 5 to delete at specific position\nPress 6 to delete at end\nPress 7 to display ==> ");
        scanf("%d",&n);
        if(n<=7)
        {
            switch(n)
            {
                case 1: InsertFront();
                break;
                case 2: InsertMid();
                break;
                case 3: InsertEnd();
                break;
                case 4: delFront();
                break;
                case 5: delMid();
                break;
                case 6: delEnd();
                break;
                case 7: display();
                break;
                default:
                printf("Enter valid number.");
            }
        }
        else
        {
            break;
        }
    }
}

