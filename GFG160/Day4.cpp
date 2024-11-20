// Given an unsorted array arr[]. Rotate the array to the left (counter-clockwise direction) by d steps, where d is a positive integer. Do the mentioned change in the array in place.
//
void rotateArr(vector<int>& arr, int d) {
    // arr= = 1234567 d=3
        int n = arr.size();
        d %= n; //if d>n. d=7 and n=5, d becomes 2 (7 % 5 = 2)
        reverse(arr.begin(), arr.begin() + d); //3214567
        reverse(arr.begin() + d, arr.end()); //3217654
        reverse(arr.begin(), arr.end()); //4567123
    }
