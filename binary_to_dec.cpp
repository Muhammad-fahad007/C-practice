
#include<iostream>
using namespace std;

int decToBinary (int deNum) {
    int ans = 0, pow = 1;
    while(deNum > 0) {
    int rem = deNum % 2;
    deNum /= 2;
    ans = (rem* pow)+ ans;
    pow *= 10;
    }
    return ans; //binary form
   }

int main(){
    cout << "input";
    int a;
    cin >> a;

    cout << decToBinary(a);

}