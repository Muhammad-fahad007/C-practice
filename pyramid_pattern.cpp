
#include<iostream>
using namespace std;

int main() {
	cout << "enter the input number" << endl;
    int n;
    cin >> n;

    int spaces = n-1;
    for(int i=1; i<=n; i++){
        for (int s=spaces; s>=1; s--){
            cout << " ";
        }
        for (int k=1; k<=i; k++){
            cout << k ;
        }
        for (int j=i-1; j>=1; j--){
            cout << j;
        }
        spaces = spaces - 1;
        cout << endl;
    }
	return 0;
}

