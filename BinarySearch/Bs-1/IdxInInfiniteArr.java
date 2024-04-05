
/*
 * program to find the index of key element in a infinte sorted array it may give array out of index exception for some cases only here 
 * since its not a infinte array neglect it so just focus on logic only 
 */

class BinarySearch {
    public int binarySearch(int arr[], int size, int key) {
        int start = 0;
        int end = size - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] == key)
                return mid;
            if (arr[mid] < key)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }

    public int searchIdx(int arr[], int size, int key) {
        @SuppressWarnings("unused")
        int low = 0;
        int high = 1;
        while (key > arr[high]) {
            low = high;
            high *= 2;
        }
        int b = binarySearch(arr, size, key);
        return b;
    }
}

public class IdxInInfiniteArr {
    public static void main(String[] args) {
        int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // infiinte array elements cannot be initalized so it has be
                                                       // broken into small piece

        int target = 3;
        BinarySearch b = new BinarySearch();
        System.out.println("Index of an target element(zero-based idx) :  " + b.searchIdx(arr, arr.length, target));
    }
}
