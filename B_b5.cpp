#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;
    int a[n];
    cout << "Nhap chuoi so nguyen: ";
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            if(a[i]+a[j]==0){
                cout << a[i] << " " << a[j] << " ";
                return 0;

            }
        }
    }
}

