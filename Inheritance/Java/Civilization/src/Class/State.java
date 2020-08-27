package Class;
/*
 *Objectives:
 *	Create derived class from 'Country'
 * 	Use 'State' class to act as super class for 'City' class
 */
public class State extends Country{
	private String stateName; //Variable containing the state's name
	private String stateFood; //Variable containing the state's famous food
	private double statePopulation; //Variable containing the state's population

	public State(){ //Default
		super(); //Calls the default constructor from super class
		this.stateName="";
		this.stateFood="";
		this.statePopulation=0.00;
	}

	public State(String countryName, String countryCurrency, double countryPopulation, String stateName, String stateFood, double statePopulation){
		//Overloaded constructor
		super(countryName,countryCurrency,countryPopulation); //calls overloaded constructor from super class
		this.stateName=stateName;
		this.stateFood=stateFood;
		this.statePopulation=statePopulation;
	}

	//Getters and setters
	public void setStateName(String stateName){
		this.stateName=stateName;
	}

	public void setStateFood(String stateFood){
		this.stateFood=stateFood;
	}

	public void setStatePopulation(double statePopulation){
		this.statePopulation=statePopulation;
	}

	public String getStateName(){
		return this.stateName;
	}

	public String getStateFood(){
		return this.stateFood;
	}

	public double getStatePopulation(){
		return this.statePopulation;
	}
}
