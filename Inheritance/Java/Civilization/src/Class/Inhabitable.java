package Class;

public interface Inhabitable {
	/*
	 *Objectives:
	 *	Create interface for 'City' and 'Autonomous zone'
	 * 	Create abstract method 'crimeCount()'
	 */

	//initialize the default static variables
	boolean safe = true;
	boolean warm = true;
	boolean food = true;

	public int crimeCount(int inhabitants);
}
