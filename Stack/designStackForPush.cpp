/* 
int Stack[SIZE], top = -1;
int isFull();
int isEmpty();
Above variables are used for Stack, SIZE and top and all are global variables. Also above two functions are provided. */
// Function to add an item to stack.
void push(int item)
{
	if (isFull())
    {
        return;
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
// Function to return the minimum item from stack.
int getMin()
{
	 int a = top;
    int min = Stack[a];
    while (a != -1)
    {
        int x = Stack[a];
        if(x<min){
            min = x;
        }
        a--;
    }
    return min;
}