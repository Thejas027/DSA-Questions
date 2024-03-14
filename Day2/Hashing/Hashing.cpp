#include <bits/stdc++.h>
using namespace std;

class Hashing
{
public:
    // function to find how many times the given number appears in a given array (Brute force method)
    int CountNum(int num, const vector<int> &arr)
    {
        int count = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == num)
                count++;
        }
        return count;
    }
};

int main()
{
    int choice;
    do
    {
        cout << "\nMENU\n";
        cout << "1.Brute force method to count how many times num has repeated" << endl;
        cout << "Enter your choice : ";

        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int size;
            cout << "Enter the size of the array : ";
            cin >> size;

            vector<int> arr(size);
            cout << "Enter the array elements : ";
            for (int i = 0; i < size; i++)
                cin >> arr[i];

            int num;
            cout << "Enter the number to find how many times it has repeated : ";
            cin >> num;
            Hashing h;
            cout << "The count of Num : " << h.CountNum(num, arr);
            break;
        }
        default:
            cout << "Invalid choice.." << endl;
            break;
        }
    } while (choice != 3);
    return 0;
}
