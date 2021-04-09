#include <iostream>

using namespace std;

int main(){
    int N,row,column;
    char sign;
    cin >> N >> sign;
    column = N;
    row = N % 2 == 1 ? (N/2+1):(N/2);
//     cout<<row<<" "<<column;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(i==0||i==row-1){
                cout<<sign;
                continue;
            }
            else{
                if(j==0||j==column-1){
                    cout<<sign;
                    continue;
                }
                cout<<" ";
            }
        }cout<<endl;
    }
    
    return 0;
}