#include "stacks.h"

/**
 * push - Adds an element to the stack
 * @top: A pointer to the index of the last element of the stack
 * @stack: A pointer to the stack array
*/
void push(int *top, int stack[SIZE])
{
	int input;

	/* If stack is full */
	if (*top == SIZE - 1)
		printf("\nStack Overflow!\n\n");

	else
	{
		printf("\nPlease enter the integer to be added to the stack: ");
		scanf("%d", &input);

		printf("\n\n");

		*top += 1; /* move pointer to point to the next element in stack */
		stack[*top] = input; /* add new element to stack */
	}
}


/**
 * pop - Deletes the last element in a stack
 * @top: A pointer to the index of the last element of the stack
 * @stack: A pointer to the stack array
*/
void pop(int *top, int stack[SIZE])
{
	/* If stack is empty */
	if (*top == -1)
		printf("\nStack is already empty!\n\n");

	else
	{
		printf("\nInteger deleted: %d\n\n", stack[*top]);
		*top -= 1;
	}
}


/**
 * show - Deletes the last element in a stack
 * @top: A pointer to the index of the last element of the stack
 * @stack: A pointer to the stack array
*/
void show(int *top, int stack[SIZE])
{
	int idx = *top;

	/* If stack is empty */
	if (*top == -1)
		printf("\nStack is empty. Nothing to show!\n\n");

	else
	{
		printf("\nList of integers in stack: \n");

		while (idx > -1)
		{
			printf("Element %d: %d\n\n\n", idx, stack[idx]);
			idx--;
		}
	}
}
