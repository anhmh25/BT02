#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n ;
    cin >> n;
    for (int i=n;i>=1;i--){
        for(int j=n*2-1;j>=0;j--){
            if(i>abs(j-n))cout <<"*";
            else cout <<' ';
        }
            cout << endl;
    }
}

