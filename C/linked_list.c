#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
	int value;
	struct node *next;
} NODE;

NODE *head = NULL;

// add element to front of list
void add_front(int input){
	// create new node with input value
	NODE *new;
	new = (NODE *) malloc(sizeof(NODE));
	new->value = input;
	// set new.next to old first node
	new->next = head;
	// set head to new first node
	head = new;
}

// add element to end of list
void add_end(int input){
	// create new node with input value
	NODE *new, *ptr;
	new = (NODE *) malloc(sizeof(NODE));
	new->value = input;
	new->next = NULL;
	// if list is empty, set head to new node
	if(head == NULL){
		head = new;
	}
	// find end of list
	for(ptr = head; ptr->next != NULL; ptr = ptr->next){
	}
	// set second to last node.next to new node
	ptr->next = new;
}

// delete first occurence of node with input value
void delete_element(int input){
	NODE *p, *prev;
	prev = NULL;
	// traverse list
	for(p = head; p != NULL; p = p->next){
		// if input value found
		if(p->value == input){
			// if node is first node, set head to 2nd node
			if(prev == NULL){
				head = p->next;
			}
			// else set previous node.next to next node.next
			else{
				prev->next = p->next;
			}
			free(p);
			return;
		}
		// set prev to old node before looping
		prev = p;
	}
}

// print all list items
void print_list(NODE **start){
	// input is pointer to pointer
	NODE **tracer = start;
	// until NULL pointer is reached
	while((*tracer) != NULL){
		// print referrenced value and move to next node
		printf("%d \n",(*tracer)->value);
		tracer = &(*tracer)->next;
	}
}

int main(){
	add_front(3);
	add_end(6);
	add_front(4);

	printf("Initial List:\n");
	print_list(&head);

	delete_element(6);
	printf("Removed '6'\nUpdated List:\n");
	print_list(&head);
	return 0;
}
