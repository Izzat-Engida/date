#include<iostream>
#include<cmath>
#include<ctype.h>
using namespace std;
void result(int day,int month,int year,int nday,int nmonth,int);
int dayin(int month,int year);
bool oday(int year);
int main(){
    int day,month,year,nday,nmonth,nyear;
    ab:
    cout<<"---------------------------------"<<endl;
    cout<<"enter a birth date: ";
    cin>>day;
    cout<<"enter a  month: ";
    cin>>month;
    cout<<"enter a year:  ";
    cin>>year;
    cout<<"---------------------------------"<<endl;
    cout<<"current day: ";
    cin>>nday;
    cout<<"current month: ";
    cin>>nmonth;
    cout<<"current year: ";
    cin>>nyear;

result(day,month,year,nday,nmonth,nyear);
char choice;
cout<<endl<<"do you want to continue (y/n): ";
cin>>choice;
choice=tolower(choice);
if(choice=='y'){goto ab;}
else if(choice=='n'){
    cout<<"good bye"<<endl;
    return 0;}
}

void result(int day, int month, int year,int nday,int nmonth,int nyear){
int years=nyear-year;
int months=nmonth-month;
int days=nday-day;
if(days<0){
    months--;
    days+=dayin(month,year);
}
if(months<0){
    years--;
    months+=12;
}
cout<<years<<" years ,"<<months<<" months, "<<days<<", days";


}
bool oday(int year){

return((year%400==0)||(year%4==0)&& year%100!=0);
}
int dayin(int month,int year){
    if(month==2){
        return oday(year)? 29:28;
    }
    else if(month==4||month==6||month==9||month==11){
        return 30;
    }
    else{return 31;}
}
