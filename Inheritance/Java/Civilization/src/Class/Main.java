package Class;

public class Main {
	public static Country USA = new Country("United States","USD",4.6);
	public static State WA = new State("United States", "USD", 4.6, "Washington", "Coffee", 1.5);

	public static void main(String[] args){
		System.out.println("The country is: "+USA.getCountryName()+" the currency is: "+USA.getCountryCurrency()+" the population is: "+Double.toString(USA.getCountryPopulation())+" billion");
		System.out.println("In the country: "+WA.getCountryName()+", the state is: "+WA.getStateName()+" the state is famous for: "+WA.getStateFood()+" the population is: "+
			Double.toString(WA.getStatePopulation())+" million");
	}
}
