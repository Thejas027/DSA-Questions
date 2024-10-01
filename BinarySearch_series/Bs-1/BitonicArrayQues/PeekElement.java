/*
 * program to find the peek element in a given unsorted or sorted array using binary search concept 
 * where the peek elements index value is made to return from the below code . 😅
 */

class BSearch {
    public int PeekEleIdx(int arr[]) {
        int start = 0;
        int end = arr.length;
        while (start <= end) {

            int mid = start + (end - start) / 2;

            if (mid > 0 && mid < arr.length - 1) {

                if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
                    return mid; // returns the index of an peek element

                if (arr[mid + 1] > arr[mid])
                    start = mid + 1;

                else if (arr[mid - 1] > arr[mid])
                    end = mid - 1;

            } else if (mid == 0) { // edge case 1 if mid is zero

                if (arr[0] > arr[1])
                    return 0;
                else
                    return 1;

            } else if (mid == arr.length - 1) { // edge case 2 if mid is size-1

                if (arr[arr.length - 1] > arr[arr.length - 2])
                    return arr.length - 1;
                else
                    return arr.length - 2;
            }
        }
        return -1; // if peek element not found in the array
    }
}

public class PeekElement {
    public static void main(String[] args) {
        int arr[] = { 10, 20, 15, 2, 100, 0 };
        BSearch b = new BSearch();
        System.out.println("Peek element is at index [zero based index] : " + b.PeekEleIdx(arr));
    }
}
