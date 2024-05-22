// package Arrays.QuestionsInJava;
import java.util.Scanner;

class Pair {
    int first;
    int second;

    Pair(int first, int second) {
        this.first = first;
        this.second = second;
    }

    @Override
    public String toString() {
        return "(" + first + "," + second + ")";
    }
}

class TwoSumFinder {
    /*
     * BRUTER FORCE APPROACH TO FIND THE SUM
     * TIME COMPLEX -- O(N*N)
     * SPACE COMPLEX --o(1)
     */
    public boolean findTwoSum(int[] arr, int k) {
        for (int i = 0; i < arr.length; i++) {
            for (int j = i + 1; j < arr.length; j++) {
                if (arr[i] + arr[j] == k)
                    return true;
            }
        }
        return false;
    }

    public Pair findTwoSum2(int[] arr, int k) {
        int left = 0;
        int right = arr.length - 1;

        while (left < right) {
            int sum = arr[left] + arr[right];

            if (sum == k) {
                return new Pair(left, right);
            } else if (sum > k)
                right--;
            else
                left++;
        }

        return new Pair(-1, -1);
    }
}

public class TwoSumArr {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arr[] = { 1, 2, 3, 4, 5, 6, 7,17,19 };
        System.out.println("Enter the sum value to find in the array : ");
        int k = sc.nextInt();

        TwoSumFinder twoSumFinder = new TwoSumFinder();
        // Calling findTwoSum2 method
        Pair foundPair = twoSumFinder.findTwoSum2(arr, k);

        // Checking if a valid pair was found
        if (foundPair.first != -1 && foundPair.second != -1) {
            System.out.println("Pair found at indices: " + foundPair);
        } else {
            System.out.println("Pair not found");
        }

        sc.close();
    }
}
