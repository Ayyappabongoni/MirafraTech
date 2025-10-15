/*
List A: 1 -> 2 -> 3 \
                      -> 6 -> 7
List B:       4 -> 5 /

*/


#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};

void intersection_check(struct Node* node1,struct Node* node2)
{
    struct Node* old=node2;
    while(node1->next!=NULL)
    {   
        node2=old;
        while(node2->next!=NULL)
        {
            if(node1/*->next*/ == node2/*->next*/)
            {
                printf("both the lists are using same\nnode1:%p\nnode2:%p\ndata:%d\n",node1,node2,node1->data);
            }
            node2=node2->next;
        }
        node1=node1->next;
    }
}
void printll(struct Node* node)
{
    while(node->next !=NULL)
    {
        printf(" %d",node->data);
        node = node->next;
    }
    
}

struct Node* newNode(int data) {
    struct Node* node = malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

int main() {
    // Shared part
    struct Node* n6 = newNode(6);
    n6->next = newNode(7);

    // List A: 1 -> 2 -> 3 -> 6 -> 7
    struct Node* headA = newNode(1);
    headA->next = newNode(2);
    headA->next->next = newNode(3);
    headA->next->next->next = n6;

    // List B: 4 -> 5 -> 6 -> 7
    struct Node* headB = newNode(4);
    headB->next = newNode(5);
    headB->next->next = n6;


   // printll(headA);
   intersection_check(headA,headB);
    //printf("Both lists intersect at node with data = %d\n", n6->data);
}


// use temp variable instead of main node
/*void intersection_check(struct Node* node1, struct Node* node2)
{
    struct Node* temp1 = node1;

    while(temp1 != NULL)
    {   
        struct Node* temp2 = node2;

        while(temp2 != NULL)
        {
            if(temp1 == temp2)  // compare addresses
            {
                printf("Intersection found! Node address: %p Data: %d\n", (void*)temp1, temp1->data);
                return; // stop after first intersection
            }
            temp2 = temp2->next;
        }

        temp1 = temp1->next;
    }

    printf("No intersection found\n");
}
*/


