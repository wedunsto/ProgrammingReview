package Classes;
/*
 *Objective:
 *	Create derived class of the Waiter class
 *	Override the Salary() method
 */
public class OfficeJob extends Waiter{
	private String companyName;//Contain the name of the company

	public OfficeJob(){//Default constructor
		this.companyName="";
	}

	@Override
	public double Salary(int wage){//Override the Salary method
		int vacation=wage/2;
		int wages=wage*40;
		return wages+vacation;
	}

	public void setCompanyName(String companyName){//Setter for companyName
		this.companyName=companyName;
	}
}
