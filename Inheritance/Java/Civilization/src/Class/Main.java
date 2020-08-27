package Class;

public class Main {
	public static Country USA = new Country("United States","USD",4.6);
	public static State WA = new State("United States", "USD", 4.6, "Washington", "Coffee", 1.5);
	public static City SJ = new City("United States","USD",4.6,
																				"California","Avocado Toast",7.8,
																				"SanJose",11111,11211,22322);
	public static City test = new City();
	public static void main(String[] args){
		System.out.println("The country is: "+USA.getCountryName()+" the currency is: "+USA.getCountryCurrency()+" the population is: "+Double.toString(USA.getCountryPopulation())+" billion");
		System.out.println("In the country: "+WA.getCountryName()+", the state is: "+WA.getStateName()+" the state is famous for: "+WA.getStateFood()+" the population is: "+
			Double.toString(WA.getStatePopulation())+" million");
		SJ.addCitizen("William Dunston");
		SJ.addCitizen("Shiroe Kagi");
		System.out.println("In the state: "+SJ.getStateName()+" the city is: "+SJ.getCityName());
		for(int i=0;i<SJ.getZipCodesSize();i++){
			System.out.println("The zip code is: "+Integer.toString(SJ.getZipCode(i)));
		}
		for(int j=0;j<SJ.getCitizenSize();j++){
			System.out.println("The citizens include: "+SJ.getCitizen(j));
		}
	}
}
