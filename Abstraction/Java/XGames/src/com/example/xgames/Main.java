package com.example.xgames;

public class Main {
    private static Skateboarding skateboarding = new Skateboarding(); //Create an object of the Skateboarding class

    public static void main (String[] args){
        skateboarding.SetSport("Skateboarding");
        skateboarding.SetSponsor("GIRL");
        skateboarding.AddParticipant("Tony Hawk");
        skateboarding.AddParticipant("Rob Dyrdek");

        String firstParticipation = skateboarding.GetParticipant(0);
        int firstScore = skateboarding.TopScore(firstParticipation);
        String secondParticipation = skateboarding.GetParticipant(1);
        int secondScore = skateboarding.TopScore(secondParticipation);
        System.out.println(firstParticipation +" has a score of: "+ firstScore);
        System.out.println(secondParticipation +" has a score of: "+ secondScore);
    }
}
