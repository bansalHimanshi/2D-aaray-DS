#include<iostream>
using namespace std;

int main() {
    int arr[2][2];
    int sum = 0;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> arr[i][j];
            sum += arr[i][j];  
        }
    }

    cout << "Sum of all elements = " << sum << endl;

    return 0;
}
