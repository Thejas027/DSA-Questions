#include <iostream>
using namespace std;

class ArrayOperations
{
public:
    // function to take input
    void read(int arr[], int n)
    {
        cout << "Enter the array elements : ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }

    // Left rotation of an array by one position
    void leftRotate(int arr[], int n)
    {
        int temp = arr[0];
        for (int j = 1; j < n; j++)
        {
            arr[j - 1] = arr[j];
        }
        arr[n - 1] = temp;

        // to print the array
        cout << "Array elements after rotation : ";
        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
};

int main()
{
    ArrayOperations arr;
    int n;
    cout << "Enter the size of an array : ";
    cin >> n;

    int a[n];
    int choice;
    do
    {
        cout << "\nMENU\n";
        cout << "1. To read the array elements\n";
        cout << "2. Left rotation of an array by one bit\n";
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            arr.read(a, n);
            break;

        case 2:
            arr.leftRotate(a, n);
            break;

        default:
            cout << "Invalid choice\n";
            break;
        }
    } while (choice != 3); // Adjusted loop condition to match menu options

    return 0;
}
