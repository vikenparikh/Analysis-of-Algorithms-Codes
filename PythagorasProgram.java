/*Viken Parikh Computers B2 1411099 */

import java.util.*;
class Pythagoras
{										//Program to calculate pythagorean triplets
	public static void main (String[] args)
    {
	int a,b,c,count = 0;
	label1:
	for(a=1;a<100;a++)
            {
             for(b=1;b<100;b++)
		{
		label2:
		for(c=1;c<100;c++)
		    {
                    if((a*a)+(b*b)==(c*c))							//Checking for a pythagorean triplet
		      {
                      System.out.println("Pythagorean triplet is  "+a+b+c);
		       count++;
		      }
		if(count==10)
		break label1;
		    }
                }
             }
     }
}