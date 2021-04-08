#include <iostream>
#include <string>

using namespace std;

int main(){
    string A,B;
    char DA,DB;
    cin>>A>>DA>>B>>DB;
    int lenA = A.size(),lenB = B.size(),count=1;
    long ans = 0;
    for(int i=0;i<lenA;i++){
        if(A[i]==DA){
            ans += count * (DA - '0');
            count *= 10;
        }
    }
    count = 1;
    for(int i=0;i<lenB;i++){
        if(B[i]==DB){
            ans += count * (DB - '0');
            count *= 10;
        }
    }
    cout << ans<<endl;
    return 0;
}