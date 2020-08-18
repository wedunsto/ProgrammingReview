package Identity;

public class Person extends Information{
    private String name; //Variable used to keep to keep track of the person's name

    public Person(){ //Default constructor
        super();
        name = " ";
    }
    public Person(String social_security, String address, String name){ //Overloaded constructor
        super(social_security,address);
        this.name = name;
    }

    public void SetName(String name){ //Name setter
        this.name = name;
    }
    public String GetName(){ //Name getter
        return this.name;
    }
}
