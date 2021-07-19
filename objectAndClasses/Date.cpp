class Date
{
  // Write your code here
  private:
  int month,day;
  public:
  Date(int m,int d){
    month=m;
    day=d;
  }
  int daysInMonth(){
    if(month==4|| month==6 || month==9 || month==11){
      return 30;
    }else if(month==2){
      return 28;
    }
    else{
      return 31;
    }
  }
  int getDay(){
    return day;
  }
  int getMonth(){
    return month;
  }
  void nextDay(){
    day++;
    if(day>=daysInMonth()){
      month++;
      day=1;
      if(month>12){
        month=1;
      }
    }
  }
  string toString(){
    string result="";
    result+=to_string(month);
    result+="/";
    result+=to_string(day);
    return result;
  }
  
  
  int absoluteDay(){
    int days;
    days=day;
    switch(getMonth()){
      case 2:
        days+=31;
        break;
      case 3:
        days+=31+28;
        break;
      case 4:
        days+=31+28+31;
        break;
      case 5:
        days+=31+28+31+30;
        break;
      case 6:
        days+=31+28+31+30+31;
        break;
      case 7:
        days+=31+28+31+30+31+30;
        break;
      case 8:
        days+=31+28+31+30+31+30+31;
        break;
      case 9:
        days+=31+28+31+30+31+30+31+31;
        break;
      case 10:
        days+=31+28+31+30+31+30+31+31+30;
        break;
      case 11:
        days+=31+28+31+30+31+30+31+31+31;
        break;
      case 12:
        days+=31+28+31+30+31+30+31+31+31+30+30;
        break;
    }
    
    return days;
  }

};
