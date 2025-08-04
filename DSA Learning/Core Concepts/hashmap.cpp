#include<iostream>
#include<vector>
#include<unordered_map>
#include<map>
#include<math.h>
using namespace std;
 
int main(){ 
    
    // Creation
    unordered_map<string, int> map1;

    // Insertion :

    // Method 1 :-
    pair<string,int> p1 = make_pair("babbar" , 2);
    map1.insert(p1);

    // Method 2 :-
    pair<string,int> p2 ("Om" , 4);
    map1.insert(p2);

    // Method 3 :-
    map1["atharva"] = 1;
    map1["aarya"] = 2;
    map1["aarya"] = 7;
    map1["aarya"] = 8; // Overriding happens and latest value is printed.


    // Printing :-
    // cout << map1["babbar"] << endl;
    // cout << map1["Om"] << endl;
    // cout << map1["atharva"] << endl;
    // cout << map1["aarya"] << endl << endl;
    //cout << map1 << endl;


    // Counting presence of a specific key
    // 1 - PRESENT
    // 2 - ABSENT
    cout << map1.count("aarya") << endl;
 
    // Erase Function :- Erases all entries of the passed key
    map1.erase("aarya");
    cout << map1["aarya"] << endl << endl;

    // ITERATORS :-
   unordered_map<string, int> ::iterator abc = map1.begin();

    while(abc != map1.end()){
        cout << abc-> first << " " << abc-> second << endl;
        abc++;
    }

    return 0;
}