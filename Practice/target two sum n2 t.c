// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
int arr[]={2,7,11,15,27};
int target;
cin>>target;
for(int i=0;i<4;i++){
    for(int j=i+1;j<5;j++){
        if(arr[i]+arr[j]==target){
            cout<<"YEAH:";
            break;
        }
    }
}

    return 0;
}
