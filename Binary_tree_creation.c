#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left,*right;
}*root=NULL,*temp,*newnode,*a[100];
void create_tree(){
    int i=-1,j=-1,flag=0,c=1;
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->left=NULL;
    newnode->right=NULL;
    i++;
    a[i]=newnode;
    if(root==NULL){
        j++;
        root=newnode;
    }
    while(c){
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->left=NULL;
        newnode->right=NULL;
        i++;
        a[i]=newnode;
        if(flag==0){   
            temp=a[j];
            temp->left=newnode;
            flag=1;
        }
        else if(flag==1){
            temp=a[j];
            temp->right=newnode;
            flag=0;
            j++;
        }
        printf("Press 1 to continue\nPress 0 to exit\n");
        scanf("%d",&c);
        if(c==0)
        break;
    }
}
void postorder(struct node *w){
    if(w!=NULL){
        postorder(w->left);
        postorder(w->right);
        printf("%d ",w->data);
    }
}
int main(){
    create_tree();
    postorder(root);
    
}
