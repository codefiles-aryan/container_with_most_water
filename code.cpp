#include<iostream>
using namespace std;
int maxArea(int A[], int len);

long long maxArea(long long A[], int len)
{   long long max_area=0;
int a=0,b=len-1;
   if(len==0||len==1)
   return 0;
    while(a<b)
    {   long long x=min(A[a],A[b])*(b-a);
        max_area=max(x,max_area);
        
        if(A[a]>=A[b])
        {b--;}
        else
        {a++;}
    }
    return max_area;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}
 
