#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<int> weight{7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    vector<char> M{'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    int N,correct=0;
    string input;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>input;
        int Z=0;
        int flag =1;
        for(int j=0;j<input.length()-1;j++){
            if(input[j]<'0'||input[j]>'9'){
                cout<<input<<endl;
                flag=0;
                break;
            }
            else{
                Z+=(input[j]-'0')*weight[j];
            }
        }
        if(flag==0)continue;
        Z = Z % 11;
        if(M[Z]==input[input.length()-1]){
            correct++;
        }
        else{
            cout<<input<<endl;
        }
    }
    if(correct==N){
        cout<<"All passed"<<endl;
    }
}