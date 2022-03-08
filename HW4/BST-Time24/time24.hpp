// class Time24
// {
//     int hours, minutes, seconds;
    
// // necessary operators, constructors/destructors, functions can be added
// };

class Time24
{
    public:
        int hr,min,sec;
        Time24(){}
        Time24(int h,int m,int s)
        {
            hr=h;
            min=m;
            sec=s;
        }
        Time24 convertor(int h,int m,int s)
        {
            int rs=0,rm=0;
            sec=s%60;
            rs=s/60;
            min=(rs+m)%60;
            rm=(rs+m)/60;
            hr=(rm+h)%24;
            Time24 t=Time24(hr,min,sec);
            return t;
        }
};