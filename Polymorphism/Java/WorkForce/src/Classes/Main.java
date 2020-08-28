package Classes;

public class Main {
	public static Waiter oliveGarden=new Waiter();
	public static Waiter redLobster=new Waiter();
	public static OfficeJob lenovo=new OfficeJob();

	public static void main(String[] args){
		oliveGarden.setCountry("America");
		double usWages=oliveGarden.Salary(2,1);
		redLobster.setCountry("France");
		double euWages=redLobster.Salary(5);
		System.out.println("Living in: America, you can make "+usWages+". Whereas living in: France, you can make "+euWages);
		lenovo.setCompanyName("Lenovo");
		double offWages=lenovo.Salary(30);
		System.out.println("Working an office job can make you: "+offWages);
	}
}
