package Arrays.UnionAndIntersection;

// brute force approach to union the 2 array with time complex of  O(n1*logn + n2 * logn) + O(n1+n2)
import java.util.*;

public class UnionArr {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the size of 1st Array :");
        int n1 = sc.nextInt();
        System.out.println("Enter the size of 2nd Array :");
        int n2 = sc.nextInt();

        int arr1[] = new int[n1];
        int arr2[] = new int[n2];

        // to give an input for 2 arrays
        System.out.print("Enter the elements for 1st array : ");
        for (int i = 0; i < n1; i++) {
            arr1[i] = sc.nextInt();
        }
        System.out.print("Enter the elements for 2nd array : ");
        for (int i = 0; i < n2; i++) {
            arr2[i] = sc.nextInt();
        }

        // code to make the union of two arrays using set
        Set<Integer> set = new HashSet<>();
        for (int num : arr1) {
            set.add(num);
        }
        for (int num : arr2) {
            set.add(num);
        }

        System.out.print("Union of the two arrays: ");
        for (int num : set) {
            System.out.print(num + " ");
        }
        sc.close();
    }

}