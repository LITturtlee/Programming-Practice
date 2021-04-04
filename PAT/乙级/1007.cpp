#include <iostream>
#include <cmath>

using namespace std;
bool isPrimeNum(int& n){
    int range = (int)sqrt(n);
    if(n==1)return true;
    for(int i=2;i<=range;i++){
        if(n%i==0)return false;
    }
    return true;
}

int main(){
    int input;
    int primeNum=0,prePrimeNum=0,count=0;
    cin >> input;
    for(int i=1;i<input+1;i++){
        if(isPrimeNum(i)){
            primeNum = i;
//             cout << primeNum <<endl;
            if(primeNum-prePrimeNum==2)count++;
            prePrimeNum = primeNum;
        }
    }
    cout << count;
    return 0;
}