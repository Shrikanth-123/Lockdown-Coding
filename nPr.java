import java.util.*;
 
class NPR
{
 public static void main(String args[])
 {
 Scanner sc = new Scanner(System.in);
     System.out.println("Enter the value of n");
     int n=sc.nextInt();
     System.out.println("Enter the value of r");
     int r=sc.nextInt();
   int npr=fact(n)/fact(n-r);
 
     System.out.println("Value of "+n+"P"+r+" = "+npr);
    	}
 
 static int fact(int n)
 {
 int i,f=1;
     for(i=1;i<=n;i++)
     {
         f=f*i;
     } 
     return f;
 }
}
