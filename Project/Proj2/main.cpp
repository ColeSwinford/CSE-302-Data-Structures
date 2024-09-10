#include "AUList.h"
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;
#include "BST.h"

AUList csvtoAUList(string csvfile) { //convert a csv file to a list structure
    AUList retCCList;
	ifstream ReadFile(csvfile); //open the csv file for reading
    string line, curvalue;
	getline(ReadFile, line); //throw away the first line (column names)
    while (getline(ReadFile,line)) {        
        stringstream ss(line); //turn the line into a string-stream
        int fielditer=0;
        csvRecord newrec;
		while(getline(ss, curvalue, ',')){ //Separate each variable per sample from the comma separator
            switch (fielditer) { //We need to explicitly convert values to the appropriate type (stoi=integer, stod=double)
            	case 0: newrec.Date=stoi(curvalue); break;
            	case 1: newrec.Volume=stod(curvalue); break;
            	case 2: newrec.Open=stoi(curvalue); break;
            	case 3: newrec.Close=stoi(curvalue); break;
            	case 4: newrec.High=stoi(curvalue); break;
            	case 5: newrec.Low=stoi(curvalue); break;
			}
            fielditer++;
        }
        retCCList.PutItem(newrec);
    }
    return retCCList;
}

int main(int argc, char** argv) {
	AUList csvData=csvtoAUList("AAPL.csv");
	cout<<"////////Trading Volume BST: "<<endl;
	csvData.printVolumeBST();
}
    
