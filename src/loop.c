#include "stacks.h"

/**
 * loop - Runs the loop to take users input and performs stack operations
*/
void loop(void)
{
	int flag = 0;
	int input;
	int top = -1;
	int stack[SIZE];

	while (1)
	{
		input = print(flag);
		flag = 1;

		if (input == 1)
		{
			push(&top, stack);
			continue;
		}
		if (input == 2)
		{
			pop(&top, stack);
			continue;
		}
		if (input == 3)
		{
			show(&top, stack);
			continue;
		}
		if (input == 4)
			break;

		printf("\nInvalid choice!\n\n");
	}
}


/**
 * print - Prints the instructions to the user in an interactive mode
 * @flag: Checks if loop is ran for the first time or not
 * Return: User input
*/
int print(int flag)
{
	int input;

	if (flag == 0)
		printf("Hello there!\n");

	printf("Below are the operations you can execute on the stack:\n");
	printf("1. Push (Insert an element)\n");
	printf("2. Pop (Deletes last element)\n");
	printf("3. Show (Lists all elements in the stack)\n");
	printf("4. Quit (Exit program)\n\n");
	printf("Please enter your choice from 1 to 4: ");

	scanf("%d", &input);

	return (input);
}
