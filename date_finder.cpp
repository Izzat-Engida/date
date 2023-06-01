#include <iostream>
using namespace std;
bool leap(int year);
int getcentury(int year);
int getyearvalue(int year);
int getmonthvalue(int month,int year);
void dayofweek(int day,int month, int year);

int main(){
 int year,month,day;
 cout<<"enter a day: ";
 cin>>day;
 cout<<"enter a month: ";
 cin>>month;
 cout<<"enter year: ";
 cin>>year;
cout<<"-----------------------------------------"<<endl;
cout<<"-----------------------------------------"<<endl;
cout<<day<<"/ "<<month<<"/ "<<year<<endl;

 dayofweek(day,month,year);

}
bool leap(int year){
 if((year%400==0)||(year%4==0 && year%100 !=0)){

 return true;
 }
 else{return false;}
}
int getcentury(int year){
 int century=year/100;
 int rem=century%4;
 return (3-rem)*2;

}
int getyearvalue(int year){
 int rem=year%100;
 int le=rem/4;
 return le+rem;
}
int getmonthvalue(int month,int year){
 if(month==1||month==10){
return 0;
 }
 else if(month==2||month==3||month==11){
return 3;
 }
 else if(month==4||month==7){
return 6;
 }
 else if(month==5){
return 1;
 }
 else if(month==6){
return 4;
 }
 else if(month==9||month==12){
 return 5;
 }
 else if(month==8){
 return 2;
 }
 else{
 cout<<"invalid month"<<endl;
 return 0;
 }
}
void dayofweek(int day,int month, int year){
int sum=0;
sum=day+getmonthvalue(month,year)+getyearvalue(year)+getcentury(year);
int rem=sum%7;
if(rem==0){
 cout<<"the date was on Sunday"<<endl;
}
else if(rem==1){
 cout<<"the date was on Monday"<<endl;
}
else if(rem==2){
 cout<<"the date was on Tuesday "<<endl;
}
else if(rem==3){
 cout<<"the date was on Wednesday"<<endl;
}
else if(rem==4){
 cout<<"the date was on Thursday "<<endl;
}
else if(rem==5){
 cout<<"the date was on Friday "<<endl;
}
else if(rem==6){
 cout<<"the date was on Saturday"<<endl;
}

}
