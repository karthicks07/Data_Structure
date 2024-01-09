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
    
    public void insertFront(int data)
    {
        Node newnode=new Node(data);
        if(this.head==null)
        {
            this.head=newnode;
            System.out.println("Node inserted at front.\n");
        }
        else
        {
            Node current=this.head;
            this.head=newnode;
            newnode.next=current;
        }
        System.out.println("Node inserted at front.\n");
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
        l.insertFront(1);
        l.insertFront(2);
        l.insertFront(3);
        l.printList();
    }
}
