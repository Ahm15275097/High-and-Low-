 # l. Initiative 
A computer will give the user a number, the user will guess if the number after will be higher or lower than the previous. If the user guesses correctly, the user wins. 



 # ll. Epics and User Stories
 
 
 Epics
 
 
- The computer will display a number between 1 and 10 
- The computer will ask whether the user if they think the next number will be higher or lower
- The user will input either higher or lower
- The computer will now generate another number at random again btween 1 and 10 
- The computer will display that new number
- If the player has guesed correctly a message will be displayed "you win", if they haven't a message will be displayed "you lose"
- If the the computer can't go higher or lower then a message will be displayed "it's a draw"


Non-Functional Requirements
- A message can be stated after the game to ask the player if they would like to play again.
- The screen can be cleared once the result has appeared if the user has selected the option where they would like to play again.


User Stories


- (1) As a player I would like to see what number the computer has picked
- (2) As a player I would like to choose if the next number is higher or lower
- (3) As a player I would like to see the next number that is displayed
- (4) As a player I would like to see a message to tell me if I have won or lost 
- (5) As a player I would like to see a message asking me if I would like to play again
- (6) As a player I would like to see a score function, stating how many times i have guessed correctly and how many times i have guessed incorrectly

After looking at all the requirements, priority was given to the ones which the most difficult and therefore required more time.  


# lll. Genre
A simple guessing game

# lV. Technical Details


**Platform**
The website https://repl.it/ was used in the creation of this game. This is an online programming environment where the user can write code very easily. As this was an IDE this was very helpful because it helps make developing very fast, it helps the developer by giving them shortcuts and stops mistakes from happening.
![IDE](https://i.imgur.com/ePeDgWo.png)

**Programming Language/Environment**
C++


**Programming Challenges**
- The main challenge I faced was how the computer can generate a random number
- Another challenge was how could generate two different random numbers


**Constructing And Implementing My Code Think of this as the method. How will you go about building your program?**


The first thing that is needed to be thought about is how to implement the random numbers. Some research was needed to be done and then the code would be written to allow this to happen. After, a string would need to be created to allow the user to input their choice Then, the while loop would be created to allow the user to play again.


Algorithms

The first algorithm in my program is to do with the random numbers. The first number is shown and user selects higher or lower based on what number is displayed. Then the user will be asked if they would like to go higher or lower. After their input is processed the second random number is generated. If the user guesses correctly they win but if they haven't they lose, an alternative outcome could be that both numbers are the same, in this case it will be a draw. Lastly, the user will be asked if they would like to play again. 

Coding Standards

- In this program all the curly brackets are opened at the same place
- All the code is indented the same 
- Obvious comments were avoided 


# How the IDE helped manage the development process of the program


The IDE which was used to help create this program was https://repl.it/. This was such a great tool because it made writing code more efficient and much easier. 

One of the features in the IDE that helped greatly, was the use of syntax highlighting. This made writing the code easier as all the code were in different colours according to which category they were in. Syntax highlighting found errors while the code was being written, the made writing code much faster as compilation didn't have to be done before finding a syntax error.

Another feature that an IDE, such as https://repl.it/, supplies is the use of an internal compiler. This made testing the code so much simpler. If the code was written in a text editor such as notepad, which isn't an IDE, the code would have had to be taken to a seperate compiler to be tested. This would have been very time consuming. As this made testing much easier, more frequent tests could be done therefor making the application more secure.

The debugging process was made easier by the use of this IDE as it gave a command straight away when something went wrong, this allowed the problem to be acessed and solved efficiently.  




# V. Research

https://www.w3schools.com/. 


# VI. Project Management


![Burndown](https://i.imgur.com/4EljmRf.png)



![User Stories tracking Chart](https://i.imgur.com/zdacKKz.png)


Flowchart


![Flowchart](https://i.imgur.com/qjTRYkp.png)



Functions


The computer will generate a random number. This number will be between 1 and 10: 

    srand(time(0));
    int firstNumber;
    firstNumber = (rand () % 10+1);


It will display this number:
    
    cout << " The first number is  "  << firstNumber << endl;
    
It will get input from the user:
    
        cout << " Would you like to go higher or lower. \n h = higher and l = lower \n";
        string choice;
        cin >> choice;
        checkInput(choice);
        
The second random number will be generated:
        
        srand(time_t(rand()));
        int secondNumber;
        secondNumber = (rand () % 10+1);

Again, this will be displayed:
        
        cout << " The second number is  " << secondNumber << endl;
        
Then the result will be displayed, If the user has chosen higher one of three results can be displayed:        
        
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
However, if the user has chosen lower one of these three results can be displayed:
        
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
 Lastly the user will be asked if they would like to play again.
        

Evaluation 
While creating the program I realised that this was the easiest program that I had to create. I fully understood what was asked from me and the steps which I would take to complete it. There was a small issue of generating different random numbers but once I had figured out how to do this, the rest of the project was straightforward. I enjoyed creating this program because I didnt require much help and improved my knowlege of c++.






