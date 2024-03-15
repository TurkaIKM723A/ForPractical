#include <iostream>

using namespace std;

int main(){

const int size = 5; 

int arr[size] = { 2, 7, 4, 9, 3 }; 

int sum = 0; 


for (int i = 0; i < size; ++i) {

    sum += arr[i];

}

int min = arr[0];
int max = arr[0];

for (int i = 1; i < size; ++i) {

    if (arr[i] < min) {

        min = arr[i];

    }
    if (arr[i] > max) {

        max = arr[i];

    }
}

for (int i = 0; i < size; ++i) {

    sum += arr[i];

}

double aver = static_cast<double>(sum) / size; 

cout << "The sum of the all array elements is " << sum << '\n';
cout << " " << '\n';
cout << "The min element of the array is " << min << '\n';
cout << "The max element of the array is " << max << '\n';
cout << " " << '\n';
cout << "The average value of the array elements is " << aver << '\n';

return 0;

}