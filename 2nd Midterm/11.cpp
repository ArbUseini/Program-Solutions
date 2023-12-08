#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

/*

I don't know why they mention the file when you can't read
or write to it 

*/

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; ++j) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);

        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

void wtf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    // wtf();
    int size;
    for (size = 0; ; size++){
        string f;
        getline(cin, f);
        if (f == ""){break;}
        int count(0);
        int *arr = new int[200];
        for (int i = 0; i < f.length(); i++){
            if (isdigit(f[i])){
                arr[count] = f[i] - '0';
                count++;
            }
        }
        quickSort(arr, 0, count - 1);
        cout << count << ":";
        for (int j = 0; j < count; j++){
            cout << arr[j];
        }
        cout << endl;
        delete[] arr;
    }
    return 0;
}