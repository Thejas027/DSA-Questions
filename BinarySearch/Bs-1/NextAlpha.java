class CeilOfAlphabet {
    public char NextAplhabet(char ch[], int size, int target) {

        char result = '#';

        int start = 0;
        int end = size - 1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (ch[mid] == target)
                start = mid + 1;
            else if (ch[mid] < target)
                start = mid + 1;
            else if (ch[mid] > target) {
                result = ch[mid];
                end = mid - 1;
            }
        }
        return result;
    }
}

public class NextAlpha {

    public static void main(String[] args) {
        char ch[] = { 'a', 'b', 'c', 'f', 'h' };

        char target = 'a';
        CeilOfAlphabet c = new CeilOfAlphabet();
        System.out.println("the ceil of an given target element : " + c.NextAplhabet(ch, ch.length, target));
    }
}