#include "truck.hpp"
#include <iostream>

Time24::Time24(){}
Time24::Time24(int h,int m,int s):hr(h), min(m), sec(s){}
Time24::Time24 convertor(int h,int m,int s):hr(h), min(m), sec(s){}

//Operator overload function allows to compare the trucks and see which one has more money

// bool Truck::operator < (Truck t1){
//     if (t1.money <= money){
//         return true;
//     }
//     else {
//         return false;
//     }
// }

bool Time24::operator < (Time24 &t1)
{
    int s1=(hr)*3600+(min)*60+(sec);
    int s2=(t1.hr)*3600+(t1.min)*60+(t1.sec);
    if(s1<s2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//This function displays the names of the drivers on the console

void Time24::console_show(){
    cout << driver << endl;
}

//This function writes to the output file all the details about the truck

void Time24::write_tofile(std::ostream& f1){
    f1 << "Hours: " << hr << " Minutes: " << min << " Seconds: " << money << endl;
}