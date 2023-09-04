#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL,*temp,*nw,*nextnode,*currentnode,*prenode=NULL;

void insert()
{
  int vlu;
  printf ("Enter the number-");
  scanf ("%d", &vlu);
  nw = (struct node *) malloc (sizeof (struct node));
  nw->data = vlu;
  nw->next = NULL;
  temp = head;
  if (head == NULL)
    {
      head = nw;
    }
  else
    {
      while (temp->next != NULL)
	{
	  temp = temp->next;
	}
      temp->next = nw;
      temp = nw;
    }

  printf ("%d is Inserted.\n", vlu);

}

void reverse()
{
    prenode=NULL;
      currentnode=nextnode=head;
      while(nextnode!=NULL)
      {
          nextnode=nextnode->next;
          currentnode->next=prenode;
          prenode=currentnode;
          currentnode=nextnode;
      }
      head=prenode;
      
    printf("Reversed\n");
}

void display ()
{
  if (head == NULL)
    {
      printf ("Empty List!\n");
    }
  else
    {
      temp = head;
      printf ("Reversed list - ");
      while (temp != NULL)
	{
	  printf ("%d ", temp->data);
	  temp = temp->next;
	}
    }
}

int main()
{
    int n,a,ch;
    while(a)
    {
    printf("\nPress 1 to insert a node\nPress 2 to reverse a list\nPress 3 to display\nPress 4 to exit\n");
    scanf("%d", &n);
    if(n<=3)
    {
    switch(n)
    {
        case 1: insert();
        break;
        case 2: reverse();
        break;
        case 3: display();
        break;
        default: printf("Enter valid number\n");
    }
    }
    else if(n==4)
    {
        break;
    }
    }
}




