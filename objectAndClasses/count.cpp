int cnt=0;	// manipluate this variable in your code
class Counter
{ 
  public: 
	Counter(){
            cnt++;
            //cout<<"c1 id "<<cnt<<"\n";
        }
        ~Counter(){
            cnt--;
            //cout<<"c2 id "<<cnt<<"\n";
        }
};
