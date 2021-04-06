#include <iostream>
#include <iomanip>
//老是报格式错误，不晓得那有问题

using namespace std;

int main(){
    int num=0,len;
    int sign = 1;
    int count = 0;
    int A1=0,A2=0,A3=0,A4=0,A5=0;
    cin>>len;
    while(cin>>num){
//     for(int i=0;i<len;i++){
//         cin>>num;
        if(num%5==0&&num%2==0) A1 += num;
        else if(num%5==1){A2 = A2 + sign*num;sign *= -1;}
        else if(num%5==2){A3++;}
        else if(num%5==3){A4+=num;count++;}
        else if(num%5==4){if(num>A5)A5=num;}
        
    }
//     float a4 = (float)A4/count;
    if(A1==0)cout<<"N"<<" ";
    else cout<<A1<<" ";
    if(A2==0)cout<<"N"<<" ";
    else cout<<A2<<" ";
    if(A3==0)cout<<"N"<<" ";
    else cout<<A3<<" ";
    if(A4==0)cout<<"N"<<" ";
    else cout<<fixed<<setprecision(1)<<(float)A4/count<<" ";
    if(A5==0)cout<<"N"<<" ";
    else cout<<A5<<endl;
    //cout << A1<<" "<<A2<<" "<<A3<<" "<<fixed<<setprecision(1)<<(float)A4/count<<" "<<A5<<endl;
    return 0;
}