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
    for(int i=0; i<n-1; i++){
        int smallestidx = i; // suppose first element of the window is min 
        for(int j=i; j<n; j++){
            if(arr[j]<arr[smallestidx]) smallestidx = j;
        }
        swap(arr[i], arr[smallestidx]);// swamp with first element
    }
}

void bubblesort(int arr[], int n){
    int sort = 0; 
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[j]<arr[j+1]) swap(arr[j], arr[j+1]);
        }
    }
}

void insertionsort(int arr[], int n){
    // theory is , assume first is sorted then just pick the element and put it sorted place
    for(int i=1 ; i<n; i++){
        for(int j=i; j>1; j--){
            if(arr[j]<arr[j]) {
             swap(arr[i], arr[j-1]);   
            }
        }
    }
}

void selectionsort(int arr[], int n){
    
}




int main(){
    int arr[] = {3,23,231,9,2,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    print(arr, size);
    cout<<endl<<"after operation"<<endl;
    bubblesort(arr, size);
    print(arr, size);
    return 0 ; 
}