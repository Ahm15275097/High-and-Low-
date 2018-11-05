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
    
// This section of code allows the user to chose higher or lower 



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
    // This line of code or the while loop
    char again = 'y';




    int main() {
  
        
      // This is the while loop  
      while (again == 'y'){ 
          
        // Generating the random number between 1 and 10   

        srand(time(0));                                                              
        int firstNumber;
        firstNumber = (rand () % 10+1); 
        cout << " The first number is  "  << firstNumber << endl;
          
        // Allowing the user to input higher or lower 

        cout << " Would you like to go higher or lower. \n h = higher and l = lower \n";
        string choice;
        cin >> choice;
        checkInput(choice);
          
        // Generating the second number between 1 and 10

        srand(time_t(rand()));
        int secondNumber;
        secondNumber = (rand () % 10+1);
        cout << " The second number is  " << secondNumber << endl;
          
        // The results oof each scenario if the user's choice is higher   

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
          
         // The results oof each scenario if the user's choice is lower  

        
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
        // Asking the user if they would like to play again 
        cout << " \n Would you like to go again y/n ";
        cin >> again;
      }
    
    return 0;




}

      
    

