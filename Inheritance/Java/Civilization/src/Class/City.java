package Class;

import java.util.ArrayList;

/*
 *Objectives:
 *	Create final derived class 'City'
 *	Detail a city's name, zip code range, and citizens
 */
public class City extends State implements Inhabitable{
	private String cityName;//Contains the city's name
	private int zipCodes[];//Contains the range of zip codes in the city
	private ArrayList citizens;//Contains the names of people living in the city

	public City(){//Default constructor
		this.cityName="";
		this.zipCodes=new int[3];
		this.citizens=new ArrayList<String>();
	}

	public City(String countryName, String countryCurrency, double countryPopulation,
							String stateName,String stateFood,double statePopulation,
							String cityName, int zipCode1, int zipCode2, int zipCode3){//Overloaded constructor
		super(countryName,countryCurrency,countryPopulation,stateName,stateFood,statePopulation);
		this.cityName=cityName;
		this.zipCodes=new int[3];
		this.zipCodes[0]=zipCode1;
		this.zipCodes[1]=zipCode2;
		this.zipCodes[2]=zipCode3;
		this.citizens = new ArrayList<String>();
	}

	//Proper getters and setters
	public void setCityName(String cityName){
		this.cityName = cityName;
	}

	public String getCityName(){
		return this.cityName;
	}
	public void setZipCode(int index, int zipCode){
		this.zipCodes[index] = zipCode;
	}

	public int getZipCode(int index){
		return this.zipCodes[index];
	}

	public int getZipCodesSize(){
		return this.zipCodes.length;
	}

	public void addCitizen(String citizen){
		this.citizens.add(citizen);
	}

	public String removeCitizen(int index){
		String removedCitizen = citizens.get(index).toString();
		citizens.remove(index);
		return removedCitizen;
	}

	public String getCitizen(int index){
		return citizens.get(index).toString();
	}

	public int getCitizenSize(){
		return citizens.size();
	}

	@Override
	public int crimeCount(int inhabitants) {
		return this.getCitizenSize()/2;
	}
}
