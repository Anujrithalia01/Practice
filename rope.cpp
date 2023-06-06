#include <iostream>
#include<math.h>

using namespace std;
// this the rope cutting problem

int maxofr(int n, int a, int b, int c)
{
    // by recurssion

    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        /* code */
        return -1;
    } 
       int result = max(maxofr(n-a, a , b, c) , max(maxofr(n-b ,a , b, c) , maxofr(n-c , a, b, c)));
       if(result==-1)
       {  return -1;  }

       return result +1;
       
}

int main()
{ 
    //int N, A, B, C;
     cout<<maxofr(23, 11, 9, 12)<<endl;
    return 0;

}
