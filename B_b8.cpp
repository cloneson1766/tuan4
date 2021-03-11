#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap so cap: ";
    cin >> n;
    int m=2*n;
    float a[m];
    cout << "Nhap cach xep:\n";
    for(int i=0;i<m;i++){
        cin >> a[i];
    }
    float temp;
    //sap xep nam
    for(int i=0;i<m-1;i+=2){
        for(int j=i+2;j<m;j+=2){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    //sap xep nu
    for(int i=1;i<m-1;i+=2){
		for(int j=i+2;j<m;j+=2){
			if(a[i]>a[j]){
				temp=a[i];
                a[i]=a[j];
                a[j]=temp;
			}
		}
    }

	//duyet tu dau
	int dem=0;
    for(int i=0;i<m-1;i+=2){
		for(int j=i+1;j<m;j+=2){
			if(a[i]>a[j]){
				dem++;
			}
		}
    }
    if(dem==n){
		cout << "YES";
    }else{
    cout<< "NO";
    }
}
