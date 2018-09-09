import java.util.*;

class MatrixProgram
{
	public static void main(String args[])
{							//Program to search for an element in the matrix
		Scanner sc = new Scanner(System.in);
		int m,n,i,j,ele;
		int flag = 0;
		System.out.println("Enter no of rows");
		m = sc.nextInt();
		System.out.println("Enter no of columns");
		n = sc.nextInt();
		int a[][] = new int[m][n];
		System.out.println("enter the elements in the array");		//Elements of the matrix accepted
		for(i=0;i<m;i++)
		{
		System.out.println();
		for(j=0;j<n;j++)
		{a[i][j] = sc.nextInt();
		}
		}System.out.println("Array is:");							//Elements of the matrix displayed
		for(i=0;i<m;i++)
		{for(j=0;j<n;j++)
		{System.out.print(a[i][j]+"\t");
		
		}System.out.println();
		}
		System.out.println("Enter the element to be searched");		//Element to be searched is accepted
		ele = sc.nextInt();
		for(i=0;i<m;i++)
		{for(j=0;j<n;j++)
		{if(ele == a[i][j])											//Each element of array compared with element to be searched
		{flag = 1;
		break;
		}
		}
		}
		
		if(flag == 0)
			System.out.println("Number not found ");				
			else 
				System.out.println(" Found");
		}
}
		
