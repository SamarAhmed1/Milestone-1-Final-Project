#pragma once
#define NO_OF_CHARS 256
#include <iostream>
#include <string>
#include <vector>
#include "Document.h"
class file_compilation
{
private:
	vector<Document> docs; //vector of type Document to contain all the required functions and attrbiutes from the class Document
public:
	file_compilation();//constructor to automatically open the file Dir.txt which contains list of all the files that will be used to check for plagarism and it is adjusted
	bool hammingDistance(string text, string pattern); //function to calculate hamming distance, used for plagarism, adjusted to be a bool function where if the text and pattern size are the same it will return true else return false
	vector<int> computeLPS(string pattern); // Fills lps[] for given pattern pat[0..M-1]
	bool kmpSearch(string pattern, string text); //searches for occurances of words in a string of text
	bool rabinKarp(string pat, string txt); //compares hash value for txt with hash value of pattern, if hash value match then it will check for characters only, if p == t and pat[0...M-1] = txt[i, i+1,...i+M-1] it will return true, else it will return false
	void badCharHeuristic(string str, int size, int badchar[NO_OF_CHARS]);//The preprocessing function for Boyer Moore's
	bool boyerMoore(string pat, string txt); //A pattern searching function that uses Bad Character Heuristic of Boyer Moore Algorithm, if the pattern was not found it will return false
	bool bruteForceStringMatch(string pattern, string text); //algorthim that compares length,, if match is found it will return true else returns false.
	vector <Document> get_docs(); //getter for vector docs
	Document manip_docs(int n); //getter for vector docs depending on index n
};