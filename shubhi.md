###Shubhankshi Saraf 
Image-https://imgur.com/gCMm5S4 
Location-India 
GitHub Link- https://github.com/shubhi0222

#include <iostream>
using namespace std;

class Date{
    private:
        int day,month,year;
    public:
        Date(int d, int m,int y){
            day=d;
            month=m;
            year=y;
        }
        Date calculate(Date,Date);
        void display(){
            cout<<"\nAge = "<<year<<"years "<<month<<"months "<<day<<"days"<<endl;
        }
};

Date Date::calculate(Date b,Date p){
        Date age(0,0,0);
        int day[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
        age.year=p.year-b.year;
        if(p.month<b.month){
            age.year--;
            age.month=12-(b.month-p.month);
        }
        else
            age.month=p.month-b.month;
        if(p.day<b.day){
            age.month--;
            age.day=(day[b.month]-b.day)+p.day;
        }
        else   
            age.day=p.day-b.day;
        return age;
    }

int main(){
    Date birth(15,7,1985);
    Date present(14,6,2022);
    Date age=age.calculate(birth,present);
    age.display();
    return 0;
}
