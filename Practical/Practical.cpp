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

void Sort(int arr[], int size); {

    for (int i = 0; i < size - 1; ++i) {

        for (int j = 0; j < size - i - 1; ++j) {

            if (arr[j] > arr[j + 1]) {

                int temp = arr[j];

                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

cout << "Array to be sorted: " << '\n';

for (int i = 0; i < size; ++i) {

    cout << arr[i] << " " << '\n';

}
cout << "Sorted array: " ;

for (int i = 0; i < size; ++i) {

    cout << arr[i] << " " << '\n';
}

cout << "The sum of the all array elements is " << sum << '\n';
cout << " " << '\n';
cout << "The min element of the array is " << min << '\n';
cout << "The max element of the array is " << max << '\n';
cout << " " << '\n';
cout << "The average value of the array elements is " << aver << '\n';
cout << " " << '\n';
cout << "Try to guess the random number of this array. Write random number down bellow." << '\n';

int ran_num;

cin >> ran_num;

bool found = false;


for (int i = 0; i < size; ++i) {

    if (arr[i] == ran_num) {

        found = true;

        break;
    }
}

if (found) {

    cout << "The element " << ran_num << " is found in the array." << '\n';

}
else {

    cout << "The elemnt " << ran_num << " is not found in the array." << '\n';

}

return 0;

}