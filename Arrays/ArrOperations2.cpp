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

    // Left rotation of an array by one position  BRUTE FROCE approach time complex = O(n)
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

    // right rotaion of an array
    void RightRotate(int arr[], int n)
    {
        int lastElement = arr[0];
        for (int j = 0; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = lastElement;
        // to print the array
        cout << "Array elements after rotation : ";
        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
    }

    //  left rotaion of an array by 'd' places  BRUTE FORCE METHOD
    void LeftRotation(int arr[], int d, int n)
    {
        d = d % n;
        int *temp = new int[d];

        // loop to add the d number of elements to temp
        for (int i = 0; i < d; i++)
        {
            temp[i] = arr[i];
        }

        // loop to shift the elements
        for (int j = d; j < n; j++)
        {
            arr[j - d] = arr[j];
        }

        // loop to add back the temp elements to main array
        for (int i = (n - d); i < n; i++)
        {
            arr[i] = temp[i - (n - d)];
        }

        delete[] temp;
    }

    // optimal code of above function
    void reverse(int arr[], int start, int end)
    {
        while (start <= end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

    void optimalLeftRotation(int arr[], int d, int n)
    {
        d = d % n;
        reverse(arr, 0, d - 1);
        reverse(arr, d, n - 1);
        reverse(arr, 0, n - 1);

        // loop to print the final array elements
        cout << "Array elements after rotation : ";
        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " ";
        }
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
        cout << "2. Rotations of an array by one bit\n";
        cout << "3.To rotate the array by d place\n";
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            arr.read(a, n);
            break;

        case 2:
            cout << "Right Rotation : ";
            arr.RightRotate(a, n);
            cout << "\nLeft Rotation : ";
            arr.leftRotate(a, n);
            break;
        case 3:
            int d;
            cout << "Enter the d value to rotate the array : ";
            cin >> d;
            arr.optimalLeftRotation(a, d, n);
            break;
        default:
            cout << "Invalid choice\n";
            break;
        }
    } while (choice != 4); // Adjusted loop condition to match menu options

    return 0;
}
