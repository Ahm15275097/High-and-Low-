/*The computer will display a number between 1 and 10
The computer will ask whether the user if they think the next number will be higher or lower
The user will input either higher or lower
The computer will now generate another number at random again btween 1 and 10
The computer will display that new number
If the player has guesed correctly a message will be displayed "you win", if they haven't a message will be displayed "you lose"
If the the computer can't go higher or lower then a message will be displayed "it's a draw"*/

// These are the libraries set up to make the game run 

    #include <cstdlib> 
    #include <ctime> 
    #include <iostream>
    using namespace std;
    
// 



    void checkInput(string ch){
        if (ch == "h"){
          cout << "You have chosen higher \n";
        }

        else if (ch == "l"){
          cout << "You have chosen lower \n";
        }

        else {
          cout << "Please try again \n";
        }
    }
    char again = 'y';




    int main() {
  

      while (again == 'y'){ 

        srand(time(0)); 
        int firstNumber;
        firstNumber = (rand () % 10+1); 
        cout << " The first number is  "  << firstNumber << endl;

        cout << " Would you like to go higher or lower. \n h = higher and l = lower \n";
        string choice;
        cin >> choice;
        checkInput(choice);

        srand(time_t(rand()));
        int secondNumber;
        secondNumber = (rand () % 10+1);
        cout << " The second number is  " << secondNumber << endl;

        if (choice == "h"){
          if (secondNumber > firstNumber){
            cout << "You have won"; 
        }
   
           else if (secondNumber < firstNumber){
           cout << "You have lost";
           }
             else {
             cout << "its a draw";
             }
        }
        
        if (choice == "l"){
          if (secondNumber < firstNumber){
            cout << "You have won";
          }
          else if (secondNumber > firstNumber){
            cout << "You have lost";
          }
           else {
            cout << "its a draw";
           }
        }
        cout << " \n Would you like to go again y/n ";
        cin >> again;
      }
    
    return 0;




}

      
    

