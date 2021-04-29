// Binary Search

#include<bits/stdc++.h>
#include<chrono>
using namespace std;
using namespace std::chrono;

int BinarySearch(int arr[],int l,int r,int target)
{
    while(l<=r)
    {
        int m=l+(r-l)/2;
        if(arr[m]==target)
        {
            return m;
        }
        if(target>arr[m])
        {
            l=m+1;
        }
        else
        {
            r=m-1;
        }
    }
    return -1;
}

int main()
{
    //int n=6;
    auto start = high_resolution_clock::now();
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=9;
    int res=BinarySearch(arr,0,n-1,target);
    // if(res>0)
    // {
    //     cout<<"Element found at Index "<<res<<endl;
    // }
    // else
    // {
    //     cout<<"element not present"<<endl;
    // }
    (res==-1)?cout<<"Element Not Present \n": cout<<"Element is present at index: "<<res<<endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;
    return 0;

}