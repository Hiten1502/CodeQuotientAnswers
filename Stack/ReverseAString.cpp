string reverseString(CQStack *stack,string s){
  	 string ans = "";
    CQStack *sp = new CQStack(s.length());
    for (int i = 0; i < s.length(); i++)
    {
        sp->push(s[i]);
    }
    for (int i = 0; i < s.length(); i++)
    {
        int temp = sp->pop();
        ans += temp;
    }
    return ans;
}
