package Day1.BasicMathQues.InJava;

import java.util.Scanner;

class Operations {

    // function to find the count of a digits in a given number
    public int count(int n) {
        int cnt = (int) Math.log10(n) + 1;
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

    // function to revese the given number
    public int revNum(int n) {
        int revno = 0;
        while (n > 0) {
            int ld = n % 10;
            n /= 10;
            revno = (revno * 10) + ld;
        }
        return revno;
    }

    // function to check weather the number is palindrome or not
    public boolean palindrome(int n) {
        int orginalNum = n;
        int revno = 0;
        while (n > 0) {
            int ld = n % 10;
            n /= 10;
            revno = (revno * 10) + ld;
        }
        return revno == orginalNum;
    }

    // function to find the AMSTRONG NUMBER
    public boolean armstrongNum(int n) {
        int originalNum = n;
        int sum = 0;
        int numDigits = (int) Math.log10(n) + 1;

        while (n > 0) {
            int ld = n % 10;
            sum += Math.pow(ld, numDigits);
            n /= 10;
        }
        return sum == originalNum;
    }
}

public class MathBasicQues {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number  : ");
        int n = sc.nextInt();
        Operations op = new Operations();
        //
        System.out.println("The number of digits in a given number :" + op.count(n));
        //
        System.out.print("Digits from last are : ");
        op.ExtractNum(n);
        //
        System.out.println("The reverse of a given number is : " + op.revNum(n));
        //
        if (op.palindrome(n))
            System.out.println(n + " Its a plaindrome number");
        else
            System.out.println(n + " Not a palindrome number ");
        //
        if (op.armstrongNum(n))
            System.out.println(n + " is a Amstrong Number");
        else
            System.out.println(n + " is not a Amstrong Number");
        sc.close();
    }
}