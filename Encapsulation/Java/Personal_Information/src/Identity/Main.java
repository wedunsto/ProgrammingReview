package Identity;

public class Main {
    private static Person William_Dunston = new Person();

    public static void main(String[] args){
        William_Dunston.SetName("William Dunston");
        William_Dunston.SetSocialSecurity("000-00-0000"); //Social Security is write only
        William_Dunston.SetAddress("123 W. Ave."); //Address is write and read

        System.out.println("My name is: "+William_Dunston.GetName());
        System.out.println("My address is: "+William_Dunston.GetAddress());
        System.out.println("My income is: $"+William_Dunston.GetIncome()); //Income is read only
    }
}
