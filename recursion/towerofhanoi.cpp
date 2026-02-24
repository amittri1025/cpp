#include <iostream>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a=b;
    b = temp;
}
void print(int arr[], int size){
 int n = size;
    while(n){
        cout<<*(arr+(size-n))<<" ";
        n--;
    }
    cout<<endl;
}

int main(){
    
    int a[3] = {3,2,1};
    int b[3] = {};
    int c[3] = {};

    int ans = 5;
    cout<<ans;
    return 0;
}