class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr, vector<int>& arr2) {
        int n=arr.size();
        int m=arr2.size();
        int arr3[m+n];
        int i=0;
        int j=0;
        int k=0;
        while(i<n && j<m){
            if(arr[i]<arr2[j]){
                arr3[k]=arr[i];
                i++;
                k++;
            }
            else{
                arr3[k]=arr2[j];
                j++;
                k++;
            }
        }
        while(i<n){
            arr3[k]=arr[i];
            i++;
            k++;
        }
        while(j<m){
            arr3[k]=arr2[j];
            j++;
            k++;
        }
        if((m+n)%2!=0)
            return arr3[(m+n)/2];
        else{
            int x=(m+n)/2;
            double p=arr3[x];
            double q=arr3[x-1];
            // cout<<p<<" ";
            // cout<<arr3[0];
            return ((p+q)/2);
        }
    }
};