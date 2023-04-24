#pragma once
#include <iostream>
#include <map>
#include <fstream>
#include <chrono>
#include "Document.h"
#include "File_compilation.h"
#include "structPlagerizedSentence.h"
class Program_run : public Document, public file_compilation {
private:
	file_compilation c;
	Document doc;
	vector<plagiarized_sentence> KMP_result;
	vector<plagiarized_sentence> Rabin_result;
	vector<plagiarized_sentence> Hamming_result;
	vector<plagiarized_sentence> Booyer_result;
	vector<plagiarized_sentence> BrutForce_result;
	vector<string> percentage_KMP;
	vector<string> percentage_hamming;
	vector<string> percentage_Booyer;
	vector<string> percentage_rabin;
	vector<string> percentage_brutForce;
	/*long long time_KMP;
	long long time_Rabin;
	long long time_Booyer;
	long long time_Hamming;
	long long time_BrutForce;*/
	int Rabin_value;
	int Hamming_value;
	int KMP_value;
	int Booyer_value;
	int BrutForce_value;
public:
	//chacks if ther is a match between the input and the stored text using KMP
	void check_match_kmp();

	//chacks if ther is a match between the input and the stored text using Rabin Karp
	void check_match_rabin();

	//chacks if ther is a match between the input and the stored text using Booyer Moore
	void check_match_Booyer();

	//chacks if ther is a match between the input and the stored text uSing Hamming Distance
	void check_match_hamming();

	//chacks if ther is a match between the input and the stored text using Brute Force
	void check_match_brutForce();

	// getter fot the document Directory adn calles the populate functiona and adjuct Sentence
	void get_doc(string file_name);

	//Returens struct of index int i of hamming result
	plagiarized_sentence manip_Hamming_result(int i);

	//returns a vector of struct
	vector<plagiarized_sentence> manip_Hamming();

	// Returens struct of index int i of hamming result
	plagiarized_sentence manip_Rabin_result(int i);

	//returns a vector of struct Rabin Karp
	vector<plagiarized_sentence> manip_Rabin();

	// Returens struct of index int i of KMP Result
	plagiarized_sentence manip_KMP_result(int i);

	//returns a vector of struct KMP
	vector<plagiarized_sentence> manip_KMP();

	// Returens struct of index int i of Booyer result
	plagiarized_sentence manip_Booyer_result(int i);

	//returns a vector of struct Booyer Moore
	vector<plagiarized_sentence> manip_Booyer();

	// Returens struct of index int i of Brut Force result
	plagiarized_sentence manip_BrutForce_result(int i);

	//returns a vector of struct Brute Force
	vector<plagiarized_sentence> manip_BrutForce();

	//getter for pagerisum persentage
	int get_Rabin_value();

	//getter for pagerisum persentage
	int get_Hamming_value();

	//getter for pagerisum persentage
	int get_KMP_value();

	//getter for pagerisum persentage
	int get_Booyer_value();

	//getter for pagerisum persentage
	int get_BrutForce_value();
};