# Stack in C programming
![alt text](https://preview.redd.it/31vv0v6r7qm01.jpg?width=640&crop=smart&auto=webp&s=eff4ad083eace822895875fc87ffe0905a271dc8)
## Table of Content
- [About](#about)
- [Objective](#objective)
- [Installation](#installation)
- [Usage](#usage)
	- [Example:](#example)
		- [push()](#push)
		- [show()](#show)
		- [pop()](#pop)
- [Contribution](#contribution)
## About
This program is a simple implementation of stack in C.

## Objective
I wrote this program in order to gain a fair understanding on how Stack in C is implemented. In this program I implement stacks using arrays in C.

## Installation
Clone the repository using the command:
```
git clone https://github.com/Huclark/c_stacks.git
```

## Usage
This program presents the user with four options:<br>

	1. Push - Inserts element<br>
	2. Pop - Deletes the last element<br>
	3. Show - Lists all elements in stack<br>
	4. End - Exits the program<br>
Firstly, `cd` into the repository and use `./stacks` to run program.

### Example:

#### push()
`push()` the number `"5"` onto the stack:<br>
```
Hello there!
Below are the operations you can execute on the stack:
1. Push (Insert an element)
2. Pop (Deletes last element)
3. Show (Lists all elements in the stack)
4. Quit (Exit program)

Please enter your choice from 1 to 4: 1

Please enter the integer to be added to the stack: 5
```
#### show()
`show()` the elements on the stack:<br>
```
Below are the operations you can execute on the stack:
1. Push (Insert an element)
2. Pop (Deletes last element)
3. Show (Lists all elements in the stack)
4. Quit (Exit program)

Please enter your choice from 1 to 4: 3

List of integers in stack: 
Element 0: 5
```
#### pop()
`pop()` the number `"5"` from the stack:<br>
```
Below are the operations you can execute on the stack:
1. Push (Insert an element)
2. Pop (Deletes last element)
3. Show (Lists all elements in the stack)
4. Quit (Exit program)

Please enter your choice from 1 to 4: 2

Integer deleted: 5
```

Now, the stack is empty. Attempt to `pop()` again:<br>
```
Below are the operations you can execute on the stack:
1. Push (Insert an element)
2. Pop (Deletes last element)
3. Show (Lists all elements in the stack)
4. Quit (Exit program)

Please enter your choice from 1 to 4: 2

Stack is already empty!
```

You may keep experimenting to understand how stacks work.<br> 

_**NOTE:** Please ensure you always input an integer as the program is not yet designed to take in non-integers as input._

## Contribution
I am accepting pull requests. Please feel free to hit me up to suggest any improvements to make the program run better.

You may reach out to me through email: vhuclark@gmail.com
