#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    const size_t s = 10;
    int arr[s] = {};
    int max, min;
    for (int i = 0; i < s; i++) {
        arr[i] = rand() % 9 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;
    max = arr[0], min = arr[0];
    for (int j = 0; j < s; j++) {
        if (arr[j] > max) {
             max = arr[j] ;
        }
        else if (arr[j] < min) {
             min = arr[j] ;
        }

    }
    cout <<"Max = "<< max << " " <<"Min = "<< min;
}

