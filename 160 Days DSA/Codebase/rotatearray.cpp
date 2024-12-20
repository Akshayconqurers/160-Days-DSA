class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        d %= n; //Skip full rotations; just do the extra ones that matter

        //arr.begin(): Points to the first element of the array
        //arr.begin() + d: Points to the element at index d
        //arr.begin() + n: Points to the element at index n

        reverse(arr.begin(), arr.begin() + d); // reverse - function from the <algorithm> library that reverses elements in a range
        // Reverse the First d Elements

        reverse(arr.begin() + d, arr.begin() + n);
        //Reverse the Remaining Elements  

        reverse(arr.begin(), arr.begin() + n);
        //Reverse the Entire Array
    }
};