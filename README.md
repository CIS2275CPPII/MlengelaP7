# Black Jack Game

Yay!  You get to write a game simulation, of a sort.  There will be five classes and, of course, your form, which will also contain the MyForm.h class.  Here is an example of my initial form:

<img width="803" height="609" alt="image" src="https://github.com/user-attachments/assets/704cfc8c-01fe-431c-af82-7a9dd439f574" />

There is a menu strip on the form with a single item, Rules of the Game.  The play begins when the player enters a bet and presses the "Place Bet" button. Once the bet is made, the initial hand is dealt, the Hit or Stay buttons are made visible, and there is no more betting:

The player has the option of hitting until they bust or choosing to stay.  Each time the player hits, the **Player’s Hand** Text Box is updated.  When the player stays, the dealer plays their hand.  The dealer’s hidden card is shown, and each time the dealer hits, the **Dealer’s Hand** Text Box is updated.  When the dealer either busts or stops because his points are 17 or over, the game is evaluated as to who won.  The winner is announced in the Game Status textbox.  There is an opportunity to Play Again by pressing that button.  The game keeps track of the money held by the player.</br>

There will be five classes to make up this game:
1.	**Card.h** The card class is used to translate the integer value of cards, maintained by objects of the deck class, into objects of type string.  It declares **three private variables**, </br>
    - a.	int iValue;  //numeric value corresponding to the card
    - b.	string value;  //"Ace" "2" through "9", "Ten", "Jack", "Queen", "King."
    - c.	 string suit;  //"S", "H", "C", "D."</br>
      The iValue variable is used to keep track of the number of points associated with a card.  
      The value variable references a text string that is used to describe the face value of a card.
      The suit variable is used to identify the suit of a card.

    There is a default constructor and an <ins>overloaded constructor</ins>:  public Card(int n) {…}, which is the heart of the card class.  It receives a value of 0 through 51 from the Deck class.  Card() first determines the suit of the Card identified by the n
  	parameter by  dividing by 13 and assigning the result to a local integer named iSuit.  It determines the point value of the card as iValue = n%13 + 1.  This value is further adjusted for the face cards by stating that if iValue > 10, iValue = 10.

    Card () then uses a switch to assign the correct text to the suit variable by comparing the iSuit value to the values identified in each of the four case labels (0-3).  It then uses another switch to assign the string variable values to each card.  That is, if
  	iValue == 1, value = "Ace", and if iValue == 13, value = “King”, etc for the face cards, and for the number cards, value = the string representation of iValue.  You may use stringstream to convert from int to string or use to_string.

    When completed, the playing cards should be mapped as follows:</br>
     - 0 – 12    Ace of Spades through the King of Spades
     - 13 – 25  Ace of Hearts through the King of Hearts
     - 26 – 38  Ace of Clubs through the King of Clubs
     - 39 – 51  Ace of Diamonds through the King of Diamonds

    There are **four public class methods:**
     - a.	void SetIValue(int val){iValue = val;}	
     - b.	string GetValue(){ return value;}
     - c.	int GetIValue(){return iValue;}
     - d.	string GetSuit(){return suit;}
       
 2.	**Deck.h**  The Deck class declares **three private class members** :
     - a.	array <int, 52>  cards;	//array of 52 cards
     - b.	int topCard;	//0-51, index of the next card to be dealt
     - c.	default_random_engine engine;	//Creates an object of the random engine 
   The **constructor** is default.  It seeds the random engine object, then initializes the cards[] array from 0 to 51.  topCard is initialized at 0, and the method Shuffle() is called.</br>
   
   There are **three public class methods**:</br>
   
   

