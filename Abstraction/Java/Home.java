abstract class Home{
	//Objective: Provide a framework for different home subclasses
	private int bedrooms; //Counts how many bedrooms the home has
	private int bathrooms; //Counts how many bathrooms the home has

	public Home(){ //Default constructor for abstract class
		this.bedrooms = 0;
		this.bathrooms = 0;
	}	

	public Home(int bedrooms, int bathrooms){ //Overloaded constructor for the abstract class
		this.bedrooms = bedrooms;
		this.bathrooms = bathrooms;
	}

	abstract int Cost(); //Method free of implementation used to calculate the cost of living
	abstract public void Welcome();//Method free of implementation used to display a welcome message
	public int getBedrooms(){ //Getter for bedroom count
		return this.bedrooms;
	}
	public int getBathrooms(){ //Getter for bathrooom count
		return this.bathrooms;
	}
}
