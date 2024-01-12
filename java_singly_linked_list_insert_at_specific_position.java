import java.util.*;
class Node 
{
    int data;
    Node next;

    public Node(int data)
    {
        this.data=data;
        this.next=null;
    }
}
class LinkedList
{
    Node head;

    public LinkedList()
    {
        this.head=null;
    }
    
    public void append(int data)
    {
        Node newnode=new Node(data);
        if(head==null)
        {
            this.head=newnode;
            System.out.println("Node inserted.\n");
        }
        else
        {
            Node lastnode=this.head;
            while(lastnode.next!=null)
            {
                lastnode=lastnode.next;
            }
            lastnode.next=newnode;
            System.out.println("Node inserted.\n");
        }
    }
    
    public void insertpos(int data,int position)
    {
        Node newnode=new Node(data);
        if(this.head==null)
        {
            System.out.println("List is empty.\n");
        }
        if(position==0)
        {
            this.head=newnode;
        }
        else
        {
            Node current=this.head;
            int count=0;
            while(current!=null && count<position-1)
            {
                current=current.next;
                count++;
            }
            if(current==null)
            {
                System.out.println("Position out of bound\n");
            }
            newnode.next=current.next;
            current.next=newnode;
            System.out.println("Node inserted.\n");
        }
    }
    
    public void printList()
        {
            Node current=this.head;
            if(this.head==null)
            {
                System.out.println("List is empty.\n");
            }
            System.out.print("List elements --> ");
            while(current!=null)
            {
                System.out.print(current.data+" ");
                current=current.next;
            }
            System.out.println("\n");
        }
}

class Main
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        LinkedList l=new LinkedList();
        l.append(1);
        l.append(2);
        l.append(3);
        l.insertpos(4,1);
        l.insertpos(5,2);
        l.insertpos(6,2);
        l.printList();
    }
}
