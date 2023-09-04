#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
} *head = NULL, *temp, *newnode, *pre, *cur, *ind;

void
newNode ()
{
  int vlu;
  printf ("Enter the number-");
  scanf ("%d", &vlu);
  newnode = (struct node *) malloc (sizeof (struct node));
  newnode->data = vlu;
  newnode->next = NULL;
  temp = head;
  if (head == NULL)
    {
      head = newnode;
    }
  else
    {
      while (temp->next != NULL)
	{
	  temp = temp->next;
	}
      temp->next = newnode;
    }
  printf ("%d is Inserted.\n", vlu);
}


void
insertFront ()
{
  int vlu;
  printf ("Enter the number-");
  scanf ("%d", &vlu);
  newnode = (struct node *) malloc (sizeof (struct node));
  newnode->data = vlu;
  newnode->next = NULL;
  temp = head;
  if (head == NULL)
    {
      head = newnode;
    }
  else
    {
      newnode->next = temp;
      head = newnode;
    }
  printf ("%d is Inserted.\n", vlu);
}

void
insertMiddle ()
{
  int vlu, pos, i = 1;
  printf ("Enter the position-");
  scanf ("%d", &pos);
  printf ("Enter the number-");
  scanf ("%d", &vlu);
  newnode = (struct node *) malloc (sizeof (struct node));
  newnode->data = vlu;
  newnode->next = NULL;
  temp = head;
  if (head == NULL)
    {
      head = newnode;
    }
  else
    {
      while (i < pos - 1)
	{
	  temp = temp->next;
	  i++;
	}
      newnode->next = temp->next;
      temp->next = newnode;
    }
  printf ("%d is Inserted in the position %d.\n", vlu, pos);
}

void
insertEnd ()
{
  int vlu;
  printf ("Enter the number-");
  scanf ("%d", &vlu);
  newnode = (struct node *) malloc (sizeof (struct node));
  newnode->data = vlu;
  newnode->next = NULL;
  temp = head;
  if (head == NULL)
    {
      head = newnode;
    }
  else
    {
      while (temp->next != NULL)
	{
	  temp = temp->next;
	}
      temp->next = newnode;
      temp = newnode;
    }

  printf ("%d is Inserted.\n", vlu);

}

void
delFront ()
{
  if (head == NULL)
    {
      printf ("\nList is empty\n");
    }
  else
    {
      temp = head;
      head = temp->next;
      free (temp);
    }
  printf ("Deleted.");
}

void
delpos ()
{
  if (head == NULL)
    {
      printf ("\nList is empty\n");
    }
  else
    {
      int pos, i = 1;
      printf ("\nEnter the position-");
      scanf ("%d", &pos);
      temp = head;
      while (i <= pos - 1)
	{
	  pre = temp;
	  temp = temp->next;
	  i++;
	}
      pre->next = temp->next;
      free (temp);
    }
  printf ("Deleted.");
}

void
delEnd ()
{
  if (head == NULL)
    {
      printf ("\nList is empty\n");
    }
  else
    {
      temp = head;
      while (temp->next != NULL)
	{
	  pre = temp;
	  temp = temp->next;
	}

      pre->next = NULL;
      free (temp);
    }
  printf ("Deleted.");
}

void sort()
{
    cur=head;
    int temp;
    while(cur!=NULL)
    {
        ind=cur->next;
        while(ind!=NULL)
        {
            if(cur->data>ind->data)
            {
                temp=cur->data;
                cur->data=ind->data;
                ind->data=temp;
            }
            ind=ind->next;
        }
        cur=cur->next;
    }
    printf("\nSorrted.");
}

void
display ()
{
  if (head == NULL)
    {
      printf ("Empty List!\n");
    }
  else
    {
      temp = head;
      printf ("Elements are ");
      while (temp != NULL)
	{
	  printf ("%d ", temp->data);
	  temp = temp->next;
	}
    }
}

int
main ()
{
  int n, a, vlu, pos;
  while (a)
    {
      printf
	("\nPress 1 to new list\nPress 2 to insert at front\nPress 3 to insert at middle\nPress 4 to insert at end\nPress 5 to delete at front\nPress 6 to delete at specific position\nPress 7 to delete at end\nPress 8 to display\nPress 9 to sort the list\nPress 10 to exit\n");
      scanf ("%d", &n);
      if (n <= 9)
	{
	  switch (n)
	    {
	    case 1:
	      newNode ();
	      break;
	    case 2:
	      insertFront ();
	      break;
	    case 3:
	      insertMiddle ();
	      break;
	    case 4:
	      insertEnd ();
	      break;
	    case 5:
	      delFront ();
	      break;
	    case 6:
	      delpos ();
	      break;
	    case 7:
	      delEnd ();
	      break;
	    case 8:
	      display ();
	      break;
	      case 9: sort();
	      break;
	    default:
	      printf ("Enter valid number.");

	    }
	}
      else if (n == 10)
	{
	  break;
	}

    }
}
