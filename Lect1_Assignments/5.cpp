#include<iostream>
#include <string>
using namespace std;
int main () {
    int a[4];
    for (int i=0; i<5; i++){
        cin >> a[i];
    }
    int min= a[0];
    int max =a[0];
    for ( int i=0; i<5; i++){
        if(a[i]<min){
            min = a[i];}
        if(a[i]>max){
            max = a[i];}
    }
    int sum = min+max;
    cout << sum << endl;
    return 0;
}