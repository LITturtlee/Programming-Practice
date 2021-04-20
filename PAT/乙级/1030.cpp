#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <vector>

using namespace std;
int main() {
    int N,p;
    cin>>N>>p;
    vector<int> input;
    input.reserve(N);
    for(int i=0;i<N;i++){
        int temp;
        cin>>temp;
        input.emplace_back(temp);
    }
    sort(input.begin(),input.end(),[=](int a,int b){
        return a<b;
    });
//     for(auto it=input.begin();it!=input.end();it++){
//         cout<<*it<<" ";
//     }cout<<endl;
    int start=0,end=N-1;
    while(((float)input[end]/input[start])>(float)p){
        if(start==end){
            if((float)input[end]/input[start]>(float)p){
                cout<<0<<endl;
                return 0;
            }
            else{
                cout<<1<<endl;
                return 0;
            }
        }
        if(((float)input[end-1]/input[start])<=(float)p){
            end--;
            break;
        }
        else if(((float)input[end]/input[start+1])<=(float)p){
            start++;
            break;
        }
        else{
            start++;
            end--;
        }
//         cout<<input[end-1]<<" "<<input[start];
    }
    cout<<end-start+1<<endl;
    return 0;
}