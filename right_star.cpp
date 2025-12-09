#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n = 4; // rows
    // cout<<"Enter the rows: ";
    // cin>>n;

    for(int i=0; i<n; i++){
        // spaces
        for(int x=0; x<n-i; x++){
            cout<<" ";  
        }
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
