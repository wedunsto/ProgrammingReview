interface Tenants{
	//Objective: Provide requirements for the tenants of the home
	int budget = 200; //Keep track of how much the tenants are able to spend on housing
	
	abstract public CostDeduction(int cost); //Determine how much the cost of living can be reduced
	boolean public Affordable(int cost){ //Determine if the tenants can afford to live in their housing
		boolean is_affordable = false; //declare and initialize result as false
		if(cost < budget){ //If the budget is bigger than the cost
			is_affordable = true; //the housing is affordable
		}
		return is_affordable;
	}
}
