//3.	���žų˷���д���ļ������ļ��ж�����ʾ���Ͻ�����ʾ��
#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;
string table(){
	string result;
	    for (int i = 1; i <= 9; ++i) {
	        for (int j = 1; j <= i; ++j) {
	            result += to_string(j) + "��" + to_string(i) + "=";
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
	        cout<< "�޷����ļ�����д��: " << filename << endl;
	        return;
	    }
	    outfile << table();
	    outfile.close();
	    cout << "�˷����ѳɹ�д���ļ�: " << filename << endl;
	}
	
void readfromFile(const string& filename){
	ifstream infile(filename);
	if(!infile){
		cerr<<"�޷����ļ����ж�ȡ�ļ���"<<filename<<endl;
		return ;
	}
    cout<< "\n���ļ���ȡ�ĳ˷�������:\n";
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
