#include <iostream>
#include <iomanip>

using namespace std;

struct Node{
    int data;
    int next;
};

int main(){
    Node nodeArray[100001];
    int firstAddress, N, K, times;
    cin >> firstAddress >> N >> K;
    times = N / K;
    int headAddress = 100000;
    int headnext = firstAddress;
//     headNode.next = firstAddress;
    nodeArray[headAddress].next = headnext;
    for(int i=0;i<N;i++){
        int address,data,next;
        cin >> address >> data >> next;
        nodeArray[address].data = data;
        nodeArray[address].next = next;
    }
    int tempAddress = firstAddress;
    int nextTempAdd = nodeArray[tempAddress].next;
//     headNode.next = -1;
    int tempHeadAdd = headAddress;
    for(int i=0;i<times;i++){
        nodeArray[tempHeadAdd].next = -1;
        int firstTempAdd = tempAddress;
//         int prefirstAdd;
        for(int j=0;j<K;j++){
//             cout << i <<" "<< j << endl;
            nextTempAdd = nodeArray[tempAddress].next;
            nodeArray[tempAddress].next = nodeArray[tempHeadAdd].next;
            nodeArray[tempHeadAdd].next = tempAddress;
            tempAddress = nextTempAdd;
        }
//         if(i==0)firstAddress = nodeArray[headAddress].next;
//         headNode = nodeArray[firstTempAdd];
        nodeArray[firstTempAdd].next = nextTempAdd;
        tempHeadAdd = firstTempAdd;
    }
    tempAddress = nodeArray[headAddress].next;
    for(int i=0;i<N;i++){
        if(nodeArray[tempAddress].next!=-1)
        cout<<setfill('0')<< setw(5)<<tempAddress <<" "<< nodeArray[tempAddress].data <<" "<<setfill('0')<< setw(5)<< nodeArray[tempAddress].next<<endl;
        else cout<<setfill('0')<< setw(5)<<tempAddress <<" "<< nodeArray[tempAddress].data <<" "<< nodeArray[tempAddress].next<<endl;
        tempAddress = nodeArray[tempAddress].next;
    }
    return 0;
}