//APPROACH 1: i points to the last element of first array, and j points to the first element of second array - compare and swap and in the end sort both of the arrays
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int i = n-1 , j=0 ;
        while(i >= 0 && j < m) {
            if(arr1[i] > arr2[j])
            {
                swap(arr1[i],arr2[j]);
            }
            i--;
            j++;
        }
        
        sort(arr1,arr1 + n);
        sort(arr2,arr2 + m);
	}
};

//APPROACH 2: GAP Algorithm
//https://www.youtube.com/watch?v=hVl2b3bLzBw&t=212s
