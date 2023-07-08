#include<bits/stdc++.h>
using namespace std;
class solution{
     public:
   
    bool findTriplets(int arr[], int n)
    { 
        
        sort(arr , arr+n) ;
        
        int target , j ,k ;
        
        for(int i=0;i<n-2;i++){
            target = -(arr[i]);
            j=i+1;
            k=n-1;
            while(j<k){
                if( (arr[j] + arr[k]) == target)  return true;
                
                else if ((arr[j] + arr[k]) > target)  k--;
                
                else j++;
            }
        }
        
        return false;
    }
};
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   solution ob;
   
   if(ob.findTriplets(arr,n))
   cout<<"1";

   else  cout<<"0";
}