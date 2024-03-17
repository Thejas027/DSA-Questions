package Arrays;

import java.util.Scanner;

class TwoSumFinder {

    public boolean findTwoSum(int[] arr, int k) {
        for (int i = 0; i < arr.length; i++) {
            for (int j = i + 1; j < arr.length; j++) {
                if (arr[i] + arr[j] == k)
                    return true;
            }
        }
        return false;
    }
}

public class TwoSumArr {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
        System.out.println("Enter the sum value to find in the array : ");
        int k = sc.nextInt();

        TwoSumFinder twoSumFinder = new TwoSumFinder();
        boolean found = twoSumFinder.findTwoSum(arr, k);

        if (found) {
            System.out.println("Sum found");
        } else {
            System.out.println("Sum not found");
        }

        sc.close();
    }
}
