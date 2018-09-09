/*Viken Parikh Computers B2 1411099 */

class ComplexExp
{
	public static void main(String args[])
{
		complex x = new complex(2,3);
		complex y = new complex(5,8);
		complex z = new complex();
		c=a.add(y);						//Calls add function and returns object c
		c.display();
		c.subtract(x,y);
		c.display();
	}
}
class complex
{
	private int real,imag;
	complex()						   	//It is a Default constructor
	{
	}
	complex(int r,int i)						//It is a Parameterized constructor
	{
        real= r;
	imag= i;
	}
	complex add(complex b)
	{
        complex z = new complex();
	z.real=real+y.real;						//Since function is performed on object a.real and imag is synonymous to a.real and a.imag respectively
	z.imag=imag+y.imag;
	return c;
	}
	void subtract(complex x,complex y)				//Function to subtract complex numbers
	{
	real=x.real-y.real;
	imag=x.imag-y.imag;
	
	}
	public void display()
	{System.out.println("Complex number is"+real+"+i"+imag);
	}
}
