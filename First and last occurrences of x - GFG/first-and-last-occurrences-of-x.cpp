//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    
    int greatestSmall(int arr[], int n , int x ){
        int left=-1,mid = -1,right=n;
        while(right-left>1){
            mid = left+(right-left)/2;
            if(arr[mid]>x)
            right = mid;
            else
            left = mid;
        }
        if (left == -1 || arr[left] > x)
            return -1;
        if(arr[left]!=x)
        return -1;
        return left;
    }
    
    int smallestGreat(int arr[], int n , int x ){
        int left=-1,mid = -1,right=n;
        while(right-left>1){
            mid = left+(right-left)/2;
            if(arr[mid]>=x)
            right = mid;
            else
            left = mid;
        }
        if (right == 0 && arr[right]!=x)
            return -1;
        if(arr[right]!=x)
        return -1;
        return right;
        // return mid;
    }
    
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        int gs = greatestSmall(arr,n,x);
        int sg = smallestGreat(arr,n,x);
        return {sg,gs};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends