#include<iostream>
#include<ctime>

using namespace std;
int main()
{
    time_t t;
    time(&t);
    tm *d = localtime(&t);

    string month[] = {"Jan","Feb","Mar","Apr","May","Jun",
                      "Jul","Aug","Sept","Oct","Nov","Dec"
                     };
    cout<<d->tm_mday<<",";
    cout<<month[d->tm_mon]<<",";
    cout<<d->tm_year+1900 <<" ";

    string bar[]= {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday",};
    cout<<bar[d->tm_wday]<<endl;

    int h = d->tm_hour;
    string ampm = "Am";
    if(h>=12)
    {
        ampm = "Pm";
    }
    if(h>12)
    {
        h -= 12;
    }
    if(h == 0)
    {
        h = 12;
    }
    cout<<h<<":";


    cout<<d->tm_min<<":";
    cout<<d->tm_sec<<" ";
    cout<<ampm;

    return 0;

}
