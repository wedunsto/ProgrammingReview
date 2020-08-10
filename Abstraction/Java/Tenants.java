interface Tenants{
	//Objective: Provide requirements for the tenants of the home
	int budget = 200; //Keep track of how much the tenants are able to spend on housing
	
	abstract public int CostDeduction(int cost); //Determine how much the cost of living can be reduced
}
