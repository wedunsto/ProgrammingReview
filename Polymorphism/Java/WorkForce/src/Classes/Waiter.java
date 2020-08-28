package Classes;
/*
 *Objective:
 *	Create a base class 'Waiter'
 *	Overload the Salary() method
 */
public class Waiter {
	private String country; //Contains the country name

	public Waiter(){//Default constructor
		this.country = "";
	}

	public double Salary(int wage){
		return wage*40;
	}

	public double Salary(int wage, int tip){//Overload the Salary() method
		int temp = wage*40;
		return temp+tip;
	}

	public void setCountry(String country){//setter for country string
		this.country=country;
	}
}
