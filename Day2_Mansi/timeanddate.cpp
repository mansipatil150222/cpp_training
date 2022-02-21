#include<iostream>
#include<ctime>

using namespace std;
class Date{
    private:
        int day, month, year;
    public:
        int bd = 0;
        int bm = 0;
        int by = 0;
        void setDate();
        void getDate();
        void setDoB(int d, int mo, int y);
        void findAge(int current);
};
class time1{
    public:
    int hour,minute,second;
    void gettime(){
        cout << "Hour: " << hour << " Minute: " << minute << " Second: " << second << "\n" << hour << ":" << minute << ":" << second << "\n";}
    void settime() {
        time_t now = time(0);
        tm* ltm = localtime(&now);
        hour = ltm-> tm_hour;
        minute = ltm-> tm_min;
        second = ltm-> tm_sec;
        }
    void sleeptime(float a,int b) {
        int sethour,setminute;
        settime();
        setminute = b- minute;
        sethour = a- hour;
        cout <<"Hour: " <<sethour<<"  Minutes: "<<setminute;
    }
};
void Date::setDate(){
            time_t now = time(0);
            tm *ltm = localtime(&now);
            day = ltm->tm_mday;
            month = ltm->tm_mon;
            year = 1900 + ltm->tm_year;
        }
void Date::getDate(){
            cout<<"\ncurrent date is: "<<day<<"-"<<month<<"-"<<year<<"\n";
        }
void Date::setDoB(int d, int mo, int y){
            bd = d;
            bm = mo;
            by = y;
            cout<<"\nbirth date is: "<<bd<<"-"<<bm<<"-"<<by<<"\n";
        }
void Date::findAge(int current){
    cout<<"\ncurrent age is: " <<year-current<< "\n";
}
int main(){
    Date date1;
    date1.setDate();
    date1.getDate();
    date1.setDoB(07,07,2001);
    date1.getDate();
    date1.findAge(2001);
    time1 obj1;

    int o;
    cout << "\n\nPRESS 1 > SET TIME\nPRESS 2 > GET TIME\nPRESS 3 > SLEEP TIME\n";
    cin >> o;
    switch (o)
    {
    case 1:
        obj1.settime();
        cout << "\nTime is set\n";
        break;

    case 2:
        obj1.gettime();
        break;

    case 3:
        int x,y;
        cout << "\nEnter Hour : ";
        cin >> x;
        cout << "Enter Minute : ";
        cin >> y;
        cout << "Total sleeping time is: " ;
        obj1.sleeptime(x,y);
        break;

    default:
        break;
    }

return 0;
}
