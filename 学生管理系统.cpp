#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>//内存管理，随机数生成，程序控制，类型转化，
using namespace std;
class Date{
	private:
		int year;
		int month;
		int day;
	public:
		void setDate(){
			cout<<"请输入出生年份："<<year<<endl;
			cin>>year;
			cout<<"请输入出生月份："<<month<<endl;
			cin>>month;
			cout<<"请输入出生日："<<day<<endl;
		}
	int getYear(){
		return year;
	}
	int getMonth(){
		return month;
	}
	int getDay(){
		return day;
	}
};
class Student{
	public:
		int num;
		string name;
		Date birthday;
	public:
		void setStuvalue(Date &birthday){
			cout<<"请输入学号："<<endl;
			cin>>num;
			cout<<"请输入姓名："<<endl;
			cin>>name;
			birthday.setDate();
			}
			void setNum(){
				cin>>num;
			}
			int getNum(){
				return num;
			}
			void setName(){
				cin>>name;
			}
			string getName(){
				return name;
			}
			void setBirthday(Date &birthday){
				birthday.setDate();
			}
			int getBiryear(Date &birthday){
			return birthday.getYear();
			}
			int getBirmonth(Date &birthday){
				return birthday.getMonth();
			}
			int getBirday(Date &birthday){
				return birthday.getDay();
			}
			void InputStudent(Date &birthday){
				char choice;
				cout<<"请输入学生记录"<<endl;
				ofstream outfile("student.txt",ios::app);
				if(!outfile){
					cout<<"打开文件失败"<<endl;
					exit(0);//?
				}
				setStuvalue(birthday);
				outfile<<getNum()<<""<<getName()<<""<<birthday.getYear()<<""<<birthday.getMonth()<<""<<birthday.getDay()<<endl;
				cout<<"是否继续输入学生信息 输入Y继续或者 n 退出"<<endl;
				cin>>choice;
				if(choice=='y'){
					InputStudent(birthday);
				}
				outfile.close();
				system("pause");}
				//?
				void OutputStudent()
				{
					int count=0;
					int year;
					int month;
					int day;
					ifstream infile("student.txt",ios::in);
					if(!infile){
						cout<<"文件打开失败"<<endl;
					}
					while(!infile.eof()){//?
						infile>>num>>name>>year>>month>>day;
						cout<<""<<num<<""<<name<<""<<year<<""<<month<<""<<day<<endl;
						infile.get();
						if(infile.peek()=='\n')break;//?
					}
					infile.close();
					system("pause");}
					void FindBynum(){
						int count=0;
						int year;
						int month;
						int day;
						int findnum;
						bool find=false;
						cout<<"请输入要查找学生的学号：";
						cin>>findnum;
						ifstream infile("student.txt",ios::in);
						if(!infile){
							cout<<"打开文件失败"<<endl;
						}
						while(!infile.eof()){//?
							infile>>num>>name>>year>>month>>day;
							if(num==findnum){
								cout<<num<<""<<name<<""<<year<<""<<month<<""<<day<<endl;
								find=true;
							}
							infile.get();
							if(!find){
								cout<<"查无此人"<<endl;
							}
							infile.close();
							system("pause");
						}
					}
						void DeleteByNum()
						{
							int count=0;
							int year;
							int month;
							int day;
							int findnum;
							bool find=false;
							cout<<"请输入要删除学生的学号";
							cin>>findnum;
							ifstream infile("student.txt",ios::in);
							if(!infile){
								cout<<"打开文件失败"<<endl; 
							}
							ofstream outfile("studentcopy.txt",ios::app);
							if(!outfile){
								cout<<"文件打开失败"<<endl;
								exit(0);
								}
								//?
								while(!infile.eof()){
									infile>>num>>name>>year>>month>>day;
							if(num!=findnum){
									outfile<<num<<""<<name<<""<<year<<""<<month<<""<<day<<endl;
									}
								else{
	                             cout<<num<<""<<name<<""<<year<<""<<month<<""<<day<<endl;
                                find=true;
                                cout<<"已经删除该学生"<<endl;
                                
							}
							infile.get();
							if(infile.peek()=='\n')break;
								}
								if(!find){
									cout<<"查无此人"<<endl;
					
								}
								infile.close();
								outfile.close();
								remove("student.txt");
								rename("studentcopy.txt","student.txt");}
								
								void AlterNameByNum(){
									int count=0;
									int year;
									int month;
									int day;
									int findnum;
									string altername;
									bool find=false;
									cout<<"请输入要修改的学生的学号";
									cin>>findnum;
									cout<<"请输入要修改的学生姓名";
									cin>>altername;
									ifstream infile("student.txt",ios::in);
									if(!infile){
										cout<<"文件打开失败"<<endl;
										
									}
									ofstream outfile("studentcopy.txt",ios::app);
									if(!outfile){
										cout<<"打开文件失败"<<endl;
										exit(0);
									}
									while(!infile.eof()){
										infile>>num>>name>>year>>month>>day;
										if(num!=findnum){
											outfile<<num<<""<<name<<""<<year<<""<<month<<""<<day<<endl;
											
										}else{
											outfile<<num<<""<<altername<<""<<year<<""<<month<<""<<day<<endl;
											find=true;
											cout<<"已经修改该学生"<<endl;
										}
										infile.get();
										if(infile.peek()=='\n')break;
									}
									if(!find){
										cout<<"查无此人"<<endl;
									}
									infile.close();
									outfile.close();
									remove("student.txt");
									rename("studentcopy.txt","student.txt");
									}
									};
									void MainShow(){
										cout<<"学生信息系统"<<endl;
										cout<<"1.输入学生信息"<<endl;
										cout<<"2.浏览全部学生记录"<<endl;
										cout<<"3.按学号查找学生记录"<<endl;
										cout<<"4.按学号删除学生记录"<<endl;
										cout<<"5.按学号修改学生姓名"<<endl;
										cout<<"6.退出系统"<<endl;
									}
									
									void Select(){
										int num;
										Student stu;
										Date birthday;
										cout<<"请选择功能"<<endl;
										cin>>num;
										switch(num){
											case 1:
												stu.InputStudent(birthday);
												MainShow();
												Select();
												break;
										case 2:
											stu.OutputStudent();
											MainShow();
											Select();
											break;
										case 3:
											stu.FindBynum();
											MainShow();
										Select();
										break;
										case 4:
											stu.DeleteByNum();
											MainShow();
										Select();
										break;
										case 5:
											stu.AlterNameByNum();
											MainShow();
											Select();
											break;
										case 6:
											cout<<"系统结束，谢谢再见"<<endl;
											exit(0);
											break;}
									}
									int main(){
										MainShow();
										Select();
										return 0;
									}
