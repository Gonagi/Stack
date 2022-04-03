#include "stack.h"

struct node {
	Item data;
	Node next;
};

struct stack {
	Node top;
};