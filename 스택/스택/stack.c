#include "stack.h"

struct node {
	Item data;
	Node next;
};

struct stack {
	Node top;
};

Node Create_node() 
{
	Node new_node = (Node)malloc(sizeof(struct node));
	if (new_node == NULL)
		terminate("Error in Create_node : node could not be created.");
	new_node->data = NULL;
	new_node->next = NULL;

	return new_node;
}

Stack Create_stack()
{
	Stack new_stack = (Stack)malloc(sizeof(struct stack));
	if (new_stack == NULL)
		terminate("Error in create_stack : stack oould not be created.");
	new_stack->top = NULL;

	return new_stack;
}

void terminate(char* message) 
{
	printf("%s\n", message);
	exit(EXIT_FAILURE);
}