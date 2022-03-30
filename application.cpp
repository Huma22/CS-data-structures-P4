// created By Huma Tejaswi Akkem
// application.cpp
// CS 251 project 4
// prof.Shanon Reckinger
#include <fstream>
#include <iostream>
#include <vector>
// calling the dna.h
#include "dna.h"

using namespace std;
// Called the dna.h file with using strings or 
// operators, Wrote statements
int main() {
  cout << "Welcome to the DNA Profiling App!\n";
  cout << "Enter database file: ";
// opening file
// reading dna
  string filename;
  cin >> filename;
// inpute data
  cout << "Enter dna file: ";
  string dnaFile;
  cin >> dnaFile;

  fstream inFile(dnaFile);
  string dnastr;
  inFile >> dnastr;
  dna *d = new dna(dnastr);
  inFile.close();
// search statements
  cout << "\nSearching database...\n";

  fstream database(filename);
  string str, temp = "";
  database >> str;
// checking the freq
  vector<int> freq;
// allocating the string size
// printing , in strings
  for (int i = 0; i < (int)str.size(); i++) {
    if (str[i] == ',') {
      if (temp != "name") {
        dna target(temp);
        int cnt = 0;
// splice target and deleted the d after using new
// taking d and pointing it to splice
// and pushing the d then deleted it 
        while (d->splice(target)) {
          cnt++;
        }
        freq.push_back(cnt);
        delete d;
        d = new dna(dnastr);
      }
      temp = "";
    } else {
      temp += str[i];
    }
  }
  dna target(temp);
  int cnt = 0;

  while (d->splice(target)) {
    cnt++;
  }
 // push back the frew of cnt target 
  freq.push_back(cnt);

  bool ok = true;
  string name;
 // printing true or false statements
 // with index checking the name 
 // here i conver string to int for temp values
 // alloted idx=freq
  while (database >> str) {
    bool isName = true;
    int idx = 0;
    temp = "";
    ok = true;
    for (int i = 0; i < (int)str.size(); i++) {
      if (str[i] == ',') {
        if (isName) {
          name = temp;
          isName = false;
        } else {
          int count = stoi(temp);
          if (count != freq[idx]) {
            ok = 0;
            break;
          }
          idx++;
        }
        temp = "";
      } else {
        temp += str[i];
      }
    }
  // if the input is not ok will continue
  // These loops checks either need take break
  // or continue
    if (!ok) {
      continue;
    } else {
      int count = stoi(temp);
      if (count != freq[idx]) {
        ok = 0;
        break;
      }
      if (ok) {
        break;
      }
    }
  }
// closing the database
// deleteing the temp d
  database.close();
  delete d;
// checking if DNA matchs are not
  if (ok) {
    cout << "DNA match: " << name << endl;
  } else {
    cout << "No match.\n";
  }
  return 0;
}
