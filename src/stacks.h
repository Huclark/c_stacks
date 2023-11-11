#ifndef STACKS_H
#define STACKS_H

/* Standard library headers */
#include <stdio.h>
#include <stdlib.h>

/* MACRO */
#define SIZE	10

/* Prototypes for custom functions */
void loop(void);
int print(int flags);
void push(int *top, int stack[SIZE]);
void pop(int *top, int stack[SIZE]);
void show(int *top, int stack[SIZE]);

#endif
