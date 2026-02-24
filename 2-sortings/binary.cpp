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

int binarysearch(int arr[], int target, int i, int size ){
  

    if(target = arr[size]){
       return size;
    }

    // cout<<"size in bs"<<size<<endl;

    int m = size/2;
   
    if(target < arr[m]){
        binarysearch(arr, target, 0, m);
    }
    
    if(target > arr[m]){
        binarysearch(arr, target, m, size);
    }

   

}

int main(){
    int arr[]= {13,2,23,1,65,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);

    selectionsort(arr, size);
    print(arr, size);
    int target = 23;
    cout<<"element found at :"<<binarysearch(arr, target, 0, size);


    return 0;
}