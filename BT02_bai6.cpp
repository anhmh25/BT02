#include<iostream>
using namespace std;

int main()
{
    int n,k ;
    cin >> n;
    for(int i=1;i<=n;i++){
        k=i;
        for(int j=1;j<=n;j++){
            if(k<=n)cout << k <<' ';
            else cout << k-n << ' ';
            k++;
        }
        cout << endl;
    }
}
