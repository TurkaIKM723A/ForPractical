#include <iostream>

using namespace std;

int main(){

const int size = 5; 

int arr[size] = { 2, 7, 4, 9, 3 }; 

int sum = 0; 


for (int i = 0; i < size; ++i) {

    sum += arr[i];

}

cout << "The sum of the all array elements is " << sum << '\n';

return 0;

}