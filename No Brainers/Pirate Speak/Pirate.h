#pragma once
#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

class Pirate{
  public:
    string translateWord(string);
    string translateSentence(string);
    void addToFile(string, string);
};

string Pirate::translateWord(string word){
  ifstream fin("pirate.csv", ios::in);
  string english, pirate;
  while(!fin.eof()){
    getline(fin, english, ',');
    getline(fin, pirate, '\n');
    if(english == word){
      fin.close();
      return pirate;
    }
  }
  fin.close();
  return word;
}

string Pirate::translateSentence(string input){
  stringstream sentReader(input);
  string pirateSentence = "";
  while(sentReader.good()){
    string temp;
    getline(sentReader, temp, ' ');
    pirateSentence += translateWord(temp) + " ";
  }
  return pirateSentence;
}

void Pirate::addToFile(string english, string pirate){
  ofstream fout("pirate.csv", ios::app);
  fout << endl << english << ", " << pirate;
  fout.close();
}
