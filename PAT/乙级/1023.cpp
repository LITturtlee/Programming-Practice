#include <iostream>
#include <sstream>

using namespace std;

int main(){
    stringstream ss,s;
    int in,zeros=0,index=0;
    bool firNotZero=true;
    while(cin>>in){
        if(in==0){index++;continue;}
        else if(index==0)zeros=in;
        else if(firNotZero){
            ss<<to_string(index);
            for(int i=0;i<zeros;i++)ss<<'0';
            for(int i=0;i<in-1;i++)ss<<to_string(index);
            firNotZero = false;
        }
        else{
            for(int i=0;i<in;i++)ss<<to_string(index);
        }
        index ++;
    }
    cout<<ss.str()<<endl;
    return 0;
}