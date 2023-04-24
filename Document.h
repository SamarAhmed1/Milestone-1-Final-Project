#pragma once
#include <string>
#include <vector>
using namespace std;
class Document {
private:
	string directory;//for the filename to be transfered to directory and for the file to be opened
	string text; //variable will be used in fillInText to return text back to normal
	vector <string> sentences; //vector to contain all sentences
public:
	void populate(); //to check for "." in the text file then pushback into the vector sentences.
	void fillInText(); //by calling populate() and adjustSentence() functions it returns the senteces back into its orginal form and gives spaces in between, all is added in string text.
	void adjustSentence();//adjust sentence to remove space in a temp and pushback into sentences

	void set_directory(string d); //setter for directory
	string get_directory(); //getter for directory
	void set_txt(string t); //setter for text
	string get_txt(); //getter for text
	vector <string> get_sentenses(); // getter for the vector sentences
	string manip_sentenses(int n); //return sentences depending on the index n
	bool check_name(string name); //To check if file name is already found in Dir.txt incase user wants to name new file the same as something already found in their desktop
	void addToDir(double num, string n); //to check if the average plagarism is less than 5% then it will be added to Dir.txt to be used incase someone wants to recheck for plagarism
};