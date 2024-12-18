lass Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
          int largest = INT_MIN; 
          int slargest = INT_MIN;

        for (int num : arr) {
            if (num > largest) {
                slargest = largest;
                largest = num;
            } else if (num > slargest && num < largest) {
                slargest = num;
            }
        }

       if (slargest == INT_MIN) {
    return -1; // If no valid second largest exists
} else {
    return slargest; // Return the second largest element
}
    }
};