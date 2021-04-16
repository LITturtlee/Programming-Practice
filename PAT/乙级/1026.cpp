#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    int R,L,t;
    cin >> R >> L;
    t = round((float)(L-R)/100); 
    int hh = t / 3600;
    int mm = (t % 3600) /60;
    int ss = (t%3600)%60;
    cout<<setfill('0')<<setw(2)<<hh<<":"<<setfill('0')<<setw(2)<<mm<<":"<<setfill('0')<<setw(2)<<ss<<endl;
    return 0;
}