#include <iostream>
#include <math.h>
using namespace std ;


int main() {
    int yen;
    int tmp = 1;
    cin >> yen;
    while (tmp != 0) {

        if (yen > 1000) {
            yen = yen - 1000;
            tmp = 1;

        }

        else if(yen<1000)
        {
            yen=1000-yen;
           tmp=0;
       }
        else if (yen==1000)
        {
            yen=yen-1000;
            tmp=0;
        }
    }
    cout<<yen;

    }


