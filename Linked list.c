#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;

void insert(node *ptr, int data)
{
    node *start=ptr;
    while (ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=(node*)malloc(sizeof(node));
    ptr=ptr->next;
    ptr->data=data;
    ptr->next=NULL;
}

void insertbeg(node *ptr, int data)
{
    node *start=ptr;
    node *newnode=(node*)malloc(sizeof(node));
    newnode->data=data;
    newnode->next=ptr;
    newnode=start;
}

void insertbefore(node *ptr, int data, int givdata)
{
    node *start=ptr;
    while (ptr->next!=NULL && ptr->next->data!=givdata ){
        ptr=ptr->next;
    }
    if (ptr->next==NULL){
        printf("Element %d isn't present in the list\n",givdata);
        return;
    }
    node *newnode=(node*)malloc(sizeof(node));
    newnode->data=data;
    newnode->next=ptr->next;
    ptr->next=newnode;
}

void insertafter(node *ptr, int data, int givdata)
{
    node *start=ptr;
    while (ptr!=NULL && ptr->data!=givdata){
        ptr=ptr->next;
    }
    if (ptr==NULL){
        printf("Element %d isn't present in the list\n",givdata);
        return;
    }
    node *newnode=(node*)malloc(sizeof(node));
    newnode->data=data;
    newnode->next=ptr->next;
    ptr->next=newnode;
}

int find(node *ptr, int key){
    node *start=ptr;
    ptr=ptr->next;
    while (ptr!=NULL){
        if (ptr->data==key){
            return 1;
        }
        ptr=ptr->next;
    }
    return 0;
}

void delete(node *ptr, int data){
    node *start=ptr;
    while (ptr->next!=NULL && (ptr->next)->data!=data){
        ptr=ptr->next;
    }
    if (ptr->next==NULL){
        printf("Element %d not present in the list \n",data);
        return;
    }
    node *temp;
    temp=ptr->next;
    ptr->next=temp->next;
    free (temp);
    return;
}

void print(node *start, node *ptr){
    if (ptr==NULL){
        return;
    }
    printf("%d ",ptr->data);
    print(start,ptr->next);
}

int main(){
    node *start, *temp, *head;
    start=(node*)malloc(sizeof(node));
    temp=start;
    temp->next=NULL;
    printf("1. Insert at end of list\n");
    printf("2. Insert at beginning of list\n");
    printf("3. Insert before a node\n");
    printf("4. Insert after a node\n");
    printf("5. Delete\n");
    printf("6. Print\n");
    printf("7. Find\n");
    printf("8. EXIT\n");

    while(1){
        printf("Enter your choice: \n");
        int choice;
        scanf("%d",&choice);
        if (choice==1){
            int data;
            printf("The elemnt to be inserted at end of the list is: ");
            scanf("%d",&data);
            insert(start,data);
        }

        else if(choice==2){
            int data;
            printf("The element to be inserted at beginning of the list is: ");
            scanf("%d",&data);
            insertbeg(start,data);
        }

        else if(choice==3){
            int data, givdata;
            printf("The element before which data needs to inserted is: ");
            scanf("%d", &givdata);
            printf("The element to be inserted before a node is: ");
            scanf("%d",&data);
            insertbefore(start, data, givdata);
        }

        else if(choice==4){
            int data, givdata;
            printf("The element after which data needs to inserted is: ");
            scanf("%d", &givdata);
            printf("The element to be inserted after a node is: ");
            scanf("%d",&data);
            insertafter(start, data, givdata);
        }

        else if (choice==5){
            int data;
            printf("The element to be deleted from the list is: ");
            scanf("%d",&data);
            delete(start,data);
        }

        else if(choice==6){
            printf("The list is: ");
            print(start,start->next);
            printf("\n");
        }

        else if (choice==7){
            int data;
            printf("The element to be searched in the list is: ");
            scanf("%d",&data);
            int status=find(start, data);
            if (status){
                printf("Element found\n");
            }
            else{
                printf("Element not found\n");
            }
        }
        else if (choice==8){
            break;
        }

        else
            break;
    }
}