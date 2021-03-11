#include <iostream>
using namespace std;

string timkiem(int arr[],int n,int x)
{
    if (arr[n - 1] == x)
        return "YES";
    int temp = arr[n - 1];
    arr[n - 1] = x;
    for(int i=0;;i++){
        if(x==arr[i]){
            arr[n-1]=temp;
        if(i<n-1){
            return "YES";
        }else{
            return "NO";
        }
    }
}
}
int main()
{
    //test a,b
    cout << "\ntest a: ";
    int x;
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout << "Nhap so can tim: ";
    cin >> x;
    cout << timkiem(arr,n,x) << endl;

    //test c
    cout << "\ntest c: ";
    int arr2[]={};
    int x2;
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    cout << "Nhap so can tim: ";
    cin >> x2;
    cout << timkiem(arr2,n2,x2)<<endl;

    //test d,e
    cout << "\ntest d: ";
    int arr3[]={2};
    int x3;
    int n3=sizeof(arr3)/sizeof(arr3[0]);
    cout << "Nhap so can tim: ";
    cin >> x3;
    cout << timkiem(arr3,n3,x3)<<endl;

    //test f,g
    cout << "\ntest f: ";
    int arr4[]={2,5,6,7};
    int x4;
    int n4=sizeof(arr4)/sizeof(arr4[0]);
    cout << "Nhap so can tim: ";
    cin >> x4;
    cout << timkiem(arr4,n4,x4)<<endl;

}

