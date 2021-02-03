#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n ;
    cin >> n;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n*2-1;j++){
            if(i>abs(j-n))cout <<"*";
            else cout <<' ';
        }
            cout << endl;
    }
}

