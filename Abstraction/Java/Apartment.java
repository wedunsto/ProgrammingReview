class Apartment extends Home implements Tenants{
	//Objective: Create a apartment class that is-a home
	private boolean patio; //Determines if the apartment has a patio
	
	public Apartment(){ //Default constructor for the Apartment class
		super(); //Calls the default constructor for the Home abstract class
		this.patio = false; //by default, instantiate the patio to false
	}
	public Apartment(int bedrooms, int bathrooms, boolean patio){
		super(bedrooms,bathrooms); //Calls the overloaded constructor for the Home abstract class
		this.patio = patio; //assigns value to patio
	}
	@Override
	public int Cost(){ //Abstract method declared in the abstract super class
		int rent = getBedrooms() * getBathrooms(); 
		//Calculates rent based on the number of bedrooms and bathrooms
		return rent;
	}
	@Override
	public void Welcome(){
		Integer tempBedrooms = new Integer(getBedrooms()); //Convert int to Integer
		Integer tempBathrooms = new Integer(getBathrooms()); //Convert int to Integer
		String bedrooms = Integer.toString(tempBedrooms); //Stores the string conversion of the integer
		String bathrooms = Integer.toString(tempBathrooms); //Stores the string conversion of the integer
		String statement = "Welcome to your "+bedrooms+" bedrooms " +bathrooms+" bathrooms home!"; //Stores the welcome
		System.out.println(statement);
	}
	@Override 
	public boolean getPatio(){ //Getter for patio field
		return patio;
	}
}
