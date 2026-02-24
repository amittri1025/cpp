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

// int add(int i){
//     if(i==10) return i;
//     return add(i+1);
// }


// void recursion(int n){
//     if(n==0) return ;
//     cout<<"I am in recursion: "<<n<<endl;
//     recursion(n-1);
// }


int factorial(int n){
    if(n>0) return n*factorial(n-1);
    // return 
}

int main(){
    // int i=0 ;
    // add(i+1);
    // cout<<add(1);
    // int target = 10;
    int ans = factorial(5);
    cout<<ans;
    return 0;
}