#include<iostream>
using namespace std;
//sum of prefixes of an array
int arr[6]={2, 7, 8, 4, 5, 7};
int sumofpre(int n, int a){

     int sum= 0;
    for (int i = n; i <= a; i++)
    {
        /* code */
        sum = sum + arr[i];
    }
    return sum;
    

}



int main(){
   
   cout<<sumofpre(0, 3)<<endl;
   return 0;

}