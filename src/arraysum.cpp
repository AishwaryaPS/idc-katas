#include <iostream>

int main(){
    int n,x,sum=0;
    cout << "Enter number of elements";
    cin >> n;
    cout << "Enter " << n << " numbers";
    for(int i=0;i<n;i++){
        cin >> x;
        sum+=x;
    }
    cout << "Answer is " << sum;
}