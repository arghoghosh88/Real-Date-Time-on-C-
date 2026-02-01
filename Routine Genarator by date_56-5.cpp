#include<iostream>
#include<ctime>
using namespace std;

int main()
{
    time_t t;
    time(&t);
    tm *d = localtime(&t);
    cout<<"Routine of CSE-56/5"<<endl;

    string day[]= {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday",};
    if(day[d->tm_wday]=="Sunday")
    {
        cout<<"CSE-103"<<" "<<"[ 9:45 Am - 11:15 Am]"<<" "<<"Room no: 905{B3}"<<endl;
        cout<<"EEE-102"<<" "<<"[11:15 Am - 12:45 Pm]"<<" "<<"Room no: 505{B3}"<<endl;
        cout<<"-----<Break>-----  [12:45 Pm - 1:15 Pm]"<<endl;
        cout<<"EEE-102"<<" "<<"[ 1:15 Pm -  2:45 Pm]"<<" "<<"Room no: 505{B3}"<<endl;
    }
    else if(day[d->tm_wday]=="Monday")
    {
        cout<<"MAT-111"<<" "<<"[ 8:15 Am -  9:45 Am]"<<" "<<"Room no: 905{B2}"<<endl;
        cout<<"CSE-111"<<" "<<"[ 9:15 Am - 11:15 Pm]"<<" "<<"Room no: 905{B2}"<<endl;
    }
    else if(day[d->tm_wday]=="Tuesday")
    {
        cout<<"MAT-111"<<" "<<"[ 1:15 Pm -  2:45 Pm]"<<" "<<"Room no: 709{B2}"<<endl;
        cout<<"CSE-112"<<" "<<"[ 2:45 Pm -  4:15 Pm]"<<" "<<"Room no: 417{B2}"<<endl;
        cout<<"CSE-112"<<" "<<"[ 4:15 Pm -  5:45 Pm]"<<" "<<"Room no: 417{B2}"<<endl;
    }
    else if(day[d->tm_wday]=="Wednesday")
    {
        cout<<"EEE-101"<<" "<<"[ 8:15 Am -  9:45 Am]"<<" "<<"Room no: 709{B2}"<<endl;
        cout<<"CSE-103"<<" "<<"[ 9:15 Am - 11:15 Pm]"<<" "<<"Room no: 709{B2}"<<endl;
    }
    else if(day[d->tm_wday]=="Thursday")
    {
        cout<<"CSE-111"<<" "<<"[11:15 Am - 12:45 Pm]"<<" "<<"Room no: 709{B2}"<<endl;
        cout<<"-----<Break>-----  [12:45 Pm - 1:15 Pm]"<<endl;
        cout<<"EEE-101"<<" "<<"[ 1:15 Pm -  2:45 Pm]"<<" "<<"Room no: 505{B3}"<<endl;
    }
    else if(day[d->tm_wday]=="Saturday"||day[d->tm_wday]=="Friday")
    {
        cout<<"You have no class today!"<<endl;
        cout<<"Enjoy your day!"<<endl;
    }
}
