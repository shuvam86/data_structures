// Problem link: https://www.geeksforgeeks.org/problems/largest-element-in-array4009/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=largest-element-in-array

// Solution:
class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int largest = arr[0];
        for(int i=0;i<arr.size();i++) {
            if(arr[i]>largest) {
                largest = arr[i];
            }
        }
        return largest;
    }
};
