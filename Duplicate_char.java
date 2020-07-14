import java.io.*;
import java.util.Scanner;
public class Main
{
	public static void main(String[] args) 
	{
	    String str;
	    int i,count,j;
	    Scanner s=new Scanner(System.in);
		System.out.println("Enter the string");
		str=s.nextLine();
		char string[]=str.toCharArray();
		for(i=0;i<string.length;i++)
		{
		    count=1;
		    for(j=i+1;j<string.length;j++)
		    {
		        if(string[i]==string[j])
		        {
		            count++;
		            string[j]='0';
		        }
		    }
		    if(count>1&&string[i]!='0')
	        {   
	            System.out.println(string[i]);
	        
	        }
		    
		}
	    
	}
}
