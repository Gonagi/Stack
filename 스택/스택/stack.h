#ifndef STACK_H
#define STACK_H

#endif
#include <stdio.h>
#include <stdlib.h>	//EXIT_FAILURE

typedef int Item;
typedef struct node* Node;
typedef struct stack* Stack;

Node Create_node();
Stack Create_stacK();
void terminate(char*);