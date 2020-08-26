package Class;

public class Country {
    /*
    Objectives:
        Create super class 'Country'
        Detail a country's: name, currency, and population
     */

    private String countryName; //Contain the country's name
    private String countryCurrency; //Contain the country's currency
    private double countryPopulation; //Contain the country's population

    public Country(){ //Default constructor
        this.countryName = "";
        this.countryCurrency = "";
        this.countryPopulation = 0.00;
    }
    public Country(String countryName, String countryCurrency, double countryPopulation){ //Overloaded constructor
        this.countryName = countryName;
        this.countryCurrency = countryCurrency;
        this.countryPopulation = countryPopulation;
    }

    //Getters and setters for private class fields
    public void setCountryName(String countryName){
        this.countryName = countryName;
    }
    public void setCountryCurrency(String countryCurrency){
        this.countryCurrency = countryCurrency;
    }
    public void setCountryPopulation(double countryPopulation){
        this.countryPopulation = countryPopulation;
    }
    public String getCountryName(){
        return this.countryName;
    }
    public String getCountryCurrency(){
        return this.countryCurrency;
    }
    public double getCountryPopulation(){
        return this.countryPopulation;
    }
}
