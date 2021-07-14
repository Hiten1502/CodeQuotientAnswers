/* pop(),push(int j) already defined in stack */
int evalPostfix(CQStack *stack,string exp){
    int answer;
    CQStack *st = new CQStack(exp.length());
    for (int i = 0; i < exp[i]; i++)
    {
        if(isdigit(exp[i])){
            st->push(exp[i] - '0');
        }
        else{
            int op2 = st->pop();
            int op1 = st->pop();
            switch (exp[i])
            {
            case '+':
                st->push(op1 + op2);
                break;
            case '-':
                st->push(op1 - op2);
                break;
            case '*':
                st->push(op1 * op2);
                break;
            case '/':
                st->push(op1 / op2);
                break;
              case '^':
                st->push(pow(op1,op2));
            }
        }
    }
    answer = st->pop();
    return answer;
}