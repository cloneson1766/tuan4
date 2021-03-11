#include <iostream>
#include <cstdlib>
#include <ctime>

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

	srand(time(0));
	int a[10];
	for(int i=0;i<10;i++){
		a[i]=0+rand() % (10+1-0);
	}


	for(int i=0;i<10;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}


    int x;
    int n=sizeof(a)/sizeof(a[0]);
    cout << "Nhap so can tim: ";
    cin >> x;
    cout << timkiem(a,n,x) << endl;

    //for(int i=0;i<10;i++)
	//cout << a[i] << " ";
}

