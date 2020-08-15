package com.example.xgames;

public class Skateboarding extends XGames{
    private String sponsor; //String variable to track of the Skateboarding sponsor

    public Skateboarding(){ //Default constructor
        super();
        this.sponsor = " ";
    }
    public Skateboarding(String sport, String sponsor){ //Create overloaded constructor
        super(sport);
        this.sponsor = sponsor;
    }

    @Override
    public int TopScore(String participant) { //Overridden method to calculate participant's score
        int score = 10 * participant.length();
        return score;
    }
    public void SetSponsor(String sponsor){ //Method to set the Skateboarding sponsor
        this.sponsor = sponsor;
    }
    public String GetSponsor(){ //Method to get the Skateboarding sponsor
        return this.sponsor;
    }
}
