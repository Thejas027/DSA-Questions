package BasicMathQues.InJava;

import java.util.ArrayList;
import java.util.Comparator;
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

    // funtion to find the all divisor of a given number
    public void numDivisor(int n) {
        for (int i = 1; i <= n; i++) {
            if (n % i == 0)
                System.out.print(i + " ");
        }
    }

    public void numDivisor2(int n) {
        ArrayList<Integer> ar = new ArrayList<>();
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                ar.add(i);
                if ((n / i) != i)
                    ar.add(n / i);
            }
        }
        ar.sort(Comparator.naturalOrder());
        for (int it : ar)
            System.out.print(it + " ");
    }

    // function to find weather the number is prime or not
    public void PrimeNum(int n) {
        int count = 0;
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                count++;
                if ((n / i) != i)
                    count++;
            }
        }
        if (count == 2)
            System.out.println(n + " is a prime number ");
        else
            System.out.println(n + " is not a prime number ");
    }

    // function to find the GDC||HCF of a two number (Eculidean Algorithm)
    public int gcd(int a, int b) {
        while (a > 0 && b > 0) {
            if (a > b)
                a = a % b;
            else
                b = b % a;
        }
        if (a == 0)
            return b;
        return a;
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
        //
        System.out.print("Divisor of " + n + " :");
        op.numDivisor2(n);
        //
        System.out.println();
        op.PrimeNum(n);
        //
        System.out.println();
        System.out.println("Gcd of two numbers : " + op.gcd(10, 52)); // chnage accordingly the values of a and b to
                                                                      // find the requried number gcd
        sc.close();
    }
}