#include "class.h"
#include <iostream>
#include <windows.h>
#include <string>
#include <urlmon.h>
#include <regex>
#pragma comment(lib, "urlmon.lib") //URL handling Module
#define getURL URLOpenBlockingStreamA // Generates a URL to open a specific page
#define RED 4 // Any output with a 4 will be in red text. Simply to add a little organization to the program.
#define WHITE 15 // Any output with an 15 will be in white text. Simply to add a little organization to the program.

using namespace std;

int main()
{
	int i = 3;
	int textcolor = RED;
	string s;
	IStream* stream;
	const char* Website = "WebsiteURL";
	
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl << endl << "*Website URL Extractor Tool 0.01*" << endl << endl << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);			
	system("pause"); // Will pause the program until an input is entered to indicate the version of the extractor
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
	
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl << endl << "Enter the website URL you wish to extract:";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	cout << endl << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl << endl << "Translate Text: " << endl << endl;

	getline(cin,Website); // Will need adjusting, but this will be where the Website URL entered shall be analyzed for 
					// URLs and extracted.
					
	if (getURL(0, Website, &stream, 0, 0))
		{
		cout << "URL could not be extracted, did you enter a valid URL?";
		return -1;
		}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
	
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	stream->Release();
	cout << s << endl;
	cout << "Extracting the URL, please wait..."<< endl; 
	regIter::regex_type rx("");
	regIter n(s.begin(), s.end(), rx), e;
	// Should extract the URL amount, may need adjustment.
	
	int URLamount = 0;
	while (n != e)
	{
		cout << "Number of URL Links on the page: " << ++URLamount;
		cout << n->str() << "\r\n" << endl; // Should properly print out the URL amount, may need adjustment.
		n++;
	}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
	
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
    // Unit Test 
<<<<<<< HEAD
	
	return 0;

}

