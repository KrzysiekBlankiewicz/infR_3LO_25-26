
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a = 2;
    int b = 7;
    int c = 1;
    int g = 1;
    int d = a;
    
    for(int i = 0; i < b; i++)
    {
        if(b == 1)
        {
            break;
        }
        if (b % 2 == 0)
        {
            a = a*a;
            b = b/2;
            g++;
        }
        else
        {
            c = c*pow(d, g);
            b = b - 1;
        }
        cout << "a=" <<a<<"b=" <<b<< "c=" <<c<< "g="<<g<< endl;
    }
    a = a*c;
    
    cout<<a;
    
    return 0;
}