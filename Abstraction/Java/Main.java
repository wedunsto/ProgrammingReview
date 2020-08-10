class Main{
	private static Apartment apartment = new Apartment(3,2,true); //Calls the overloaded constructor for the Apartment class

	public static void main(String[] args){
		apartment.Welcome(); //Calls the Welcome method from the Apartment class
		int cost = apartment.Cost(); //Calls the Cost method from the Apartment class
		Integer rent_cost = new Integer(cost); 
		System.out.println("Rent costs: $"+Integer.toString(cost));
		int reduced_costs = apartment.CostDeduction(cost);
		boolean livable = apartment.Affordable(reduced_costs);
		if(livable == true){
			System.out.println("You can afford to live here.");
		}
		else{
			System.out.println("You cant afford to live here.");
		}
	}
}
