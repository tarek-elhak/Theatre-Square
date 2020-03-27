/*
author : tarek abdelhak mohamed
student at faculty of computers and artificial intelligence
Cairo university
mobile : 01099557616
*/
#include <iostream>
#include <math.h>
using namespace std;

// function to calculate the number of flagstones needed to cover side n

int getNumberNeededForSide_N(int n , int a){
    return ceil(n/double(a));
}

// function to calculate the number of flagstones needed to cover side m

int getNumberNeededForSide_M(int m , int a){
    return ceil(m/double(a));
}

// function to get the total number of flagstones needed to pave the square

int getTotal(int n , int m , int a){
return getNumberNeededForSide_N(n,a) * getNumberNeededForSide_M(m,a);
}

int main()
{
    int n , m , a ;
    cout<<"enter side n : \n";
    cin>>n;
    cout<<"enter side m : \n";
    cin>>m;
    try{
        cout<<"enter a : \n";
        cin>>a;
        if (a == 0){
            throw a ;
        }
    }
    catch(int a){
        cout<<"you have entered : "<<a<<endl;
        cout<<"we cannot pave the rectangular square with flagstones of ZERO side \n";
        return 0 ;
    }
    // handling if a = 0

    // calling the getTotal function
    cout<<"the total number of flagstones needed to pave the rectangular square is : \n"<<getTotal(n,m,a)<<endl;

    return 0;
}
