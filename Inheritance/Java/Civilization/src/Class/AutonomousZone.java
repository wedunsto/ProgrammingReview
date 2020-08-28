package Class;

import java.util.ArrayList;

public class AutonomousZone extends State implements Inhabitable{
	/*
	 *Objectives:
	 *	Create derived class from 'State'
	 *  Contain AZ details
	 */
	private String azName;
	private int azSize;
	private ArrayList azCriminals;

	public AutonomousZone(){//Default constructor
		this.azName="";
		this.azSize=0;
		this.azCriminals=new ArrayList<String>();
	}

	public AutonomousZone(String azName, int azSize){//Overloaded constructor
		super("N/A","N/A",0.0,"N/A","N/A",0.0);
		this.azName=azName;
		this.azSize=azSize;
	}

	//Proper getters and setters
	public void addAZCriminal(String criminal){
		this.azCriminals.add(criminal);
	}

	public String removeAZCriminal(int index){
		String removedCriminal=azCriminals.get(index).toString();
		azCriminals.remove(index);
		return removedCriminal;
	}

	public String getAZCriminal(int index){
		return this.azCriminals.get(index).toString();
	}

	public int getAZCriminalSize(){
		return this.azCriminals.size();
	}

	public void setAzName(String azName){
		this.azName=azName;
	}

	public String getAzName(){
		return this.azName;
	}

	@Override
	public int crimeCount(int inhabitants) {
		return this.getAZCriminalSize() * 100;
	}
}
