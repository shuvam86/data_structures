// Link:https://www.geeksforgeeks.org/problems/second-largest3735/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=second-largest

// Solution:

// Brute force approach:

  int getSecondLargest(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int largest = arr[n-1];
        for(int i=n-2;i>=0;i--) {
            if(arr[i]!=largest) {
                largest = arr[i];
                return largest;
            }
        }
        return -1;
    }

// Better approach:

int getSecondLargest(vector<int> &arr) {
        // Code Here
        int fLargest = INT_MIN;
        int n = arr.size();
        for(int i=0;i<n;i++) {
            if(arr[i]>fLargest) {
                fLargest = arr[i];
            }
        }
        // return fLargest;
        int sLargest = INT_MIN;
        
        for(int i=0;i<n;i++) {
            if(arr[i]>sLargest && arr[i]!=fLargest) {
                sLargest = arr[i];
            }
        }
        return (sLargest == INT_MIN) ? -1 : sLargest;
    }

// Optimal approach: ??

