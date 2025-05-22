//3.	将九九乘法表写入文件并从文件中读到显示器上进行显示。
#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;
string table(){
	string result;
	    for (int i = 1; i <= 9; ++i) {
	        for (int j = 1; j <= i; ++j) {
	            result += to_string(j) + "×" + to_string(i) + "=";
	            if (i * j < 10) result += " "; 
	            result += to_string(i * j) + "  ";
	        }
	        result += "\n"; 
	    }
	    return result;
	 }
void writeToFile(const string& filename){
	ofstream outfile(filename);
	    if (!outfile) {
	        cout<< "无法打开文件进行写入: " << filename << endl;
	        return;
	    }
	    outfile << table();
	    outfile.close();
	    cout << "乘法表已成功写入文件: " << filename << endl;
	}
	
void readfromFile(const string& filename){
	ifstream infile(filename);
	if(!infile){
		cerr<<"无法打开文件进行读取文件："<<filename<<endl;
		return ;
	}
    cout<< "\n从文件读取的乘法表内容:\n";
	    cout << "-------------------------\n";
	    string line;
	    while (getline(infile, line)) {
	        cout << line << endl;
	    }
	    infile.close();
	}


int main(){
	const string filename = "Multiplication_table.txt";
	    writeToFile(filename);
	    readfromFile(filename);
	    return 0;
    
}
