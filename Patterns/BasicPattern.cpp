#include <iostream>
using namespace std;

// function to print the rectangle pattern
/*
 * * * *
 * * * *
 * * * *
 * * * *
 */
void Rectangle(int n)
{
    // outer loop
    for (int i = 0; i < n; i++)
    {
        // inner loop
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// function to print the half pyramid
/*
 *
 * *
 * * *
 * * * *
 */
void HalfPyramid(int n)
{
    // outer loop
    for (int i = 0; i < n; i++)
    {
        // inner loop
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
//  function to print the inverted half pyramid
/* Eg: n value taken as --> 4
 * * * *
 * * *
 * *
 *
 */
void HalfInvertedPyramid(int n)
{
    // outer loop
    for (int i = 0; i < n; i++)
    {
        // inner loop
        for (int j = i; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// funtion to print the number in half pyramid shapr
/*
1
1 2
1 2 3
1 2 3 4
*/

void PrintNum(int n)
{
    // outer loop
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

// funtion to print the number in the formqat
/*
1
2 2
3 3 3
4 4 4 4
*/

void PrintNum2(int n)
{
    int count = 0;
    // outer loop
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
        }
        cout << endl;
        count++;
    }
}

// function to print the number in inverted form
/*
1 2 3 4
1 2 3
1 2
1
*/

void PrintNum3(int n)
{
    // outer loop
    for (int i = 1; i < n; i++)
    {
        // inner loop
        for (int j = 1; j < n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

// funtion to print the patter as shown
//      *
//    * * *
//  * * * * *
//* * * * * * *

void printStar(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < (n - i - 1); j++)
            cout << " ";

        // star
        for (int j = 0; j < (2 * i + 1); j++)
            cout << "*";

        // space
        for (int j = 0; j < (n - i - 1); j++)
            cout << " ";

        cout << endl;
    }
}

// function to print the above star in reverse manner
void PrintStar2(int n)
{
}
int main()
{
    int n;
    int choice;
    do
    {
        cout << "\nMENU\n";
        cout << "1.Rectangle Pattern\n";
        cout << "2.Pyramid\n";
        cout << "3.Inverted Half Pyramid\n";
        cout << "4.To print the Number in Pyramid shape\n";
        cout << "5.To print the Number  in Pyramid shape\n";
        cout << "6.To print the Number in Inverted Pyramid shape\n";
        cout << "7.To print the pattern\n";
        cout << "Enter your choice\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the n value to print rectangle pattern: ";
            cin >> n;
            Rectangle(n);
            break;
        case 2:
            cout << "Enter the n value to print Half Pyramid  pattern: ";
            cin >> n;
            HalfPyramid(n);
            break;
        case 3:
            cout << "Enter the n value to print Inverted Half Pyramid  pattern: ";
            cin >> n;
            HalfInvertedPyramid(n);
            break;
        case 4:
            cout << "Enter the n value to print Inverted Half Pyramid  pattern: ";
            cin >> n;
            PrintNum(n);
            break;
        case 5:
            cout << "Enter the n value to print Inverted Half Pyramid  pattern: ";
            cin >> n;
            PrintNum2(n);
            break;
        case 6:
            cout << "Enter the n value to print Inverted Half Pyramid  pattern: ";
            cin >> n;
            PrintNum3(n);
            break;
        case 7:
            cout << "Enter the n value to print Inverted Half Pyramid  pattern: ";
            cin >> n;
            printStar(n);
            break;
        default:
            cout << "Invalid choice\n";
            break;
        }
    } while (choice != 10);

    return 0;
}