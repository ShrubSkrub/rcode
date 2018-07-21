class MemoryMatchGame{
    protected:
        string cards[50] = {"H ", "He", "Li", "Be", "B ", "C ", "N ", "O ", "F ", "Ne",
                            "Na", "Mg", "Al", "Si", "P ", "S ", "Cl", "Ar", "K ", "Ca",
                            "Sc", "Ti", "V ", "Cr", "Mn", "Fe", "Co", "Ni", "Cu", "Zn",
                            "Ga", "Ge", "As", "Se", "Br", "Kr", "Rb", "Sr", "Y ", "Zr",
                            "Nb", "Mo", "Tc", "Ru", "Rh", "Pd", "Ag", "Cd", "In", "Sn"};
        string face = "E ";  // Theme
        int diff = 0;  // Difficulty
        int gameSpeed = 0;  // Game speed
        string answerArr[8][8];  // Holds answers
        string displayArr[8][8];  // What is shown to the user
        int input;  // Temp for all needed cin
        int arrSize = 0;  // Set during difficulty, limits function which act on array
        int neededTerms = 0;  // Used in setting array size, is also number of pairs needed
        bool gameRunning = true;  // Used to keep game running, or stop it
        int pairs = 0;  // Tracks how many pairs have been found
    public:
        void difficulty(){
            cout << "Choose difficulty:\n4 x 4 grid (Easy)\n6 x 6 grid (Moderate)\n";
            cout << "8 x 8 grid (Difficult)\n    - Input 4, 6, or 8 -\n";
            // Check for valid input
            bool temp1 = true;
            while (temp1) {
                cin >> input;
                switch (input) {
                    case 8:
                        pairs = 32;
                        temp1 = false;
                        neededTerms = 32;
                        break;
                    case 6:
                        pairs = 18;
                        temp1 = false;
                        neededTerms = 18;
                        break;
                    case 4:
                        pairs = 8;
                        temp1 = false;
                        neededTerms = 8;
                        break;
                    default:
                        cout << "Not a valid option. Try again.\n";
                        break;
                }
            }
            arrSize = input;
            // Fill arrays based on input from user
            for (int i = 0; i < input; i++){
                for (int j = 0; j < input; j++){
                    answerArr[i][j] = "  ";
                    displayArr[i][j] = "E ";
                }
            }
        }
        void dealCards(){
            cout << "Dealing cards...\n";
            // Shuffle cards array
            cout << "Shuffling cards array...\n";
            for (int i = 0; i < 50; i++){
                int r = rand() % 50;
                string temp = cards[i];
                cards[i] = cards[r];
                cards[r] = temp;
            }
            // Deal CARDS into temp array
            // Cards need to be input twice
            cout << "Dealing pairs into tempArr..." << endl;
            int cardCount = 0;  // Kind of like the number of the card or INDEX?
            string tempArr[(neededTerms * 2)];

            for (int i = 0; i < (neededTerms * 2); i++){
                tempArr[i] = cards[cardCount];
                i++;
                tempArr[i] = cards[cardCount];
                cardCount++;
            }
            // Shuffle temp array
            cout << "Shuffling temp array...\n";
            for (int x = 0; x < 3; x++){
                for (int i = 0; i < (neededTerms * 2); i++){
                    int r = rand() % input;
                    string temp = tempArr[i];
                    tempArr[i] = tempArr[r];
                    tempArr[r] = temp;
                }
            }
            // Deal CARDS into answer array
            cardCount = 0;
            for (int i = 0; i < arrSize; i++){
                for (int j = 0; j < arrSize; j++){
                    answerArr[i][j] = tempArr[cardCount];
                    cardCount++;
                }
            }
        }
        void speed(){
            system("clear");
            cout << "Choose time interval:\n6 secs (Easy)\n4 secs (Moderate)\n";
            cout << "2 secs (Difficult)\n    - Input 6, 4, or 2 -\n";
            // Check for valid input
            bool temp1 = true;
            while (temp1) {
                cin >> input;
                switch (input) {
                    case 6:
                    case 4:
                    case 2:
                        temp1 = false;
                        break;
                    default:
                        cout << "Not a valid option. Try again.\n";
                        break;
                }
            }
            gameSpeed = input;
        }
        void pickSquares(){
            system("clear");
            pairs = 0;
            char letter, letter2;
            int number, letterNum, number2, letterNum2, loop = 0;
            string pick1, pick2;
            while (loop == 0) {
                cout << "Pairs found: " << pairs << "/" << neededTerms << endl;
                printArr();
                // Select square 1
                cout << "Enter first card (ie. H8): ";
                cin >> letter >> number;
                letterNum = convCharToNum(letter);
                pick1 = answerArr[letterNum][number - 1];
                displayArr[letterNum][number - 1] = answerArr[letterNum][number - 1];
                printArr();
                // Select square 2
                cout << "Enter second card (ie. H8): ";
                cin >> letter2 >> number2;
                letterNum2 = convCharToNum(letter2);
                pick2 = answerArr[letterNum2][number2 - 1];
                displayArr[letterNum2][number2 - 1] = answerArr[letterNum2][number2 - 1];
                printArr();
                // Check for match
                if (pick1 == pick2) {
                    cout << "It's a match!\n";
                    pairs++;
                    if (pairs == neededTerms) {
                        cout << "You win!\n";
                        loop = 1;
                    }
                    sleep(2);
                } else {
                    cout << "No match...\n";
                    displayArr[letterNum][number - 1] = "E ";
                    displayArr[letterNum2][number2 - 1] = "E ";
                    switch (gameSpeed) {
                        case 6:
                            sleep(6);
                            break;
                        case 4:
                            sleep(4);
                            break;
                        case 2:
                            sleep(2);
                            break;
                    }
                }
                system("clear");
            }
        }
        void printArr() {
            switch (arrSize) {
                case 8:
                    cout << "\n[ ][1 ][2 ][3 ][4 ][5 ][6 ][7 ][8 ]\n";
                    for (int i = 0; i < 8; i++) {
                        switch (i) {
                            case 0:
                                cout << "[A]";
                                break;
                            case 1:
                                cout << "[B]";
                                break;
                            case 2:
                                cout << "[C]";
                                break;
                            case 3:
                                cout << "[D]";
                                break;
                            case 4:
                                cout << "[E]";
                                break;
                            case 5:
                                cout << "[F]";
                                break;
                            case 6:
                                cout << "[G]";
                                break;
                            case 7:
                                cout << "[H]";
                                break;
                        }
                        for (int j = 0; j < 8; j++) {
                            cout << "[";
                            cout << displayArr[i][j];
                            cout << "]";
                        }
                        cout << endl;
                    }
                    break;
                case 6:
                    cout << "\n[ ][1 ][2 ][3 ][4 ][5 ][6 ]\n";
                    for (int i = 0; i < 6; i++) {
                        switch (i) {
                            case 0:
                                cout << "[A]";
                                break;
                            case 1:
                                cout << "[B]";
                                break;
                            case 2:
                                cout << "[C]";
                                break;
                            case 3:
                                cout << "[D]";
                                break;
                            case 4:
                                cout << "[E]";
                                break;
                            case 5:
                                cout << "[F]";
                                break;
                        }
                        for (int j = 0; j < 6; j++) {
                            cout << "[";
                            cout << displayArr[i][j];
                            cout << "]";
                        }
                        cout << endl;
                    }
                    break;
                case 4:
                    cout << "\n[ ][1 ][2 ][3 ][4 ]\n";
                    for (int i = 0; i < 4; i++) {
                        switch (i) {
                            case 0:
                                cout << "[A]";
                                break;
                            case 1:
                                cout << "[B]";
                                break;
                            case 2:
                                cout << "[C]";
                                break;
                            case 3:
                                cout << "[D]";
                                break;
                        }
                        for (int j = 0; j < 4; j++) {
                            cout << "[";
                            cout << displayArr[i][j];
                            cout << "]";
                        }
                        cout << endl;
                    }
                    break;
            }
        }
        int convCharToNum(char input) {
            int letterNum;
            switch (input) {
                case 'A':
                case 'a':
                    letterNum = 0;
                    break;
                case 'B':
                case 'b':
                    letterNum = 1;
                    break;
                case 'C':
                case 'c':
                    letterNum = 2;
                    break;
                case 'D':
                case 'd':
                    letterNum = 3;
                    break;
                case 'E':
                case 'e':
                    letterNum = 4;
                    break;
                case 'F':
                case 'f':
                    letterNum = 5;
                    break;
                case 'G':
                case 'g':
                    letterNum = 6;
                    break;
                case 'H':
                case 'h':
                    letterNum = 7;
                    break;
                default:
                    cout << "Error, not valid input\n";
                    letterNum = 10;
            }
            return letterNum;
        }
        void start(){
            system("clear");
            srand(time(0));
            cout << rand() << endl;
            cout << "Welcome to Memory Match!\n\n";
            difficulty();
            cout << "\n====================\n";
            speed();
            cout << "\n====================\n";
            system("clear");
            dealCards();
            pickSquares();
        }
};
