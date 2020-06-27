/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   parse_a.h
 * Author: lantzlowe
 *
 * Created on June 20, 2020, 8:31 AM
 */

#include <iostream>
#include <fstream>
#include <string>
#include <array>

using namespace std;

#ifndef PARSE_A_H
#define PARSE_A_H

void parse_a_1(string input) {
    char delimiter = ' ';
    int arr[3];
    string line, parsed;
    int count, pos, newVal = 0;
    
    ifstream currFile(input);
    ofstream outputFile("/Users/lantzlowe/Desktop/UNC-Charlotte/Senior (2020-2021)/ITCS 3134/Assignment3/1_parsed.txt");
    
    if(currFile.is_open() && outputFile.is_open()) {
        outputFile << "RGB\n768\n768\n";
            while ( getline (currFile,line) )
            {
                if(line != "RGB" && line != "768") {
                    for(int l = 0; l < 3; l++) {
                        pos = line.find(delimiter);
                        if(pos == line.find(delimiter)) {
                            parsed = line.substr(0, pos);
                            line.erase(0, pos + 1);
                            try {
                                arr[l] = stoi(parsed, nullptr, 10);
                                //cout << temp << endl;
                            } catch (invalid_argument const &e) {
                                    cout << "Bad input: invalid_argument thrown " << arr[l] << "\n";
                            } catch (out_of_range const &e) {
                                cout << "Bad string: out_of_range thrown\n";
                            } 
                            if(l == 2) {
                                newVal /= 3;
                            }
                            else {
                                newVal += arr[l];
                            }
                            //cout << arr[l] << " ";
                        }
                    }
                    //cout << newVal << " " << newVal << " " << newVal << endl;
                    outputFile << newVal << " " << newVal << " " << newVal << endl;
                    //cout << endl;
                    count++;
                }
                    
            }
        cout << count << endl;
        currFile.close();
        outputFile.close();
    }
}

void parse_a_2(string input) {
    char delimiter = ' ';
    int arr[3];
    string line, parsed;
    int count, pos, newVal = 0;
    
    ifstream currFile(input);
    ofstream outputFile("/Users/lantzlowe/Desktop/UNC-Charlotte/Senior (2020-2021)/ITCS 3134/Assignment3/2_parsed.txt");
    
    if(currFile.is_open() && outputFile.is_open()) {
        outputFile << "RGB\n768\n768\n";
            while ( getline (currFile,line) )
            {
                if(line != "RGB" && line != "768") {
                    for(int l = 0; l < 3; l++) {
                        pos = line.find(delimiter);
                        if(pos == line.find(delimiter)) {
                            parsed = line.substr(0, pos);
                            line.erase(0, pos + 1);
                            try {
                                arr[l] = stoi(parsed, nullptr, 10);
                                //cout << temp << endl;
                            } catch (invalid_argument const &e) {
                                    cout << "Bad input: invalid_argument thrown " << arr[l] << "\n";
                            } catch (out_of_range const &e) {
                                cout << "Bad string: out_of_range thrown\n";
                            } 
                            if(l == 1) {
                                newVal += (0.5 * arr[l]);
                            }
                            else {
                                newVal += (0.25 * arr[l]);
                            }
                            
                            if(l == 2) {
                                newVal /= 3;
                            }
                            //cout << arr[l] << " ";
                        }
                    }
                    //cout << newVal << " " << newVal << " " << newVal << endl;
                    outputFile << newVal << " " << newVal << " " << newVal << endl;
                    //cout << endl;
                    count++;
                }
                    
            }
        cout << count << endl;
        currFile.close();
        outputFile.close();
    }
}

void parse_a_3(string input) {
    char delimiter = ' ';
    int arr[3];
    string line, parsed;
    int count, pos, newVal = 0;
    
    ifstream currFile(input);
    ofstream outputFile("/Users/lantzlowe/Desktop/UNC-Charlotte/Senior (2020-2021)/ITCS 3134/Assignment3/3_parsed.txt");
    
    if(currFile.is_open() && outputFile.is_open()) {
        outputFile << "RGB\n768\n768\n";
            while ( getline (currFile,line) )
            {
                if(line != "RGB" && line != "768") {
                    for(int l = 0; l < 3; l++) {
                        pos = line.find(delimiter);
                        if(pos == line.find(delimiter)) {
                            parsed = line.substr(0, pos);
                            line.erase(0, pos + 1);
                            try {
                                arr[l] = stoi(parsed, nullptr, 10);
                                //cout << temp << endl;
                            } catch (invalid_argument const &e) {
                                    cout << "Bad input: invalid_argument thrown " << arr[l] << "\n";
                            } catch (out_of_range const &e) {
                                cout << "Bad string: out_of_range thrown\n";
                            } 
                            if(l == 0) {
                                newVal += (0.299 * arr[l]);
                            }
                            else if (l == 1) {
                                newVal += (0.587 * arr[l]);
                            }
                            else if(l == 2) {
                                newVal += (0.114 * arr[l]);
                                newVal /= 3;
                            }
                            //cout << arr[l] << " ";
                        }
                    }
                    //cout << newVal << " " << newVal << " " << newVal << endl;
                    outputFile << newVal << " " << newVal << " " << newVal << endl;
                    //cout << endl;
                    count++;
                }
                    
            }
        cout << count << endl;
        currFile.close();
        outputFile.close();
    }
}

#endif /* PARSE_A_H */

