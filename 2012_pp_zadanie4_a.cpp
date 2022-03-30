#include <iostream>
using namespace std;
int main()
{
    fstream file(cyfry.txt);
    int s;
    int parzyste = 0;
    while(file>> s){
        if(s%2 ==0 )
            parzyste++;
    }
        cout <<  s << endl;
    }

