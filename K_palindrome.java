import java.util.Scanner;
import java.util.*;

public class Main
{
	
	public static int isKPalindrome(String X, int m, String Y, int n)
	{
	
		if (m == 0 || n == 0)
    {
			return n + m;
		}

		
		if (X.charAt(m - 1) == Y.charAt(n - 1)) 
    {
			return isKPalindrome(X, m - 1, Y, n - 1);
		}


		int x = isKPalindrome(X, m - 1, Y, n);


		int y = isKPalindrome(X, m, Y, n - 1);

		
		return 1 + Integer.min(x, y);
	}

	public static void main(String[] args)
	{
	    Scanner sc= new Scanner(System.in);  
        System.out.print("Enter a string: ");  
        String str= sc.next();   //reads string before the space  
        System.out.println("You have entered: "+str);
        System.out.println("Enter the k value: ");  
		int K=sc.nextInt();

		
		String rev = new StringBuilder(str).reverse().toString();

		if (isKPalindrome(str, str.length(), rev, str.length()) <= 2 * K) {
			System.out.println("Yes the String is K-Palindrome");
		} else {
			System.out.println("No the String is not a K-Palindrome");
		}
	}
}
