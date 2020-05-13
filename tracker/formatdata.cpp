#include<iostream>
#include<fstream>
#include<string>
using namespace std;
string before = "function getData(){ return [\n";
string after = "]}\n";
int main(){
    ifstream file ("data.txt");
    string datastr = "";
    if (file.is_open())
    {
        string line="";
        while ( getline (file,line) ){
            int i=0;
            string newline="[\'";
            //cout << line[line.length()-1] << " <- \n";
            for (;i<line.length();i++){
                if(line[i]==','){ newline += "\',\'";} 
                else { newline += line[i];}
            }
            // .. S,S, => .. S','S','
            if (line[line.length()-1]==',' && i-2>=0){
                newline[line.length()-2]=']';
                newline[line.length()-1]=',';                
            } else {
                // ..S,S => ..S','S
                newline += "\'],";
            }

            datastr += newline + "\n";
        }
    }
    file.close();
    
    // CreateFile
    string newFile = before + datastr + after;
    ofstream data1;
    data1.open("data.js");
    data1 << newFile;
    data1.close();

    return 0;
}