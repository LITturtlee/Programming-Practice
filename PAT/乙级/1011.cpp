#include <iostream>

using namespace std;

int main(){
    int T;
    cin >> T;
    for(int i=0;i<T;i++){
        long A,B,C;
        cin >> A >> B >> C;
        //cout << A << " " << B << " " << C<<endl;
        cout << "Case #" << i+1 << ": ";
        if(A+B>C)cout<<"true"<<endl;
        else cout<<"false"<<endl;
    }
    return 0;
}