
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;



class Account{
    private:
        string firstName;
        string lastName;
        string username;
        string password;
        
        int purpose;
        int ID;
    public:
        Account(string fn, string ln, string u, string pass, int p, int id){
            firstName = fn;
            lastName = ln;
            username = u;
            password = pass;
            
            purpose = p;
            ID = id;
        }
        
        string getFirstName(){
            return firstName;
        }
        
        string getLastName(){
            return lastName;
        }
        
        string getUsername(){
            return username;
        }
        
        string getPassword(){
            return password;
        }
        
        string getPurpose(){
            switch(purpose){
                case 1:
                    return "[Personal]";
                case 2:
                    return "[Business]";
                case 3:
                    return "[School]";
                default: 
                    return "[N/A]";
            }
        }
        
        int getID(){
            return ID;
        }
};

vector<Account> accounts;

void printWelcome(){
    cout << R"(
                     __    __     _                            _                               
                    / / /\ \ \___| | ___ ___  _ __ ___   ___  | |_ ___                         
 _____ _____ _____  \ \/  \/ / _ \ |/ __/ _ \| '_ ` _ \ / _ \ | __/ _ \   _____ _____ _____    
|_____|_____|_____|  \  /\  /  __/ | (_| (_) | | | | | |  __/ | || (_) | |_____|_____|_____|   
                      \/  \/ \___|_|\___\___/|_| |_| |_|\___|  \__\___/                        
                                                                                               
                     _   __    __  ___      _              __                                  
                    | |_/ / /\ \ \/___\___ | |_ ___ _ __   \ \                                 
 _____ _____ _____  | __\ \/  \/ //  // _ \| __/ _ \ '__| (_) |  _____ _____ _____ _____ _____ 
|_____|_____|_____| | |_ \  /\  / \_// (_) | ||  __/ |     _| | |_____|_____|_____|_____|_____|
                     \__| \/  \/\___/ \___/ \__\___|_|    (_) |                                
                                                           /_/                                 
    )" << "\n";
}

void printGoodbye(){
    cout << R"(
                                                                                                              
        ,--.   ,--.,--.                     ,--.,--.   ,--.        ,--.  ,--.                                 
        |  |   |  ||  ,---. ,--. ,--.     ,-|  |`--' ,-|  |,--,--, |  |,-'  '-.    ,--. ,--.,---. ,--.,--.    
        |  |.'.|  ||  .-.  | \  '  /     ' .-. |,--.' .-. ||      \`-' '-.  .-'     \  '  /| .-. ||  ||  |    
        |   ,'.   ||  | |  |  \   '      \ `-' ||  |\ `-' ||  ||  |      |  |        \   ' ' '-' ''  ''  '    
        '--'   '--'`--' `--'.-'  /        `---' `--' `---' `--''--'      `--'      .-'  /   `---'  `----'     
        ,--.                `---'                                                  `---'                      
        |  | ,---.  ,--,--.,--.  ,--.,---.      ,---.  ,---.  ,---. ,--,--,  ,---. ,--.--.                    
        |  || .-. :' ,-.  | \  `'  /| .-. :    (  .-' | .-. || .-. ||      \| .-. :|  .--'                    
        |  |\   --.\ '-'  |  \    / \   --.    .-'  `)' '-' '' '-' '|  ||  |\   --.|  |.--..--..--.           
        `--' `----' `--`--'   `--'   `----'    `----'  `---'  `---' `--''--' `----'`--''--''--''--'           
                                                                                                              
    )" << "\n";
}

void printLogout(){
    cout << R"(
                                                                                          
        ,------. ,--.                                  ,--.               ,--.  ,--.      
        |  .--. '|  |,---.  ,--,--. ,---. ,---.      ,-|  | ,---. ,--,--, |  |,-'  '-.    
        |  '--' ||  | .-. :' ,-.  |(  .-'| .-. :    ' .-. || .-. ||      \`-' '-.  .-'    
        |  | --' |  \   --.\ '-'  |.-'  `)   --.    \ `-' |' '-' '|  ||  |      |  |      
        `--'     `--'`----' `--`--'`----' `----'     `---'  `---' `--''--'      `--'      
                                         ,--.               ,--.                          
         ,---. ,---. ,--,--,--.,---.     |  |-. ,--,--.,---.|  |,-.                       
        | .--'| .-. ||        | .-. :    | .-. ' ,-.  | .--'|     /                       
        \ `--.' '-' '|  |  |  \   --.    | `-' \ '-'  \ `--.|  \  \.--.--.--.             
         `---' `---' `--`--`--'`----'     `---' `--`--'`---'`--'`--'--'--'--'             
                                                                                          
    )" << "\n";
}

void printHome(){
    cout << R"(
                         _    _                                             
                        | |  | |                                            
  ______ ______ ______  | |__| | ___  _ __ ___   ___   ______ ______ ______ 
 |______|______|______| |  __  |/ _ \| '_ ` _ \ / _ \ |______|______|______|
                        | |  | | (_) | | | | | |  __/                       
                        |_|  |_|\___/|_| |_| |_|\___|                       
                                                                            
    )" << "\n";
}

void printSignup(){
    cout << R"(
                          _____ _               _    _                              
                         / ____(_)             | |  | |                             
  ______ ______ ______  | (___  _  __ _ _ __   | |  | |_ __    ______ ______ ______ 
 |______|______|______|  \___ \| |/ _` | '_ \  | |  | | '_ \  |______|______|______|
                         ____) | | (_| | | | | | |__| | |_) |                       
                        |_____/|_|\__, |_| |_|  \____/| .__/                        
                                   __/ |              | |                           
                                  |___/               |_|                                                                                          
    )" << "\n";
}

void printLogin(){
    cout << R"(
                         _                 _                              
                        | |               (_)                             
  ______ ______ ______  | |     ___   __ _ _ _ __    ______ ______ ______ 
 |______|______|______| | |    / _ \ / _` | | '_ \  |______|______|______|
                        | |___| (_) | (_| | | | | |                       
                        |______\___/ \__, |_|_| |_|                       
                                      __/ |                               
                                     |___/                                                                                                     
    )" << "\n";
}

void printUserFeed(){
    cout << R"(
                        __     __                ______            _                        
                        \ \   / /               |  ____|          | |                       
  ______ ______ ______   \ \_/ /__  _   _ _ __  | |__ ___  ___  __| |  ______ ______ ______ 
 |______|______|______|   \   / _ \| | | | '__| |  __/ _ \/ _ \/ _` | |______|______|______|
                           | | (_) | |_| | |    | | |  __/  __/ (_| |                       
                           |_|\___/ \__,_|_|    |_|  \___|\___|\__,_|                       
                                                                                            
                                                                                                                                                                                 
    )" << "\n";
}

void printAbout(){
    cout << R"(
                                  _                 _                          
                            /\   | |               | |                         
  ______ ______ ______     /  \  | |__   ___  _   _| |_   ______ ______ ______ 
 |______|______|______|   / /\ \ | '_ \ / _ \| | | | __| |______|______|______|
                         / ____ \| |_) | (_) | |_| | |_                        
                        /_/    \_\_.__/ \___/ \__,_|\__|                       
                                                                               
                                                                                                                                                                             
    )" << "\n";
}

void printAccountInfo(){
    cout << R"(
                                                           _     _____        __                             
                            /\                            | |   |_   _|      / _|                            
  ______ ______ ______     /  \   ___ ___ ___  _   _ _ __ | |_    | |  _ __ | |_ ___    ______ ______ ______ 
 |______|______|______|   / /\ \ / __/ __/ _ \| | | | '_ \| __|   | | | '_ \|  _/ _ \  |______|______|______|
                         / ____ \ (_| (_| (_) | |_| | | | | |_   _| |_| | | | || (_) |                       
                        /_/    \_\___\___\___/ \__,_|_| |_|\__| |_____|_| |_|_| \___/                        
                                                                                                             
    )" << "\n";
}

void twoot(string username){
    
    string text;
    
    while(true){
        cout << "\ntWOot sOmEThiNg: ";
        
        cin.ignore();
        getline(cin, text);
        
        int retwoots = rand() % 100;
        int likes = rand() % 100;
        
        cout << username << " tWOoted: " << text << "\n";
        cout << "This tWOot generated " << retwoots << " retWOots!\n";
        cout << "This tWOot got " << likes << " likes!";
        
        char confirm;
        
        cout << "\nDo you wish to continue twooting? Enter [x] if you wish to go back to user feed. \n";
        cin >> confirm;
        
        if(confirm == 'x'){
            break;
        }
    }
}

void about(){
    printAbout();
    cout << "\n\n Welcome to tWOoter where our motto is: \"Abandon all hope, ye who enter here.\" \n\n";
    
    cout << "Here, you'll be able hear opinions from people all over the globe. \n";
    cout << "In tWOoter, you will be able to witness the sheer stupidity of the human race and wonder, \"How the hell are these people allowed to live?\'\n";
    cout << "Helping others lose their faith in humanity has never been easier! Just sign up, log in, and tWOot away!\n\n";
    
    cout << "Because you know what they say about horrible opinions: \"No, just no.\"\n\n";
}

void viewAccount(Account account){
    printAccountInfo();
    
    cout << "Full Name: " << account.getFirstName() << " " << account.getLastName() << "\n";
    cout << "Username: " << account.getUsername() << "\n";
    cout << "Account Type/Purpose: " << account.getPurpose() << "\n";
    cout << "Account ID: " << account.getID() << "\n";
    cout << "Password: " << account.getPassword() << "\n\n";
    
}


void userFeed(Account account){
    printWelcome();
    printUserFeed();
    
    cout << "Welcome to your feed:) Please consider leaving if you have nothing else better to do. \n";
    cout << "Otherwise, you can choose to perform one of the actions below: \n\n";
    
    int input;
    
    while(true){
        
        cout << "tWOot sOmEThiNg [1]\n";
        cout << "About [2]\n";
        cout << "View Account details [3]\n";
        cout << "Logout (please.) [4]\n";
        
        cout << "Please enter a valid option: ";
        
        cin >> input;
        
        if(input == 4){
            printLogout();
            break;
        }
        
        switch(input){
            case 1:
                twoot(account.getUsername());
                break;
            case 2:
                about();
                break;
            case 3:
                viewAccount(account);
                break;
            default: 
                cout << "That is not a valid option...\n";
        }
    }
}

void signup(){
    printSignup();
    
    cout << "Welcome to the tWOoter account creation system! We're absolutely horrified to have you here!\n\n";
    
    cout << "To get tWOoting, we'll need you to answer a few questions...\n\n";
    
    cout << "Tell me, what is the purpose of this account? \n\n";
    
    cout << "Personal [1]\n";
    cout << "Business [2]\n";
    cout << "School [3]\n\n";
    
    int purpose;
    
    while(purpose != 1 and purpose != 2 and purpose != 3){
        cout << "Please enter a valid option: ";
        cin >> purpose;
    }
    
    switch(purpose){
        case 1:
            cout << "You chose [Personal] \n";
            cout << "Wow! A regular person! How fascinating! \n\n";
            cout << "(You are now the owner of a Personal account) \n";
            break;
        case 2:
            cout << "You chose [Business] \n";
            cout << "An entrepreneur? Be ready to file for bankruptcy:) \n\n";
            cout << "(You are now the owner of a Business account) \n";
            break;
        case 3:
            cout << "You chose [School] \n";
            cout << "You're a student? Say goodbye to your braincells:) \n\n";
            cout << "(You are now the owner of a School account) \n";
            break;
        default:
            cout << "That's... odd? How did we get here?\n";
            break;
    }
    
    cout << "\nLet's set it up: ";
    
    char confirm;
    
    string firstName;
    string lastName;
    string username;
    string password;
    string repeatPassword;
    
    while(confirm != 'c'){
        cout << "\n\tPlease enter your first name: ";
        cin.ignore();
        getline(cin, firstName);
        
        cout << "\tPlease enter your last name: ";
        cin.ignore();
        getline(cin, lastName);
        
        // change starts hereVVV
        while(true){
            bool usernameUnique = true;
        
            cout << "\tPlease enter your username: ";
            cin >> username;
            
            for(Account account : accounts){
                if(account.getUsername() == username){
                    cout << "\tI'm sorry, but that username has already been taken!\n";
                    cout << "\t(Hint: Try being more original you uncultured swine.)\n";
                    usernameUnique = false;
                }
            }
            
            if(usernameUnique){
               break; 
            } 
        }
        // change stops here^^^
        // fixed bug for non-unique username
        
        while(true){
            cout << "\tPlease enter a password (Minimum of 8 characters): ";
            cin >> password;
            
            if(password.length() < 8){
                cout << "\ti saiD A MInImum oF 8 ChArAcTErs. cAn yoU noT REAd??\n";
                continue;
            }
            
            cout << "\tPlease re-enter your password: ";
            cin >> repeatPassword;
            
            if(password != repeatPassword){
                cout << "\tThey are...different... \n";
                cout << "\tNo. \n";
                continue;
            }
            
            break;
        }
        
        cout << "\nTo confirm, press [c] then [Enter]. Otherwise, just press any other key then [Enter]: ";
        cin >> confirm;
    }
    
    int id = accounts.size() + 1;
    
    Account account(firstName, lastName, username, password, purpose, id);
    accounts.push_back(account);
    
    
    cout << "\nYour account has been successfully created:)\n\n";
}

void login(){
    printLogin();
    
    int maxAttempts = 3;
    
    cout << "Welcome to the tWOoter! To login, please enter your credentials below!\n\n";
    cout << "You'll be given " << maxAttempts << " attempts to enter your info, so don't mess up!\n\n";
    
    string username;
    string password;
    
    for(int i = 0; i < maxAttempts; i++){
        cout << "Attempts Remaining: " << (maxAttempts - i) << "\n\n";
        
        string username;
        string password;
        
        cout << "Please enter your username: ";
        cin >> username;
        
        cout << "Please enter your password: ";
        cin >> password;
        
        cout << "\n\nProcessing... \n\n";
        
        bool accountFound = false;
        bool passwordMatch = false;
        
        int accountID;
        
        for (Account account : accounts){
            if(account.getUsername() == username){
                accountFound = true;
                
                if(account.getPassword() == password){
                    passwordMatch = true;
                    accountID = account.getID();
                }
            }
        }
        
        if(!accountFound){
            cout << "An account could not be found with that username... \n\n";
            continue;
        } 
        
        if(!passwordMatch){
            cout << "Invalid Password \n\n";
            continue;
        } 
        
        cout << "Your login was successful~! Redirecting you to your feed...\n\n";
        userFeed(accounts[accountID - 1]);
        break;
    }
    
    cout << "\nRedirecting you to home page...\n\n";
	printHome();
	cout << "\n\n";
    
}


int main() {
    printWelcome();
    
    char start;
    cout << "Press [s] then [Enter] to start!\n";
    while (start != 's'){
        cin >> start;
    }
    
    printHome();
    
    cout << "\nWelcome to tWOter:)\n\n";
    cout << "The console-based social media platform designed to lessen your faith in humanity:)\n\n";
    cout << "Below are your options: \n\n";
    
    int input;
    
    while (true){
        cout << "To sign up for an account, enter [1]\n";
        cout << "To login to an existing account, enter [2]\n";
        cout << "To retain your sanity (exit tWOoter), enter [3]\n\n";
        
        cout << "Please enter a valid option: ";
        cin >> input;
        
        switch(input){
            case 1:
                signup();
                break;
            case 2:
                login();
                break;
            case 3:
                printGoodbye();
                exit(0);
            default: 
                cout << "That is not a valid option...\n";
        }
    }
    
    return 0;
}




