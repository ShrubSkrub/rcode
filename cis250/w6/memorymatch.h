class MemoryMatchGame{
    protected:
        string cards[50] = {"H", "He", "Li", "Be", "B", "C", "N", "O", "F", "Ne",
                            "Na", "Mg", "Al", "Si", "P", "S", "Cl", "Ar", "K", "Ca",
                            "Sc", "Ti", "V", "Cr", "Mn", "Fe", "Co", "Ni", "Cu", "Zn",
                            "Ga", "Ge", "As", "Se", "Br", "Kr", "Rb", "Sr", "Y", "Zr",
                            "Nb", "Mo", "Tc", "Ru", "Rh", "Pd", "Ag", "Cd", "In", "Sn"};
        string face = "E";  // Theme
        int diff = 0;  // Difficulty
        int time = 0;  // Game speed
        string *answerArr;
        int *displayArr;
        int input;  // Temp for all needed cin
        int arrSize = 0;
    public:
        MemoryMatchGame(){
            answerArr = new string[8][8];
        }
        void difficulty(){
            cout << "Choose difficulty:\n4 x 4 grid (Easy)\n6 x 6 grid (Moderate)\n";
            cout << "8 x 8 grid (Difficult)\n";
            cin >> input;
            // Add check for valid input
            // string answerArr[input][input] = { };
            // string displayArr[input][input] = { face };
            // TODO Make dynamic array belonging to class

            arrSize = input;
        }
        void dealCards(){
            // Create array's size
            // Shuffle cards array
            for (int i = 0; i < 50; i++){
                int r = rand() % 50;
                string temp = cards[i];
                cards[i] = cards[r];
                cards[r] = temp;
            }

            // Deal CARDS INTo answer array
            int cardCount = 0;
            for (int i = 0; i < input; i++){
                for (int j = 0; j < input; j++){
                    // answerArr[i][j] = cards[cardCount];
                    cardCount++;
                }
            }
        }
        void speed(){
            cout << "Choose time interval:\n6 secs (Easy)\n4 secs (Moderate)\n";
            cout << "2 secs (Difficult)\n";
            cin >> input;
            // Add check for valid input
            time = input;
        }
        void display(){
        }



        void start(){
        }



        // Old, possibly useful functions
        void printArr(int arr[8][8]) {
            cout << "\n[ ][1][2][3][4][5][6][7][8]\n";
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
                    cout << arr[i][j];
                    cout << "]";
                }
                cout << endl;
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

        bool isNumber(int in) {
            if (in < 0) {
                return true;
            } else {
                return false;
            }
        }

        void chooseCells(int arr[8][8]) {
            char letter, yn;
            int number = 10, letterNum = 10;
            while (true) {
                for (int i = 0; i < 8; i++) {
                    letterNum = 10;
                    while (letterNum == 10) {
                        cout << "Enter cell " << (i + 1) << " (ie. H8): ";
                        cin >> letter >> number;
                        letterNum = convCharToNum(letter);
                    }
                    arr[letterNum][number - 1] = 1;
                }
                printArr(arr);
                cout << "Is this correct? (y or n): ";
                while (true) {
                    cin >> yn;

                    if (yn == 'y') {
                        break;
                    } else if (yn == 'n') {
                        break;
                    } else {
                        cout << "Not y or n. Try again.\n";
                    }
                }
                if (yn == 'y') {
                    break;
                }
                system("clear");
            }
            system("clear");
        }

        void pickCell(int arr[8][8]) {
            char letter;
            int number, letterNum, loop = 0, loop1 = 0;
            while (loop1 == 0) {
                while (loop == 0) {
                    cout << "Enter cell (ie. H8): ";
                    cin >> letter >> number;
                    letterNum = convCharToNum(letter);
                    if (arr[letterNum][number - 1] == 1) {
                        cout << "You guessed correctly, go again!\n";
                        arr[letterNum][number - 1] = 0;
                    } else if (arr[letterNum][number - 1] == 2) {
                        cout << "You already guessed this one.\n";
                        loop = 1;
                        loop1 = 1;
                    } else {
                        cout << "You guessed incorrectly...\n";
                        loop = 1;
                        loop1 = 1;
                    }
                }
            }
        }

};
