class TimeSpan
{
  private: int hours;
  private: int minutes;
  public: TimeSpan(int initialHours, int initialMin){
    hours = 0;
    minutes = 0;
add(initialHours, initialMin);
  }
  public: int getHours(){
    return hours;
  }
  public: int getMinutes(){
    return minutes;
  }
  public: void add(int initialHours, int initialMin){
    hours += initialHours;
    minutes += initialMin;
if(minutes >= 60){
      minutes -= 60;
      hours++;
    }
  }
  public: void add(TimeSpan tp){
add(tp.hours, tp.minutes);
  }
  public: double getTotalHours(){
    return hours + minutes / 60.0;
  }
  public: std::string toString(){
std::string str{std::to_string(hours)+" Hours, "+std::to_string(minutes)+" Minutes"};
    return str;
  }
};
