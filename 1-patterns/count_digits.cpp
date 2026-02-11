#include <stdio.h>
#include <iostream>
using namespace std;


int countdigits (int n){
      // recursion

  // stop conditioon
    if(n==0) return 1;
    // logic
    int count = 0;
    while(n!=0){
        n = n/10;
        ++count;
    }

    return 1+countdigits(n/10);   
  // next call
}

int main()
{

    cout<<countdigits(10);
    return 0;
}
