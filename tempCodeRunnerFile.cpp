#include<stdio.h>
#include<stdlib.h>
 
struct node
{
    int data;
    struct node* link;
};
 
struct node *head;
struct node *tail;
void insert_at_head()
{
    int data;
    struct node *newnode;

    printf("enter the data: ");
    scanf("%d", &data);
    if (head == NULL)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = data;
        newnode->link = NULL;
        head = newnode;
    }
    else
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = data;
        newnode->link = head;
        head = newnode;
    }
}
 
// function to find out middle element
struct node* middle(struct node* start,struct node* last)
{
    if (start == NULL)
        return NULL;
 
    struct node* slow = start;
    struct node* fast = start -> link;
 
    while (fast != last)
    {
        fast = fast -> link;
        if (fast != last)
        {
            slow = slow -> link;
            fast = fast -> link;
        }
    }
 
    return slow;
}
 
// Function for implementing the Binary
// Search on linked list
struct node* binarySearch(struct node *head, int key)
{
    struct node* start = head;
    struct node* last = NULL;
 
    do
    {
        // Find middle
        struct node* mid = middle(start, last);
 
        // If middle is empty
        if (mid == NULL)
            return NULL;
 
        // Ifkey is present at middle
        if (mid -> data ==key)
            return mid;
 
        // Ifkey is more than mid
        else if (mid -> data <key)
            start = mid -> link;
 
        // If thekey is less than mid.
        else
            last = mid;
 
    } while (last == NULL ||
             last != start);
 
    //key not present
    return NULL;
}
 
// Driver Code
int main()
{
       int option, key;
    do
    {
        printf("\n1:insert\n2:display\n");
        printf("enter the options: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            insert_at_head();
            break;
        
        case 3:

            printf("enter the key : ");
            scanf("%d", &key);
            struct node *index = binarySearch(head,key);
            printf("we found thekey %d ", index->data);
            break;
       
        }

    } while (option != 5);
}