#include <iostream>
using namespace std;
float project(int hours);
int total,used;
float hour,hours,result,days,workers;
main()
{
cout<<"enter hours needed to work:";
cin>>hour;
cout<<"enter days that firm has :";
cin>>days;
cout<<"enter number of all workers:";
cin>>workers;
    total=((days*9)*workers);
    used=hour-total;
result=project(hours);

if(result == 1)
{
 cout<<"yes!"<<used<<"hours left";
}
if(result == 2)
{
    cout<<"not enough time! "<< used<<"hours needed";
}
}
float project(int hours)
{
if(used > total)
{
    return 1;
}
if(total>used)
{
    return 2;
}
}