struct stack{
  int size;
  char data;
  int top;
};
int isOperand(char ch){
    return (ch>= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z' || (isdigit(ch)));
}
int checkPrecedence(char ch){
    switch(ch){
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
    }
    return -1;
}
int infixToPostfix(char exp[], char output[])
{
	 int i = 0,k = 0;
    while (exp[i])
    {
        if(isOperand(exp[i])){
            output[k++] = exp[i];
        }
        else if(exp[i] == '('){
            push(exp[i]);
        }
        else if(exp[i] == ')'){
            while (!isEmpty() && Stack[top] != '(')
            {
                output[k++] = Stack[top];
                pop();
            }
            if(!isEmpty() && Stack[top] != '('){
                return -1;
            }
            else{
                pop();
            }
        }
        else{
            while (!isEmpty() && checkPrecedence(exp[i]) <= checkPrecedence(Stack[top]))
            {
                output[k++] = Stack[top];
                pop();
            }
            push(exp[i]);
        }
        i++;
    }
    while (!isEmpty())
    {
        output[k++] = Stack[top];
        pop();
    }
    output[k++] = '\0';
}