int isFull()
{
	return top == SIZE - 1;
}
// Function to check if stack is empty.
int isEmpty()
{
	return top == -1;
}
// Function to add an item to stack.
int push(int item)
{
	 if (isFull())
    {
        return -1;
    }
    else{
        Stack[++top] = item;
    }
}
// Function to remove an item from stack.
int pop()
{
	if(isEmpty()){
        return -1;
    }
    else{
        int val = Stack[top--];
        return val;
    }
}
