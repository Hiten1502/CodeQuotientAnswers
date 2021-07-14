int minReversal(char* expr){
  int len = strlen(expr);
    if (len%2)
	return -1;
	stack<char> s;
	for (int i=0; i<len; i++)
	{
		if (expr[i]==']' && !s.empty())
		{
			if (s.top()=='[')
				s.pop();
			else
				s.push(expr[i]);
		}
		else
			s.push(expr[i]);
	}
	int x = s.size();
	int n = 0;
	while (!s.empty() && s.top() == '[')
	{
		s.pop();
		n++;
	}
	return (x/2 + n%2);
}
