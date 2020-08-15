package com.example.xgames;

import java.util.ArrayList;

abstract class XGames {
    //Objective: Create an abstract class to structure subclass extreme sports
    private String sport; //String variable to keep track of sport name
    private ArrayList participants; //ArrayList variable to keep track of sport participants

    public XGames(){ //Create default constructor
        this.sport = " ";
        this.participants = new ArrayList<>();
    }
    public XGames(String sport){ //Create overloaded default constructor
        this.sport = sport;
        this.participants = new ArrayList<>();
    }

    abstract public int TopScore(String participant); //Abstract method to be redefined in sub classes
    public void SetSport(String sport){ //Method to set the X-Games sport name
        this.sport = sport;
    }
    public String GetSport(){ //Method to get the X-Games sport name
        return this.sport;
    }
    public void AddParticipant(String participant){ //Method to add a participant's name to the list
        participants.add(participant);
    }
    public String GetParticipant(int position){ //Method to return the desired participant's name
        return participants.get(position).toString();
    }
    public int GetSize(){ //Method to return the number of X-Games participants
        return participants.size();
    }
    public String RemoveParticipant(int position){ //Method to remove participant's name from the X-Games
        String removed = participants.get(position).toString();
        participants.remove(position);
        return removed;
    }
}
