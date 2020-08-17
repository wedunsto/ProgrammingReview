package Identity;

public class Information {
    /*
    Show the power of encapsulation:
        social security is write only
        address is read write
        income is read only
        favorite color is inaccessible
    */

    private String social_security; //variable used to store the user's social security
    private String address; //variable used to store the user's address
    private double income; //variable used to store the user's income
    private String favorite_color; //variable used to store the user's favorite color

    public Information(){ //Default constructor
        this.social_security = " ";
        this.address = " ";
        this.income = 350.50;
        this.favorite_color = "Gray";
    }

    public Information(String social_security, String address){ //Overloaded constructor
        this.social_security = social_security;
        this.address = address;
        this.income = 300.50;
        this.favorite_color = "Gray";
    }

    public void SetSocialSecurity(String social_security){ //Social security setter
        this.social_security = social_security;
    }
    public void SetAddress(String address){ //Address setter
        this.address = address;
    }
    public String GetAddress(){ //Address getter
        return this.address;
    }
    public double GetIncome(){ //Income getter
        return this.income;
    }
}
