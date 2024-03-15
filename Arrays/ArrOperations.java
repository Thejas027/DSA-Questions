package Arrays;

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
}

public class LargestEle {
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
            System.out.println("2.Largest element in the array");
            System.out.println("3.Second Largest element in the array");
            System.out.println("4.Exit");

            System.out.println("Enter your choice : ");
            choice = sc.nextInt();

            switch (choice) {
                case 1:
                    Arr.read(arr, n);
                    break;
                case 2:
                    System.out.println("The largest element in the array: " + Arr.LargestElement(arr, n));
                    break;
                case 3:
                    System.out.println("The second largest element in the array : " + Arr.secondLargest(arr, n));
                    break;
                case 4:
                    System.out.println("Exiting program...");
                    break;
                default:
                    System.out.println("Invalid Choice...");
                    break;
            }
        } while (choice != 4);
        sc.close();
    }
}
