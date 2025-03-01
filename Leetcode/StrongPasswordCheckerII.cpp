/*
LEET CODE : 2299 -  STRONG PASSWORD CHECKER II
A password is said to be strong if it satisfies all the following criteria:

It has at least 8 characters.
It contains at least one lowercase letter.
It contains at least one uppercase letter.
It contains at least one digit.
It contains at least one special character. The special characters are the characters in the following string: "!@#$%^&*()-+".
It does not contain 2 of the same character in adjacent positions (i.e., "aab" violates this condition, but "aba" does not).
Given a string password, return true if it is a strong password. Otherwise, return false.
*/

class solution
{
public:
      bool strongPasswordCheckerII(string password)
      {
            if (password.length() < 8)
                  return false;

            bool hasLower = false, hasUpper = false, hasDigit = false, hasSpclChar = false;
            string spclChar = "!@#$%^&*()-+";

            for (int i = 0; i < password.length(); i++)
            {
                  if (islower(password[i]))
                        hasLower = true;
                  if (isupper(password[i]))
                        hasUpper = true;
                  if (isdigit(password[i]))
                        hasDigit = true;
                  if (spclChar.find(password[i]) != string::npos)
                        hasSpclChar = true;

                  if (i > 0 && password[i] == password[i - 1])
                        return false;
            }
            return hasDigit && hasLower && hasUpper && hasSpclChar;
      }
}