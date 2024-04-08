package Arrays.QuestionsInJava;

import java.util.Scanner;

class ArrayOperations {
    Scanner sc = new Scanner(System.in);

    public void read(int[] arr, int n) {
        System.out.print("Enter the array elements : ");
        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();
    }

    // function to find the largest element in a given array
    public int LargestElement(int[] arr, int n) {
        int largest = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] > largest)
                largest = arr[i];
        }
        return largest;
    }

    // function to find the second largest from a given array
    public int secondLargest(int[] arr, int n) {
        int largest = LargestElement(arr, n);

        int secLargest = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i] > secLargest && arr[i] != largest) {
                secLargest = arr[i];
            }
        }
        return secLargest;
    }

    // function to find the smallest element in a given array
    public int smallest(int[] arr, int n) {
        int smallest = Integer.MAX_VALUE;

        for (int i = 0; i < n; i++) {
            if (arr[i] < smallest) {
                smallest = arr[i];
            }
        }
        return smallest;
    }

    // function to find the second smallest number in a given array
    public int secondSmallest(int[] arr, int n) {
        int smallest = arr[0];
        int secSmallest = Integer.MAX_VALUE;

        for (int i = 0; i < n; i++) {
            if (arr[i] < smallest) {
                secSmallest = smallest;
                smallest = arr[i];
            } else if (arr[i] != smallest && arr[i] < secSmallest)
                secSmallest = arr[i];
        }
        return secSmallest;
    }

    // function to check weather the array is sorted or not
    public boolean isSorted(int arr[], int n) {
        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[i - 1])
                return false;
        }
        return true;
    }

    // function used to remove the duplicates element and returns total number of
    // elements after removing the duplicates

    public void removeDuplicates(int[] arr, int n) {
        int i = 0;
        for (int j = 1; j < n; j++) {
            if (arr[j] != arr[i]) {
                arr[i + 1] = arr[j];
                i++;
            }
        }
        System.out.println("Number of elements after removing duplicates : " + (i + 1));

        for (int k = 0; k <= i; k++) {
            System.out.print(arr[k] + " ");
        }
    }
}

public class ArrOpeartions {
    public static void main(String[] args) {
        ArrayOperations Arr = new ArrayOperations();
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of an array : ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        int choice;
        do {
            System.out.println("\nMENU\n");
            System.out.println("1.To read the elements ");
            System.out.println("2.Largest elements in the array");
            System.out.println("3.Smallests element in the array");
            System.out.println("4.To check weater the array is sorted or not ");
            System.out.println("5.Remove the duplicates element and retuns number of elements after removing");
            System.out.println("6.Exit");

            System.out.println("Enter your choice : ");
            choice = sc.nextInt();

            switch (choice) {
                case 1:
                    Arr.read(arr, n);
                    break;
                case 2:
                    System.out.println("The largest element in the array: " + Arr.LargestElement(arr, n));
                    System.out.println("The second largest element in the array : " + Arr.secondLargest(arr, n));
                    break;
                case 3:
                    System.out.println("Smallest element in array : " + Arr.smallest(arr, n));
                    System.out.println("Secomd smallest element in an array : " + Arr.secondSmallest(arr, n));
                    break;
                case 4:
                    if (Arr.isSorted(arr, n)) {
                        System.out.println("Arrar is sorted");
                    } else {
                        System.out.println("Array is not sorted");
                    }
                    break;

                case 5:
                    // System.out.println("Number of elements after removing duplicates in a arary :
                    // "
                    // + Arr.removeDuplicates(arr, n));
                    Arr.removeDuplicates(arr, n);
                    break;
                case 6:
                    System.out.println("Exiting program...");
                    break;
                default:
                    System.out.println("Invalid Choice...");
                    break;
            }
        } while (choice != 6);
        sc.close();
    }
}
