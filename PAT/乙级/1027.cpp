#include <iostream>

using namespace std;

int main(){
    char sign;
    int N,biggest=1,i=1,level=1;
    cin >> N >> sign;
    while(biggest<=N){
        i += 2;
        level++;
        biggest += i*2;
    }
    biggest = biggest - i*2;
    i -= 2;
    level --;
    int emp;
    for(int j=0;j<level*2-1;j++){
        if(j<level){
            emp =j;
        }
        else{
            emp =level*2-2-j;
        }
        for(int m=0;m<emp;m++){
            cout<<" ";
        }
        for(int m=0;m<i-2*emp;m++){
            cout<<sign;
        }
        cout<<endl;
    }
    cout << N - biggest<<endl;
    return 0;
}