#include "stack.h"
#include <stdio.h>

int main()
{
	Stack s1 = Create_stacK();
	Stack s2 = Create_stacK();
	Stack s3 = Create_stacK();

	Push(s1, 1);
	Push(s2, 10);
	Push(s3, 100);
	Push(s3, 200);

	Print_stack(s1);
	Print_stack(s2);
	Print_stack(s3);

	printf("Peek : %d\n", Peek(s1));
	printf("Pop : %d\n", Pop(s1));
	printf("\n\n");

	printf("Pop : %d\n", Pop(s3));
	printf("\n\n");

	Push(s2, 20);
	Push(s2, 30);
	Push(s2, 40);
	Push(s3, 300);
	
	Print_stack(s1);
	Print_stack(s2);
	Print_stack(s3);

	_CrtDumpMemoryLeaks();
	return 0;
}