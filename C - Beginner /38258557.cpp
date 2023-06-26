#include <iostream>
#include <math.h>
using namespace std ;


int main() {
    int N;
    int R;
    cin >> N >> R;
    if(N<10)
    {
        N=100*(10-N);
        cout<<R+N;
    }
  else if(N>=10)
    {
      cout<<R;
    }


}
