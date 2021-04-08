#include <iostream>
#include <cmath>
#include <vector>

bool isPrimeNum(int& num){
    int range = (int)sqrt(num);
    for(int i=2;i<=range;i++){
        if(num%i==0)return false;
    }
    return true;
}

using namespace std;

int main(){
    vector<int> ans;
    int leftBound,rightBound,count=0,num=1;
    cin>>leftBound>>rightBound;
    while(count<rightBound+1){
        if(isPrimeNum(num)){
            count++;
            ans.emplace_back(num);
        }
        num++;
    }
    int line=1;
    for(auto iter=ans.begin()+leftBound;iter!=ans.begin()+rightBound+1;iter++){
        if(iter==ans.end()-1){cout<<*iter<<endl;break;}
        if(line==10){cout<<*iter<<endl;line=1;continue;}
        cout<<*iter<<" ";
        line++;
    }
    return 0;
}