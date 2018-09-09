/*Viken Parikh Computers B2 1411099 */


import java.util.*;
class isPalin{
	public static void main(String args[])
{							                                        //Program to check for palindrome
		int n,no,reverse,i,count = 0;
		String str;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the limit");
		no = sc.nextInt();
		for(i=0;i<no;i++)
		{		System.out.println("Enter the number to reverse");
				n = sc.nextInt();		
				reverse = rev(n);
				System.out.println("Reverse is "+reverse);			//Reverse of the number is displayed
				
				if(reverse==n)										//Reversed number compared with original to check for palindrome
				{System.out.println("It is a palindrome");
				count++;}
				else
				{System.out.println("Not a palindrome");
				}
				}
		System.out.println("Thus "+count+" palindrome numbers are found.");	//Number of palindromes found is displayed
		}


static int rev(int n)				//Function to reverse the number
   {
        int dig;
        int reverse = 0;	
            while(n>0)
                {
                dig = n%10;
                reverse = reverse*10+dig;
                n = n/10;
                }
   return reverse;
   }

}
