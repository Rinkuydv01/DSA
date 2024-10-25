#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[100];
    int len = 0;
    int index = 0;
    int choice;

    while (cin >> choice) {
        if (choice == 1) {
            int element;
            cin >> element;
            arr[len++] = element;
            cout << "Element " << element << " is enqueued in queue" << endl;
        } else if (choice == 2) {
            if (len == index) {
                cout << "Queue is empty" << endl;
            } else {
                cout << "Element " << arr[index] << " is dequeued" << endl;
                index++;
            }
        } else if (choice == 3) {
            if (len == index) {
                cout << "Queue is empty" << endl;
            } else {
                cout << "Elements in queue: ";
                for (int i = index; i < len; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
        } else if (choice == 4) {
            break;
        } else {
            cout << "Invalid Choice" << endl;
        }
    }

    return 0;
}
