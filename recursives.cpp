#include <iostream>
#include <string.h>

using namespace std;

//recursion is the technique of making a function call itself.


int sum (int k)
{
    if (k>0)
    {
        return k +sum(k-1);
    }else 
    {
        return 0;
    }
}

/*explained
when the sum () function is called k to the sum of all numbers 
smaller than k and returns the result. when k becomes 0, the function just returns 0
when running the program follows these steps;
10+sum (9)
10+(9+sum (8))
10+(9+(8+sum(7)))
...
10+9+7+6+5+4+3+2+1+0
since the function does not call itself when k is 0 the program stops there and returns the result.`

*/



int main ()
{
int result =sum(10);
cout << result ;

return 0;



}

























