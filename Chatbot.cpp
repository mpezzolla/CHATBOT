//SEE IF CHATLOG CAN BE MADE WITH TEMP

#include <iostream>
#include <cstdlib>
#include <string>
#include <list>
#include <cstring>
#include <cmath>
#include <sstream> 
#include <vector>

using namespace std;

//Main Menu Function

void MainMenu() {
    cout << "Welcome to CHATBOT! Let's have a talk." << endl;
    cout << "Enter any number now to connect to a bot or enter '0' to exit the program." << endl;
    int answer;
    cin >> answer;


    if (answer == 0)
    {
        cout << "Exiting Program. Goodbye" << endl;
        exit(0);
    }

}



//Process Function
void Process() {
    MainMenu();
}


class HashTable {
private:
    static const int hashGroups = 11; //sets hash to 11
    list<pair<string, string>> table[hashGroups];


public:
    bool isEmpty() const;
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



//Print Function
void HashTable::printTable() { 
   stringstream ss;
   vector<string> input_tracker{};
   int i = 0;
   string temp;
    for (int i{}; i < hashGroups; i++) {
        if (table[i].size() == 0) continue; //limits the creation of hashes to the number specified in const int hashgroups
        char a;
        auto bItr = table[i].begin();
        for (; bItr != table[i].end(); bItr++) {
            ss << "Key: " << bItr->first << "Value: " << bItr->second << endl << endl;  // will display only the strings
            temp = ss.str();



            cout << temp;
            input_tracker.push_back(temp);

            for (int i = 0; i < input_tracker.size(); i++)
                std::cout << "Stored in the vector " << input_tracker[i] << "\n";
        }


    }

    return;
}




//start of intitializeunkownresponses()

#include <iostream>
#include <cstdlib>
#include <string>
#include <list>
#include <cstring>
#include "Chatbot.h"

using namespace std;

class HashTable1 {
private:
    static const int hashGroups1 = 11;
    list<pair<int, string>> table[hashGroups1];


public:
    bool isEmpty1() const;
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
            //cout << temp1;
        }

        cout << temp1;
        input_tracker1.push_back(temp1);

        for (int i = 0; i < input_tracker1.size(); i++)
            std::cout << "Stored in the vector: " << input_tracker1[i] << "\n";


    }
    

    return;
}



void IntitializeUnknownResponses() {

    int restart;

    
    
    int response_size = rand() %10+1;
    HashTable1 HT1[10];
    string outputs;


  

    //for (int i = 0; i < response_size; i++)
    //{
    //    response_size = rand() % 10;
    //}

    //cout << response_size;

 
    HT1[0].insertItem1(1, "I didn't quite get that.");
    HT1[1].insertItem1(2, "I don't understand.");
    HT1[2].insertItem1(3, "I can't understand you.");
    HT1[3].insertItem1(4, "I'm not sure what you mean.");
    HT1[4].insertItem1(5, "I didn't catch that.");
    HT1[5].insertItem1(6, "I'm not sure how to handle that.");
    HT1[6].insertItem1(7, "Can you repeat that?");
    HT1[7].insertItem1(8, "Let me connect you with someone. ");
    HT1[8].insertItem1(9, "That is an invalid question.");
    HT1[9].insertItem1(10, "Can you reword the question? ");
            
    

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
    //main();

}




void IntitializeKnownResponses() {
   
   // int again;
    while (int again = 1)
    {

    
    
    HashTable HT[10];
    cout << "Enter a key: ";
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
           cout << "Thanks for chatting, now exiting, goodbye." << endl;
           exit(0);
        }

   }
}










// -----------------------------------------------------MAIN----------------------------------------------------- //

int main()
{
    Process();
    IntitializeKnownResponses();

    cout << endl << endl << endl;
    IntitializeUnknownResponses(); 
   
    return 0;

}