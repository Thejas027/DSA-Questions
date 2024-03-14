#include <bits/stdc++.h>
using namespace std;

class Hashing
{
public:
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

    cout << "Enter the size of the array: ";
    int size;
    cin >> size;

    vector<int> arr(size);
    cout << "Enter the array elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    string str;
    cout << "Enter the string value: ";
    cin >> str;

    do
    {
        cout << "\nMENU\n";
        cout << "1. Brute force method to count how many times a number has repeated" << endl;
        cout << "2. Hashing method to find how many times a number has repeated" << endl;
        cout << "3. To know how many times a particular character is repeated" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int num;
            cout << "Enter the number to find how many times it has repeated: ";
            cin >> num;
            Hashing h;
            cout << "The count of " << num << " is: " << h.CountNum(num, arr) << endl;
            break;
        }

        case 2:
        {
            int hash[size + 1] = {0};
            for (int i = 0; i < size; i++)
            {
                if (arr[i] >= 0 && arr[i] <= size)
                    hash[arr[i]] += 1;
                else
                    cout << "Invalid number encountered. Ignoring." << endl;
            }
            int num;
            cout << "Enter the number to find how many times it has repeated: ";
            cin >> num;
            if (num >= 0 && num <= size)
                cout << num << " has repeated: " << hash[num] << endl;
            else
                cout << "Invalid number entered." << endl;
            break;
        }

        case 3:
        {
            int hash[26] = {0};
            for (int i = 0; i < str.size(); i++)
            {
                char c = tolower(str[i]);
                if (c >= 'a' && c <= 'z')
                    hash[c - 'a'] += 1;
                else
                    cout << "Invalid character encountered. Ignoring." << endl;
            }
            char c;
            cout << "Enter the character to know how many times it has repeated: ";
            cin >> c;
            c = tolower(c);
            if (c >= 'a' && c <= 'z')
                cout << "The character '" << c << "' has repeated: " << hash[c - 'a'] << endl;
            else
                cout << "Invalid character entered." << endl;
            break;
        }
        case 4:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    } while (choice != 4);

    return 0;
}