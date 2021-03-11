#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

	srand(time(0));
	//test a

	int a[10];
	cout << "test a: " << endl;
	for(int i=0;i<10;i++){
		a[i]=0+rand() % (10+1-0);
	}
	for(int i=0;i<10;i++){
        cout << a[i] << " ";
	}

	//test b
	cout << "\nTest b: "<<endl;
	int b;
	b=0+rand() % (100+1-0);
	cout << b;

	//test c

	//test d
	int d[100];
	cout << "\nTest d: " << endl;
	for(int i=0;i<100;i++){
		d[i]=0+rand() % (100+1-0);
	}
    for(int i=0;i<100;i++){
        cout << d[i] << " ";
    }

    //test e
    cout << "\nTest e: "<<endl;
	for(int i=0;i<100;i++)
	{
		for(int j=i+1;j<100;j++)
		{
			if(d[i]>d[j])
			{
				int temp=d[i];
				d[i]=d[j];
				d[j]=temp;
			}
		}
	}
	for(int i=0;i<100;i++)
	cout << d[i] << " ";

	//test f
	cout << "\nTest f: "<<endl;
	for(int i=0;i<100;i++)
	{
		for(int j=i+1;j<100;j++)
		{
			if(d[i]<d[j])
			{
				int temp=d[i];
				d[i]=d[j];
				d[j]=temp;
			}
		}
	}
	for(int i=0;i<100;i++)
	cout << d[i] << " ";
}
