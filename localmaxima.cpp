#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int findmax(int arr[],int low, int high)
{
	int middle=(low+high)/2;
	if(arr[middle+1]>arr[middle])
	{
		return findmax(arr,middle-1,high);
	}
	if(arr[middle-1]>arr[middle])
	{
		return findmax(arr,low,middle-1);
	}
	if(arr[middle]>arr[middle+1] && arr[middle]>arr[middle-1])
	{
		return arr[middle];
	}

}

int main()
{
	int n;
	cin >> n;
	cout << endl;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	int max=findmax(arr,0,n-1);
	cout << max << endl;
}