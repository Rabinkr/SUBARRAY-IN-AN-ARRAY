#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cout<<"Enter array size:";
 cin>>n;
 int arr[n];
 cout<<"\n Enter array elements:";
 for(int i=0;i<n;i++)
 cin>>arr[i];
 cout<<"All the subarray are:\n";
 for(int i=0;i<n;i++)
 {
 	for(int j=i;j<n;j++)
 	{
 		for(int k=i;k<=j;k++)
 		{
 			cout<<arr[k]<<" ";
		 }
		 cout<<"\n";
	 }
 }
}
