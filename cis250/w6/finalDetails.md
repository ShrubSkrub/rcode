

**Final Project  - Memory Matching Game – Text Based Game**

**Requirements**

- **** Create a **class**&#39;MemoryMatchGame&#39;, with the various variables, arrays and functions need to play the game..

Select a Theme and have 50 words associated with it. (MAX individual word length is 8 characters)

 Words must have a common theme - your choice

Examples: Like Periodic Table Elements, or Sports teams, or Types of cars…

Hint:  load into a single dim array of string in class

Have one Term describing category you picked. This is the FACE term…

Menu User Interaction:

- **** Level of Play – Use selects at start of game

 4 x 4 grid (Easy)

 6 x 6 grid (Moderate)

 8 X 8 grid (Difficult)

 Hint: Save as a variable in the class

- **** Speed  of Play – At start of game, User selects time interval for clicked-on term-pair to display

 2 seconds  (Difficult)

 4 seconds (Moderate)

 6 seconds (Easy)

 Hint: Save as a variable in the class

- **** Optional feature (have more than one theme – User would select theme)

Next, _Populate answer Grid with randomly selected Terms from the theme array_

- **** _At start of game – program places the same face/theme term in_ **all** _squares in the visible grid_

_Answers not visible, only theme name is displayed in all squares, at start of game._

- **** _Program select # of random term from the 50 for selected theme_

_If 4 x 4 grid, randomly pick 8 terms, place each image name_ **twice** _in 2-Dim array._

_If 6 x 6 grid, randomly pick 18 terns, place each image name_ **twice** _in 2-Dim array._

_If 8 x 8 grid, randomly pick 32 terms, place each image name_ **twice** _in 2-Dim array._

_Hint: Randomly shuffle theme array and just pick the first 8, or 18 or 32 terms per game player selection_

_Next,_ **display** _the current game state on screen._

_        Note:  &#39;Answer&#39; array is different from &#39;display&#39; array_

_During the course of play, the face/theme term in the display grid is replaced by a_

_    corresponding array  terms,  when user selects a grid square_

_Decide on how the user select/chooses a square/cell/location that is displayed… there many different methods.._

_Game Play_

1. 1)_User selects a FIRST square, the theme/face term  in the grid square is replace with correspond stored term, from the 2-dim answer array_
2. 2)_User selects a SECOND square, the term theme/face in the second grid square is replace with the corresponding stored term, from the 2-dim answer array_
3. 3)_The computer compares the terms for the two selected squares._

_If they are the same, the terms remain on the screen and can_ **no** _longer be selected._

_If they are different, the term remain the screen for 2, 4 or 6 seconds, depending on user selection at the beginning of the game.  After that elapse time, those two grid terms are replaced with the face/theme term._

_=====================================_

_The class you write_

_         A class consists of variables/arrays and functions._

_All your variables/arrays and functions are to be encapsulated inside the Memory Match game_

_class you write._

_The class will use 1 and 2 dimensional arrays_

_The class will have several variables_

_The class will have several functions – clearly named_

_There will be NO GLOBAL VARIABLES/Arrays or functions declared above int main().  All variables_

_and arrays and functions will be ENCAPSULATED in the class._

_The int main() in your code contain only two lines of code::_

_        #include iostream;_

_        using namespace std;_

_        #include string;_

_        #include MemoryMatchGame;_

_Int main() {_

_      MemoryMatchGame  Game1;  // first line - declare instance of game_

_      Game1.start();                            // second line - start game_

_}_

_Timer (Extra credit)  - Create/display a timer that keep track of the number of seconds it took to win a game._

**Due Saturday July 22.**

_To receive the most credit, this project must be functional._

