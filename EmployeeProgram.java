/*Viken Parikh Computers B2 1411099 */

import java.util.*;
import java.io.*;
class Employee
{
	protected int eid;
	protected String ename;	
}
 class Manager extends Employee
{
	
	private double salary1;
	private double commission;
	
	Manager()
        {
	}

	Manager(double commissionmain)
	{
        commission = commissionmain;
	}
		
	public void accept(int eidmain,String enamemain)
	{
        eid = eidmain;
	ename = enamemain;
	}

	public void getsalary(double salarymain)
	{
        salary1 = salarymain;
	}
	
        public void computesalary()
	{
        salary1 = salary1+commission;
	}
	
        public void displaymanager()
        {
	System.out.println("salarynfor manager "+ename+" with ID "+eid+" is"+salary1);
	}
	
        public String toString()
        {
	return ename + " : " + String.valueOf(eid);
	}
}
 class SalesPerson extends Employee
{
		private double sales;
		private double commission;
		private double salary2;
		
	SalesPerson()
        {		
        }
	
        SalesPerson(double salesmain,double commissionmain)
        {
	sales = salesmain;
	commission = commissionmain;
	}
	
	public void accept(int eidmain,String enamemain)
	{
        eid = eidmain;
	ename = enamemain;
	}

	public void getsalary(double salarymain)
	{
        salary2 = salarymain;
	}
	
	public void computesalary()
        {
	salary2 = salary2+sales*commission;
	}

	public void displaysales()
        {
	System.out.println("salary for salesperson "+ename+" with ID"+eid+ " is"+salary2);
	}

	public String toString()
        {
	return "Salary of " + ename + " with Employee Id " + eid + " is " + String.valueOf(salary2);
	}
}
 class WageEmployee extends Employee
{
		
			private int hr;
			private int rate;
			private double commission;
			private double salary3;
			
		
		WageEmployee(){}
		WageEmployee(int hrmain,int ratemain,double commissionmain)
		{
                hr = hrmain;
		rate= ratemain;
		commission = commissionmain;
		}

public void accept(int eidmain,String enamemain)
	{
        eid = eidmain;
	ename = enamemain;
	}

public void getsalary(double salarymain)
	{
        salary3 = salarymain;
	}
public void computesalary()
        {
	salary3 = salary3+commission+hr*rate;
	}
public void displaywage()
        {
	System.out.println("Salary for wage employee "+ename+ " with ID "+eid+ " is "+salary3);
	}
public String toString()
        {
	return "Salary of " + ename + " with Employee Id " + eid + " is " + String.valueOf(salary3);
	}
}
		class EmployeeProgram{
			public static void main(String args[])throws IOException{
				double salarymain,salesmain,commissionmain;
				int hrmain,ratemain,eidmain,choice;
				String enamemain;
			System.out.println("......Employee Program......");
			InputStreamReader isr = new InputStreamReader(System.in);
			BufferedReader stdin = new BufferedReader(isr);
		
			System.out.println("Enter your choice- 1.Manager salary. 2.Salesman salary. 3.WageEmployee salary.");
			choice = Integer.parseInt(stdin.readLine());

			switch(choice)
			{case 1:
			{	System.out.println("Enter employee ID, employee name,salary and commission ");
			eidmain = Integer.parseInt(stdin.readLine());
			enamemain =  stdin.readLine();
			salarymain = Double.parseDouble(stdin.readLine());
			commissionmain = Double.parseDouble(stdin.readLine());
			Manager m = new Manager(commissionmain);
			m.accept(eidmain,enamemain);
			m.getsalary(salarymain);
			m.computesalary();
			m.displaymanager();
			break;
			}
			case 2:
			{	System.out.println("Enter employee ID, name, salary, sales and commission respectively");
			eidmain = Integer.parseInt(stdin.readLine());
			enamemain =  stdin.readLine();
			salarymain = Double.parseDouble(stdin.readLine());
			salesmain = Double.parseDouble(stdin.readLine());
			commissionmain = Double.parseDouble(stdin.readLine());
			SalesPerson s = new SalesPerson(salesmain,commissionmain);
			s.accept(eidmain,enamemain);
			s.getsalary(salarymain);
			s.computesalary();
			s.displaysales();
			break;
			}
			case 3:
			{   System.out.println("Enter employee ID, name, salary, hours and rate and commission respectively");
			eidmain = Integer.parseInt(stdin.readLine());
			enamemain =  stdin.readLine();
			salarymain = Double.parseDouble(stdin.readLine());
			hrmain = Integer.parseInt(stdin.readLine());
			ratemain = Integer.parseInt(stdin.readLine());
			commissionmain = Double.parseDouble(stdin.readLine());
			WageEmployee w = new WageEmployee(hrmain,ratemain,commissionmain);
			w.accept(eidmain,enamemain);
			w.getsalary(salarymain);
			w.computesalary();
			w.displaywage();
			break;
			}	
			default:
			System.out.println("Invalidinput");
			break;
			}
                     }
		}
		

	