#include <iostream>

void Suma(int arr[][2], int sum[], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sum[i] += arr[i][j];
        }
    }
}

void MaxSum(int sum[], int rows, int &maxSum, int &maxnumber) {
    for(int i = 0; i < rows - 1; i++) {
        if(sum[i] + sum[i+1] > maxSum) {
            maxSum = sum[i] + sum[i+1];
            maxnumber = i;
        }
    }
}

void Sort(int arr[][2], int rows) {
    for(int i = 0; i < rows; i++) {
        if(arr[i][0] < arr[i][1]) {
            int temp = arr[i][0];
            arr[i][0] = arr[i][1];
            arr[i][1] = temp;
        }
    }
}

int main() {
    const int ROWS = 22;
    const int COLS = 2;
    int arr[ROWS][COLS] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44};
    int sum[ROWS] = {0};
    int maxSum = 0, maxnumber = 0;

    Suma(arr, sum, ROWS, COLS);
    
    MaxSum(sum, ROWS, maxSum, maxnumber);
    std::cout << "Max Sum Rows: " << maxnumber << " and " << maxnumber+1 << "\n";

    Sort(arr, ROWS);

    std::cout << "Sorted array:\n";
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}