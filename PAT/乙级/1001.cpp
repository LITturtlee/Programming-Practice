#include <iostream>
using namespace std;
void countStep(int n,int& count){
    if(n==1)return;
    else if(n%2==0){
        n = n / 2;
        count++;
        countStep(n,count);
    }
    else{
        count++;
        n = (3*n + 1) / 2;
        countStep(n,count);
    }
}
int main(){
    int n;
    int count = 0;
    cin >> n;
    countStep(n,count);
    cout<<count;
    return 0;
}