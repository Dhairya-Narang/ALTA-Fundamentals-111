// Define a custom type called Node with a value field and a field that can point / refer to another Node of 
// the same type.Create two Node instances, manually link the first node's reference to the second, then 
// print both values by starting at the first node and following the link. This is the exact building block 
// a linked list is made of -- it directly sets up the Linked List section that follows.

#include <stdio.h>

struct node{
    int value;
    struct node *next; 
};

int main(){
    struct node node1;
    struct node node2;
    node1.value = 10;
    node2.value = 20;
    node1.next = &node2;
    printf("First value: %d\n", node1.value);
    printf("Second value (accessed via first): %d\n", node1.next->value);

    return 0;
    
}