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

void selectionsort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i]<arr[j]) swap(arr[i], arr[j]);
        }
    }
}



int main(){
    int arr[] = {3,23,231,9,2,4};
    int size = sizeof(arr)/sizeof(arr[0]);

   print(arr, size);

    cout<<endl<<"after operation"<<endl;

    selectionsort(arr, size);

    print(arr, size);
    return 0 ; 
}