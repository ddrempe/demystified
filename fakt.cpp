#include <iostream>
using namespace std;

int fakt(int N) {
    if (N == 0)
       return 1;
    else {
         int F = 1;
         for (int i = 2; i <= N; i++) 
             F *= i;
         return F;
    }
} 


int main () {
    int N,K;
    do {
       cout << "Upišite N i K:  ";
       cin >> N >> K;
    } while (N<0 ||K<0);
    cout << fakt(N)/(fakt(K)*fakt(N-K)) << endl;
        return 0;
}


