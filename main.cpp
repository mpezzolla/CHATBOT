#include <iostream>
#include <cstdlib>
#include <string>
#include <list>
#include <cstring>
#include <cmath>
#include <sstream> 
#include <vector>
using namespace std;


//Unkownresponses for chatbot
class HashTable2 {
private:
    static const int hashGroups2 = 11;
    list<pair<int, string>> table[hashGroups2];


public:
    int hashFunction2(int key_num2);
    void insertItem2(int key_num2, string key2);
    void printTable2();

};

int HashTable2::hashFunction2(int key_num2) {
    return key_num2 % hashGroups2;
}

void HashTable2::insertItem2(int key_num2, string key2) {
    int hashValue = hashFunction2(key_num2);
    auto& cell = table[hashValue];
    auto bItr = begin(cell);
    bool keyExists = false;


    if (!keyExists) {
        cell.emplace_back(key_num2, key2);
    }
    return;

}

void HashTable2::printTable2() {
    stringstream ss2;
    string temp2;
    vector<string> input_tracker2{};

    for (int i{}; i < hashGroups2; i++) {
        if (table[i].size() == 0) continue;

        auto bItr = table[i].begin();
        for (; bItr != table[i].end(); bItr++) {
            ss2 << "Key: " << bItr->second << endl << endl; // will display just the key
            temp2 = ss2.str();
        }

        cout << temp2;
        input_tracker2.push_back(temp2);

        for (int i = 0; i < input_tracker2.size(); i++)
            std::cout << "Stored in the vector, Preview: " << input_tracker2[i] << "\n";


    }


    return;
}

void IntitializeUnknownCHATResponses() {

    int restart;



    int response_size = rand() % 10 + 1; //chooses a random key as a response for unkown key submissions from the user
    HashTable2 HTBOT[10];
    string outputs;


    HTBOT[0].insertItem2(1, "I'm helper bot and I didn't quite get that.");
    HTBOT[1].insertItem2(2, "I'm helper bot and I don't understand.");
    HTBOT[2].insertItem2(3, "I'm helper bot and I can't understand you.");
    HTBOT[3].insertItem2(4, "I'm helper bot and I'm not sure what you mean.");
    HTBOT[4].insertItem2(5, "I'm helper bot and I didn't catch that.");
    HTBOT[5].insertItem2(6, "I'm helper bot and I'm not sure how to handle that.");
    HTBOT[6].insertItem2(7, "I'm helper bot and can you repeat that?");
    HTBOT[7].insertItem2(8, "I'm helper bot and please enter choice again. ");
    HTBOT[8].insertItem2(9, "I'm helper bot and that is an invalid question.");
    HTBOT[9].insertItem2(10, "I'm helper bot and I'm confused? ");



    if (response_size == 1)
    {
        HTBOT[0].printTable2();
    }


    if (response_size == 2)
    {
        HTBOT[1].printTable2();
    }


    if (response_size == 3)
    {
        HTBOT[2].printTable2();
    }

    if (response_size == 4)
    {
        HTBOT[3].printTable2();
    }

    if (response_size == 5)
    {
        HTBOT[4].printTable2();
    }

    if (response_size == 6)
    {
        HTBOT[5].printTable2();
    }

    if (response_size == 7)
    {
        HTBOT[6].printTable2();
    }

    if (response_size == 8)
    {
        HTBOT[7].printTable2();
    }

    if (response_size == 9)
    {
        HTBOT[8].printTable2();
    }

    if (response_size == 10)
    {
        HTBOT[9].printTable2();
    }

}
//Unkownresponses for chatbot






//part 6

//sports

class HashTableSports {
private:
    static const int hashGroups1 = 11;
    list<pair<int, string>> table[hashGroups1];


public:
    int hashFunction1(int key_num1);
    void insertItem1(int key_num1, string key1);
    void printTable1();

};

int HashTableSports::hashFunction1(int key_num1) {
    return key_num1 % hashGroups1;
}

void HashTableSports::insertItem1(int key_num1, string key1) {
    int hashValue = hashFunction1(key_num1);
    auto& cell = table[hashValue];
    auto bItr = begin(cell);
    bool keyExists = false;


    if (!keyExists) {
        cell.emplace_back(key_num1, key1);
    }
    return;

}

void HashTableSports::printTable1() {
    stringstream ss1;
    string temp1;
    vector<string> input_tracker1{};

    for (int i{}; i < hashGroups1; i++) {
        if (table[i].size() == 0) continue;

        auto bItr = table[i].begin();
        for (; bItr != table[i].end(); bItr++) {
            ss1 << bItr->second << endl << endl; // will display just the key and word "Key" will now not be displayed on the console
            temp1 = ss1.str();
        }

        cout << temp1;
        input_tracker1.push_back(temp1);

        for (int i = 0; i < input_tracker1.size(); i++)
            std::cout << "Stored in the vector, Preview: " << input_tracker1[i] << "\n";


    }


    return;
}
//sports







//coding
class HashTableCoding {
private:
    static const int hashGroups1 = 11;
    list<pair<int, string>> table[hashGroups1];


public:
    int hashFunction1(int key_num1);
    void insertItem1(int key_num1, string key1);
    void printTable1();

};

int HashTableCoding::hashFunction1(int key_num1) {
    return key_num1 % hashGroups1;
}

void HashTableCoding::insertItem1(int key_num1, string key1) {
    int hashValue = hashFunction1(key_num1);
    auto& cell = table[hashValue];
    auto bItr = begin(cell);
    bool keyExists = false;


    if (!keyExists) {
        cell.emplace_back(key_num1, key1);
    }
    return;

}

void HashTableCoding::printTable1() {
    stringstream ss1;
    string temp1;
    vector<string> input_tracker1{};

    for (int i{}; i < hashGroups1; i++) {
        if (table[i].size() == 0) continue;

        auto bItr = table[i].begin();
        for (; bItr != table[i].end(); bItr++) {
            ss1 << bItr->second << endl << endl; // will display just the key and word "Key" will now not be displayed on the console
            temp1 = ss1.str();
        }

        cout << temp1;
        input_tracker1.push_back(temp1);

        for (int i = 0; i < input_tracker1.size(); i++)
            std::cout << "Stored in the vector, Preview: " << input_tracker1[i] << "\n";


    }


    return;
}
//coding




//guitar
class HashTableGuitar {
private:
    static const int hashGroups1 = 11;
    list<pair<int, string>> table[hashGroups1];


public:
    int hashFunction1(int key_num1);
    void insertItem1(int key_num1, string key1);
    void printTable1();

};

int HashTableGuitar::hashFunction1(int key_num1) {
    return key_num1 % hashGroups1;
}

void HashTableGuitar::insertItem1(int key_num1, string key1) {
    int hashValue = hashFunction1(key_num1);
    auto& cell = table[hashValue];
    auto bItr = begin(cell);
    bool keyExists = false;


    if (!keyExists) {
        cell.emplace_back(key_num1, key1);
    }
    return;

}

void HashTableGuitar::printTable1() {
    stringstream ss1;
    string temp1;
    vector<string> input_tracker1{};

    for (int i{}; i < hashGroups1; i++) {
        if (table[i].size() == 0) continue;

        auto bItr = table[i].begin();
        for (; bItr != table[i].end(); bItr++) {
            ss1 << bItr->second << endl << endl; // will display just the key and word "Key" will now not be displayed on the console
            temp1 = ss1.str();
        }

        cout << temp1;
        input_tracker1.push_back(temp1);

        for (int i = 0; i < input_tracker1.size(); i++)
            std::cout << "Stored in the vector, Preview: " << input_tracker1[i] << "\n";


    }


    return;
}
//guitar




//hashtables
void IntitializeSportsResponses() {
    while (int again_sports = 1)
    {



        HashTableSports HTSPORTS[10];
        string outputs;
        HTSPORTS[0].insertItem1(1, "Italy didnt make the world cup on 3/24/22");
        HTSPORTS[1].insertItem1(2, "Kobe Bryant's Middle Name Is Bean");
        HTSPORTS[2].insertItem1(3, "Two Players Played in the MLB for 27 Seasons");
        HTSPORTS[3].insertItem1(4, "A player will jump an average of 300 times per game.");
        HTSPORTS[4].insertItem1(5, "Soccer is played by 250 million players in over 200 countries, making it the world's most popular sport.");
        HTSPORTS[5].insertItem1(6, "Yellow tennis balls were used for the first time in 1986.");
        HTSPORTS[6].insertItem1(7, "Golf was banned not only once but three times in Scotland between the years of 1457 and 1744.");
        HTSPORTS[7].insertItem1(8, "Bruce Lee is often recognized as the first mixed martial artist in the US. He’s sometimes referred to as the “grandfather of modern MMA.");
        HTSPORTS[8].insertItem1(9, "80% of Canada watched the final men's hockey game during the 2010 Olympics");
        HTSPORTS[9].insertItem1(10, "The first Olympic race was in Greece in 776 B.C.");




        //cout << "Enter a key between 1-10: ";
        int choice;
        cin >> choice;

        if (choice == 1)
        {
            HTSPORTS[0].printTable1();
        }


        if (choice == 2)
        {
            HTSPORTS[1].printTable1();
        }


        if (choice == 3)
        {
            HTSPORTS[2].printTable1();
        }

        if (choice == 4)
        {
            HTSPORTS[3].printTable1();
        }

        if (choice == 5)
        {
            HTSPORTS[4].printTable1();
        }

        if (choice == 6)
        {
            HTSPORTS[5].printTable1();
        }

        if (choice == 7) {

            HTSPORTS[6].printTable1();
        }

        if (choice == 8)
        {
            HTSPORTS[7].printTable1();
        }

        if (choice == 9)
        {
            HTSPORTS[8].printTable1();
        }

        if (choice == 10)
        {
            HTSPORTS[9].printTable1();
        }

        if (choice<1 || choice >10)
        {
            IntitializeUnknownCHATResponses();
        }



        cout << "Enter any number to choose another sports topic or 0 to exit" << endl << endl;;
        cin >> again_sports;

        if (again_sports == 0)
        {
            cout << "Thanks for chatting about all things sports, goodbye." << endl << endl << endl << endl;
            return exit(0);
        }
        if (again_sports > 0 || again_sports < 0)
        {
        cout << "1. Highlights, 2. Basketball, 3. Baseball, 4. Volleyball, 5. Soccer, 6. Tennis, 7. Golf, 8. MMA, 9. Hockey, 10. Track" << endl << endl;
        }



    };
}
void IntitializeCodingResponses() {
    while (int again_coding = 1)
    {



        HashTableSports HTCODING[10];
        string outputs;
        HTCODING[0].insertItem1(1, "An IDE or integrated development environment is a software application that combines, in one place, all the tools needed for a software development project.");
        HTCODING[1].insertItem1(2, "Languages include: C++, C#, Java, HTML, Python, and C");
        HTCODING[2].insertItem1(3, "An array is a data structure consisting of a collection of elements, each identified by at least one array index or key. ");
        HTCODING[3].insertItem1(4, "A variable is a value that can change, depending on conditions or on information passed to the program.");
        HTCODING[4].insertItem1(5, "A class is an extensible program-code-template for creating objects, providing initial values for state and implementations of behavior.");
        HTCODING[5].insertItem1(6, "The late 1950s saw the invention of coding languages that are still in use today – specifically, FORTRAN, LISP and COBOL. ");
        HTCODING[6].insertItem1(7, "Debugging involves going into the code and evaluating any mistakes that may result in a failed compile");
        HTCODING[7].insertItem1(8, "Visual Studio was made in 1997");
        HTCODING[8].insertItem1(9, "XCode is used for Apple MacOS and iOS products.");
        HTCODING[9].insertItem1(10, "Using Microsoft Word as an IED is a great idea, 10/10, would highly suggest.");




        //cout << "Enter a key between 1-10: ";
        int choice;
        cin >> choice;

        if (choice == 1)
        {
            HTCODING[0].printTable1();
        }


        if (choice == 2)
        {
            HTCODING[1].printTable1();
        }


        if (choice == 3)
        {
            HTCODING[2].printTable1();
        }

        if (choice == 4)
        {
            HTCODING[3].printTable1();
        }

        if (choice == 5)
        {
            HTCODING[4].printTable1();
        }

        if (choice == 6)
        {
            HTCODING[5].printTable1();
        }

        if (choice == 7) {

            HTCODING[6].printTable1();
        }

        if (choice == 8)
        {
            HTCODING[7].printTable1();
        }

        if (choice == 9)
        {
            HTCODING[8].printTable1();
        }

        if (choice == 10)
        {
            HTCODING[9].printTable1();
        }

        if (choice < 1 || choice >10)
        {
            IntitializeUnknownCHATResponses();
        }


        cout << "Enter any number to choose another coding topic or 0 to exit" << endl << endl;;
        cin >> again_coding;

        if (again_coding == 0)
        {
            cout << "Thanks for chatting about all things coding, goodbye." << endl << endl << endl << endl;
            return exit(0);
        }
        if (again_coding > 0 || again_coding < 0)
        {
            cout << "1. IEDs, 2. Languages, 3. Arrays, 4. Variables, 5. Classes, 6. History, 7. Debugging, 8. Visual Studio, 9. XCode, 10. Using Word as an IED" << endl << endl;
        }



    };
}
void IntitializeGuitarResponses() {
    while (int again_guitar = 1)
    {



        HashTableSports HTGUITAR[10];
        string outputs;
        HTGUITAR[0].insertItem1(1, "Originated in Spain early in the 16th century, deriving from the guitarra latina, a late-medieval instrument with a waisted body and four strings. ");
        HTGUITAR[1].insertItem1(2, "Les Paul, Stratocaster, Telecaster");
        HTGUITAR[2].insertItem1(3, "Ernie Balls are very popular");
        HTGUITAR[3].insertItem1(4, "Most guitars hae 21 frets.");
        HTGUITAR[4].insertItem1(5, "Picks come in many sizes");
        HTGUITAR[5].insertItem1(6, "Marshall, Boss Katana, Blackstar, Revv");
        HTGUITAR[6].insertItem1(7, "Gibson, Epiphone, Schecter, Fender, Jackson, Rogue");
        HTGUITAR[7].insertItem1(8, "There are a lot of chords");
        HTGUITAR[8].insertItem1(9, "Accoustic sounds nice");
        HTGUITAR[9].insertItem1(10, "Electric guitar is loud");




        //cout << "Enter a key between 1-10: ";
        int choice;
        cin >> choice;

        if (choice == 1)
        {
            HTGUITAR[0].printTable1();
        }


        if (choice == 2)
        {
            HTGUITAR[1].printTable1();
        }


        if (choice == 3)
        {
            HTGUITAR[2].printTable1();
        }

        if (choice == 4)
        {
            HTGUITAR[3].printTable1();
        }

        if (choice == 5)
        {
            HTGUITAR[4].printTable1();
        }

        if (choice == 6)
        {
            HTGUITAR[5].printTable1();
        }

        if (choice == 7) {

            HTGUITAR[6].printTable1();
        }

        if (choice == 8)
        {
            HTGUITAR[7].printTable1();
        }

        if (choice == 9)
        {
            HTGUITAR[8].printTable1();
        }

        if (choice == 10)
        {
            HTGUITAR[9].printTable1();
        }

        if (choice < 1 || choice >10)
        {
            IntitializeUnknownCHATResponses();
        }


        cout << "Enter any number to choose another guitar topic or 0 to exit" << endl << endl;;
        cin >> again_guitar;

        if (again_guitar == 0)
        {
            cout << "Thanks for chatting about all things guitars, goodbye." << endl << endl << endl << endl;
            return exit(0);
        }
        if (again_guitar > 0 || again_guitar < 0)
        {
            cout << "1. History, 2. Guitar Models, 3. Strings, 4. Fretboard, 5. Picks, 6. Amps, 7. Brands, 8. Chords, 9. Accoustic, 10. Electirc" << endl << endl;
        }



    };
}




//----------------------------------------
void choice_1() {


    cout << "Hello, welcome to SPORTSCHAT. Please enter your name: "; string name; cin >> name;

    struct ChatRoom {
        virtual void broadcast(string from, string msg) = 0;
        virtual void message(string from, string to, string msg) = 0;
    };
    struct Person {
        string name;
        ChatRoom* m_room{ nullptr };
        Person(string n) : name(n) {}
       void say(string msg) const { m_room->broadcast(name, msg); }
        void pm(string to, string msg) const { m_room->message(name, to, msg); }
        void receive(string from, string msg) {
            string s{ from + ": \"" + msg + "\"" };
            cout << "[" << name << "'s chat session]" << s << endl; // displays name entered with status 
        }
    };
    struct SportChat : ChatRoom
    {
        vector<Person*>name; //takes name entered by user
        void broadcast(string from, string msg) {
            for (auto p : name)
                if (p->name != from)
                    p->receive(from, msg);
        }
        void join(Person* p) {
            string join_msg = p->name + " joins the chat";
            broadcast("room", join_msg);
            p->m_room = this;
            name.push_back(p);
        }
        void message(string from, string to, string msg) {
            auto target = find_if(begin(name), end(name),
                [&](const Person* p) {
                    return p->name == to;
                });
            if (target != end(name)) (*target)->receive(from, msg);
        }
        void exit();
    };



    SportChat room;
    Person Marco{ name };
    Person bot{ "Bot" };
    room.join(&Marco);
    room.join(&bot);
    bot.say("What do you want to talk about? Enter the number that corrisponds with the topic");
    bot.say("1. Highlights, 2. Basketball, 3. Baseball, 4. Volleyball, 5. Soccer, 6. Tennis, 7. Golf, 8. MMA, 9. Hockey, 10. Track");
    IntitializeSportsResponses();
        }
void choice_2() {
    cout << "Hello, welcome to CODINGCHAT. Please enter your name: "; string name; cin >> name;


    struct ChatRoom {
        virtual void broadcast(string from, string msg) = 0;
        virtual void message(string from, string to, string msg) = 0;
    };
    struct Person {
        string name;
        ChatRoom* m_room{ nullptr };
        Person(string n) : name(n) {}
        void say(string msg) const { m_room->broadcast(name, msg); }
        void pm(string to, string msg) const { m_room->message(name, to, msg); }
        void receive(string from, string msg) {
            string s{ from + ": \"" + msg + "\"" };
            cout << "[" << name << "'s chat session]" << s << endl; // displays name entered with status 
        }
    };
    struct CodingChat : ChatRoom
    {
        vector<Person*>name; //takes name entered by user
        void broadcast(string from, string msg) {
            for (auto p : name)
                if (p->name != from)
                    p->receive(from, msg);
        }
        void join(Person* p) {
            string join_msg = p->name + " joins the chat";
            broadcast("room", join_msg);
            p->m_room = this;
            name.push_back(p);
        }
        void message(string from, string to, string msg) {
            auto target = find_if(begin(name), end(name),
                [&](const Person* p) {
                    return p->name == to;
                });
            if (target != end(name)) (*target)->receive(from, msg);
        }
        void exit();
    };


    CodingChat room;
    Person Marco{ name };
    Person bot{ "Bot" };
    room.join(&Marco);
    room.join(&bot);
    bot.say("What do you want to talk about? Enter the number that corrisponds with the topic");
    bot.say("1. IEDs, 2. Languages, 3. Arrays, 4. Variables, 5. Classes, 6. History, 7. Debugging, 8. Visual Studio, 9. XCode, 10. Using Word as an IED");
    IntitializeCodingResponses();

}
void choice_3() {
    cout << "Hello, welcome to GUITARCHAT. Please enter your name: "; string name; cin >> name;


    struct ChatRoom {
        virtual void broadcast(string from, string msg) = 0;
        virtual void message(string from, string to, string msg) = 0;
    };
    struct Person {
        string name;
        ChatRoom* m_room{ nullptr };
        Person(string n) : name(n) {}
        void say(string msg) const { m_room->broadcast(name, msg); }
        void pm(string to, string msg) const { m_room->message(name, to, msg); }
        void receive(string from, string msg) {
            string s{ from + ": \"" + msg + "\"" };
            cout << "[" << name << "'s chat session]" << s << endl; // displays name entered with status 
        }
    };
    struct GUITARCHAT : ChatRoom
    {
        vector<Person*>name; //takes name entered by user
        void broadcast(string from, string msg) {
            for (auto p : name)
                if (p->name != from)
                    p->receive(from, msg);
        }
        void join(Person* p) {
            string join_msg = p->name + " joins the chat";
            broadcast("room", join_msg);
            p->m_room = this;
            name.push_back(p);
        }
        void message(string from, string to, string msg) {
            auto target = find_if(begin(name), end(name),
                [&](const Person* p) {
                    return p->name == to;
                });
            if (target != end(name)) (*target)->receive(from, msg);
        }
        void exit();
    };


    GUITARCHAT room;
    Person Marco{ name };
    Person bot{ "Bot" };
    room.join(&Marco);
    room.join(&bot);
    bot.say("What do you want to talk about? Enter the number that corrisponds with the topic");
    bot.say("1. History, 2. Guitar Models, 3. Strings, 4. Fretboard, 5. Picks, 6. Amps, 7. Brands, 8. Chords, 9. Accoustic, 10. Electirc");
    IntitializeGuitarResponses();

};
void unkown() {
    exit(0);

}
void part_6(){
    cout << "Welcome to ChatBot. Please select a topic below:" << endl;
    cout << "Press 1 for sports" << endl;
    cout << "Press 2 for coding" << endl;
    cout << "Press 3 for guitar" << endl;
    cout << "Or press 0 to exit" << endl;

    int choice;
    cin >> choice;

    while (choice < 0 || choice > 3)
    {
        cout << "Invalid choice try again" << endl << endl;
        cin >> choice;
    }
    if (choice == 0)
    {
        cout << "Exiting Program, Goodbye." << endl;
        exit(0);
    }

    if (choice == 1)
    {
        cout << "Sports" << endl << endl;
        choice_1();
    }

    else if (choice == 2)
    {
        cout << "Coding" << endl << endl;
        choice_2();
    }

    else if (choice == 3)
    {
        cout << "Guitar" << endl << endl;
        choice_3();
    }

    else if (choice < 1 || choice > 3)
    {
        unkown();
    }







}


//end part 6
//-------------------------------------------------------------------------------------------------------------------------------//

void MainMenu() {
    //Main Menu Function
    cout << "Welcome to CHATBOT! Let's have a talk." << endl;
    cout << "Enter any number now to connect to a bot or enter '0' to exit the program." << endl;
    int answer;
    cin >> answer;


    if (answer == 0)
    {
        cout << "Exiting Program and going to part 6. Goodbye" << endl << endl << endl << endl;
        return part_6();
        
    }

}

void Process() {
    //Process Function
    cout << "The following demonstrates general HashTable functionality for part 1-5 of the midterm. If you exit this chatbot, you will be presented with part 6 of the assignment." << endl << endl;
    MainMenu();
}

class HashTable {
private:
    static const int hashGroups = 11; //sets hash to 11
    list<pair<string, string>> table[hashGroups]; //key and value will be strings


public:
    int hashFunction(int key_num);
    void insertItem(int key_num, string key, string value); //takes a key number and two strings, a string KEY and string VALUE
    void printTable();

};

int HashTable::hashFunction(int key_num) {
    return key_num % hashGroups;
}

void HashTable::insertItem(int key_num, string key, string value) {
    int hashValue = hashFunction(key_num);
    auto& cell = table[hashValue];
    auto bItr = begin(cell);
    bool keyExists = false;


    if (!keyExists) {
        cell.emplace_back(key, value);
    }
    return;

}

void HashTable::printTable() { //Print Function

   stringstream ss; // string will be stored into ss
   vector<string> input_tracker{}; //open ended array to place multiple strings into it for storage
   int i = 0; //initailize i
   string temp;
    for (int i{}; i < hashGroups; i++) {
        if (table[i].size() == 0) continue; //limits the creation of hashes to the number specified in const int hashgroups
        //char a;
        auto bItr = table[i].begin();
        for (; bItr != table[i].end(); bItr++) {
            ss << "Key: " << bItr->first << "Value: " << bItr->second << endl << endl;  // will display only the strings
            temp = ss.str(); //stores ss ino temp



            cout << temp;
            input_tracker.push_back(temp); //adds value of temp into input_tracker

            for (int i = 0; i < input_tracker.size(); i++)
                std::cout << "Stored in the vector, Preview:  " << input_tracker[i] << "\n";
        }


    }

    return;
}


//-------------------------------------------------------------------------------------------------------------------------------//


//start of intitializeunkownresponses()
//follows general code structure as intitializekownresponses()
class HashTable1 {
private:
    static const int hashGroups1 = 11;
    list<pair<int, string>> table[hashGroups1]; 


public:
    int hashFunction1(int key_num1);
    void insertItem1(int key_num1, string key1);
    void printTable1();

};

int HashTable1::hashFunction1(int key_num1) {
    return key_num1 % hashGroups1;
}

void HashTable1::insertItem1(int key_num1, string key1) {
    int hashValue = hashFunction1(key_num1);
    auto& cell = table[hashValue];
    auto bItr = begin(cell);
    bool keyExists = false;


    if (!keyExists) {
        cell.emplace_back(key_num1, key1);
    }
    return;

}

void HashTable1::printTable1() {
    stringstream ss1;
    string temp1;
    vector<string> input_tracker1{};

    for (int i{}; i < hashGroups1; i++) {
        if (table[i].size() == 0) continue;

        auto bItr = table[i].begin();
        for (; bItr != table[i].end(); bItr++) {
            ss1 << "Key: " << bItr->second << endl << endl; // will display just the key
            temp1 = ss1.str();
        }

        cout << temp1;
        input_tracker1.push_back(temp1);

        for (int i = 0; i < input_tracker1.size(); i++)
            std::cout << "Stored in the vector, Preview: " << input_tracker1[i] << "\n";


    }
    

    return;
}

void IntitializeUnknownResponses() {

    int restart;

    
    
    int response_size = rand() %10+1; //chooses a random key as a response for unkown key submissions from the user
    HashTable1 HT1[10];
    string outputs;

 
    HT1[0].insertItem1(1, "I'm helper bot and I didn't quite get that.");
    HT1[1].insertItem1(2, "I'm helper bot and I don't understand.");
    HT1[2].insertItem1(3, "I'm helper bot and I can't understand you.");
    HT1[3].insertItem1(4, "I'm helper bot and I'm not sure what you mean.");
    HT1[4].insertItem1(5, "I'm helper bot and I didn't catch that.");
    HT1[5].insertItem1(6, "I'm helper bot and I'm not sure how to handle that.");
    HT1[6].insertItem1(7, "I'm helper bot and can you repeat that?");
    HT1[7].insertItem1(8, "I'm helper bot and please enter choice again. ");
    HT1[8].insertItem1(9, "I'm helper bot and that is an invalid question.");
    HT1[9].insertItem1(10, "I'm helper bot and I'm confused? ");
            
    

    if (response_size == 1)
    {
        HT1[0].printTable1();
    }


    if (response_size == 2)
    {
        HT1[1].printTable1();
    }


    if (response_size == 3)
    {
        HT1[2].printTable1();
    }

    if (response_size == 4)
    {
        HT1[3].printTable1();
    }

    if (response_size == 5)
    {
        HT1[4].printTable1();
    }

    if (response_size == 6)
    {
        HT1[5].printTable1();
    }

    if (response_size == 7)
    {
        HT1[6].printTable1();
    }

    if (response_size == 8)
    {
        HT1[7].printTable1();
    }

    if (response_size == 9)
    {
        HT1[8].printTable1();
    }

    if (response_size == 10)
    {
        HT1[9].printTable1();
    }


    

    cout << "Press any key to return to the main menu" << endl;
    cin >> restart;
    Process();
}

void IntitializeKnownResponses() {

    while (int again = 1)
    {

    
    
    HashTable HT[10];
    cout << "Enter a key between 1-10: ";
    int key_choice;
    cin >> key_choice;


    HT[0].insertItem(1, "What color is the sky? ", "Blue");
    HT[1].insertItem(2, "Is a tree tall or short? ", "Tall");
    HT[2].insertItem(3, "How may days are in a week ? ", "Seven");
    HT[3].insertItem(4, "How many hours are in a day ", "Twenty Four");
    HT[4].insertItem(5, "What's your favorite color? ", "Red");
    HT[5].insertItem(6, "Favorite snack? ", "Chips");
    HT[6].insertItem(7, "Do you prefer Mac or PC? ", "PC");
    HT[7].insertItem(8, "What season comes after Spring? ", "Summer");
    HT[8].insertItem(9, "How old are you? ", "Twenty Three");
    HT[9].insertItem(10, "Is this the best code ever written? ", "Yes");


        if (key_choice == 1) {
         HT[0].printTable();
        }

        if (key_choice == 2) {
            HT[1].printTable();
        }

        if (key_choice == 3) {
            HT[2].printTable();
        }

        if (key_choice == 4) {
            HT[3].printTable();
        }

        if (key_choice == 5) {
            HT[4].printTable();
        }

        if (key_choice == 6) {
            HT[5].printTable();
        }

        if (key_choice == 7) {
            HT[6].printTable();
        }

        if (key_choice == 8) {
            HT[7].printTable();
        }

        if (key_choice == 9) {
            HT[8].printTable();
        }

        if (key_choice == 10) {
            HT[9].printTable();
        }

        if (key_choice < 1 || key_choice > 10)
        {
            IntitializeUnknownResponses();
        }
        

        cout << "Enter any number to enter another key or 0 to exit" << endl;
       
        cin >> again;

        if (again == 0)
        {
           cout << "Thanks for chatting, now exiting and entering part 6, goodbye." << endl << endl << endl << endl;
           return part_6();
        }

   }
}

// -----------------------------------------------------MAIN----------------------------------------------------- //

int main()
{
    cout << "The design pattern modified MainMenu() because it allows for the program to either stay in the single HashTable or move on to the multi HashTable with three different topics and an unkown HashTable." << endl << endl;
    Process();
    IntitializeKnownResponses();
    cout << endl << endl << endl;
    IntitializeUnknownResponses(); 
    cout << endl << endl << endl;
    part_6();

return 0;

}