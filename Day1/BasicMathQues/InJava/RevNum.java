package Day1.BasicMathQues.InJava;

import java.util.Scanner;

/**
 * RevNum
 */
class Operations {
    public int count(int n) {
        int cnt = 0;
        while (n > 0) {
            n /= 10;
            cnt++;
        }
        return cnt;
    }

    // function to extract the last digit from a given number
    public void ExtractNum(int n) {
        while (n > 0) {
            int lastDigit = n % 10;
            n /= 10;
            System.out.print(lastDigit + " ");
        }
    }

    public int revNum(int n) {
        int revno = 0;
        while (n > 0) {
            int ld = n % 10;
            n /= 10;
            revno = (revno * 10) + ld;
        }
        return revno;
    }
}

public class RevNum {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number  : ");
        int n = sc.nextInt();
        Operations op = new Operations();
        System.out.println("\nThe number of digits in a given number :" + op.count(n));
        System.out.print("\nDigits from last are : ");
        op.ExtractNum(n);
        System.out.println("\n\nThe reverse of a given number is : " + op.revNum(n));

        sc.close();
    }
}