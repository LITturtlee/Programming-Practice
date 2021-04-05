#include <iostream>

//不知道题意搞清楚没有。。。

using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    int array[N];
    for(int i=0;i<N;i++)cin>>array[(i+M)%N];
    for(int i=0;i<N-1;i++)cout<<array[i]<<" ";
    cout<<array[N-1];
    return 0;
}