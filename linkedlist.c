#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
    struct node *head;

void create(){
    struct node *new_node,*temp;
    new_node =(struct node *) malloc(sizeof(struct node));
    if (new_node == NULL)
    {
        printf("out of memory");
    }else
    {
        printf("\nenter data : ");
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        if (head==NULL)
        {
            head=new_node;
        }else
        {
            temp=head;
            while (temp->next != NULL)
            {
                temp=temp->next;

            }
            temp->next=new_node;
        }
        
        
        
    }
    
    
}

void inB(){
    struct node *new_node;
    new_node =(struct node *) malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    if (head == NULL)
    {
        head=new_node;
    }else
    {
        new_node->next=head;
        head=new_node;
    }
    
    
}
void inE(){
    struct node *new_node,*temp;
    new_node = (struct node *) malloc(sizeof(struct node));
    new_node->next=NULL;
    printf("Enter data : ");
    scanf("%d",&new_node->data);
    if (head==NULL)
    {
        head=new_node;
    }else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next=new_node;
        free(temp);
    }
    
    
}
void inM(){
    struct node *new_node,*temp,*prev;
    new_node = (struct node *) malloc(sizeof(struct node));
    new_node->next=NULL;
    printf("Enter data : ");
    scanf("%d",&new_node->data);
    if (head == NULL)
    {
        head=new_node;
    }else
    {
        int loc,i;
        printf("enter location number insert the data where ur want : ");
        scanf("%d",&loc);
        temp=head;
        for ( i = 0; i < loc; i++)
        {
            prev = temp;
            temp=temp->next;
        }
        new_node->next=temp;
        prev->next = temp;
        free(temp);
        
    }
    
    
}

void delB(){
    if (head == NULL)
    {
        printf("out of memeory");

    }else
    {
        printf("deleted : %d",head->data);
        head=head->next;
    }
    
    
}
void delE(){
    if (head == NULL)
    {
            printf("out of memory");
    }else
    {
        struct node *temp,*prev;
        temp=head;
        while (temp->next != NULL)
        {
            prev=temp;
            temp=temp->next;
        }
        printf("deleted : %d",temp->data);
        prev->next = NULL;
        free(temp);
    }
    
}
void delM(){
    if (head == NULL)
    {
        printf("out of memory");

    }else
    {

        int loc,i;
        printf("enter location number were u wanted to delete : ");
        scanf("%d",&loc);
        struct node *temp,*prev;
        temp=head;
        for ( i = 0; i < loc; i++)
        {
            prev=temp;
            temp=temp->next;
        }
        printf("deleted : %d",temp->data);
        prev->next=temp->next;
        free(temp);
        
    }
    
    
}

void display(){
    if (head == NULL)
    {
        printf("out of memory");
    }
    else
    {
        struct node *temp;
        temp=head;
        printf("Liked List is :");
        while (temp != NULL)
        {
            printf("->%d ",temp->data);
            temp=temp->next;
        }
        
    }
    
    
}

int main(int argc, char const *argv[])
{
    int ch;
    do
    {
        printf("\n\tLinkedlist - \n1. create\n2. insert Begin\n3. insert mid\n4. insert end\n5. delete begin\n6. delete mid\n7. delete end\n8. display\n0. exit\nEnter ur choise : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            inB();
            break;
        case 3:
            inM();
            break;
        case 4:
            inE();
            break;
        case 5:
            delB();
            break;
        case 6:
            delM();
            break;
        case 7:
            delE();
            break;
        case 8:
            display();
            break;
        case 0:
            printf("exiting....");
            exit(0);
            break;
        default:
            printf("invalids....");
            break;
        }
    } while (ch != 0);


    return 0;
}



