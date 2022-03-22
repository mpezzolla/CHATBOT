#include <iostream>
#include <cstdlib>
#include <string>
#include <list>
#include <cstring>

using namespace std;

class HashTable {
private:
    static const int hashGroups = 11;
    list<pair<string, string>> table[hashGroups];


public:
    bool isEmpty() const;
    int hashFunction(int key_num);
    void insertItem(int key_num, string key, string value);
    void printTable();

};


bool HashTable::isEmpty() const {
    int sum{};
    for (int i{}; i < hashGroups; i++)
    {
        sum += table[i].size();
    }


    if
        (!sum) {
        return true;
    }
    return false;

}



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


void HashTable::printTable() {
    for (int i{}; i < hashGroups; i++) {
        if (table[i].size() == 0) continue;

        auto bItr = table[i].begin();
        for (; bItr != table[i].end(); bItr++) {
            cout << "Key: " << bItr->first << "Value: " << bItr->second << endl;
        }


    }

    return;
}


void IntitializeKnownResponses() {
    HashTable HT;


    HT.insertItem(1,"What color is the sky? ", "Blue");
    HT.insertItem(2, "Is a tree tall or short? ", "Tall");
    HT.insertItem(3, "How may days are in a week? ", "Seven");
    HT.insertItem(4, "How many hours are in a day ", "Twenty Four");
    HT.insertItem(5, "What's your favorite color? ", "Red");
    HT.insertItem(6, "Favorite snack? ", "Chips");
    HT.insertItem(7, "Do you prefer Mac or PC? ", "PC");
    HT.insertItem(8, "What season comes after Spring? ", "Summer");
    HT.insertItem(9, "How old are you? ", "Twenty Three");
    HT.insertItem(10, "Is this the best code ever written? ", "Yes");



    HT.printTable();
}





//start of intitializeunkownresponses()


#include <iostream>
#include <cstdlib>
#include <string>
#include <list>
#include <cstring>

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


bool HashTable1::isEmpty1() const {
    int sum{};
    for (int i{}; i < hashGroups1; i++)
    {
        sum += table[i].size();
    }


    if
        (!sum) {
        return true;
    }
    return false;

}



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
    for (int i{}; i < hashGroups1; i++) {
        if (table[i].size() == 0) continue;

        auto bItr = table[i].begin();
        for (; bItr != table[i].end(); bItr++) {
            cout << "Key: " << bItr->second << endl;
        }


    }

    return;
}



void IntitializeUnknownResponses() {
    HashTable1 HT;


    HT.insertItem1(1, "I didn't quite get that.");
    HT.insertItem1(2, "I don't understand.");
    HT.insertItem1(3, "I can't understand you.");
    HT.insertItem1(4, "I'm not sure what you mean.");
    HT.insertItem1(5, "I didn't catch that.");
    HT.insertItem1(6, "I'm not sure how to handle that.");
    HT.insertItem1(7, "Can you repeat that?");
    HT.insertItem1(8, "Let me connect you with someone. ");
    HT.insertItem1(9, "That is an invalid question.");
    HT.insertItem1(10, "Can you reword the question? ");


    HT.printTable1();
}



// -------------------------------------------MAIN----------------------------------------------------- //

int main()
{

    IntitializeKnownResponses();
    cout << endl << endl << endl;
    IntitializeUnknownResponses();

    return 0;

}