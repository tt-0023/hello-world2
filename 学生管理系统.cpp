#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>//�ڴ������������ɣ�������ƣ�����ת����
using namespace std;
class Date{
	private:
		int year;
		int month;
		int day;
	public:
		void setDate(){
			cout<<"�����������ݣ�"<<year<<endl;
			cin>>year;
			cout<<"����������·ݣ�"<<month<<endl;
			cin>>month;
			cout<<"����������գ�"<<day<<endl;
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
			cout<<"������ѧ�ţ�"<<endl;
			cin>>num;
			cout<<"������������"<<endl;
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
				cout<<"������ѧ����¼"<<endl;
				ofstream outfile("student.txt",ios::app);
				if(!outfile){
					cout<<"���ļ�ʧ��"<<endl;
					exit(0);//?
				}
				setStuvalue(birthday);
				outfile<<getNum()<<""<<getName()<<""<<birthday.getYear()<<""<<birthday.getMonth()<<""<<birthday.getDay()<<endl;
				cout<<"�Ƿ��������ѧ����Ϣ ����Y�������� n �˳�"<<endl;
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
						cout<<"�ļ���ʧ��"<<endl;
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
						cout<<"������Ҫ����ѧ����ѧ�ţ�";
						cin>>findnum;
						ifstream infile("student.txt",ios::in);
						if(!infile){
							cout<<"���ļ�ʧ��"<<endl;
						}
						while(!infile.eof()){//?
							infile>>num>>name>>year>>month>>day;
							if(num==findnum){
								cout<<num<<""<<name<<""<<year<<""<<month<<""<<day<<endl;
								find=true;
							}
							infile.get();
							if(!find){
								cout<<"���޴���"<<endl;
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
							cout<<"������Ҫɾ��ѧ����ѧ��";
							cin>>findnum;
							ifstream infile("student.txt",ios::in);
							if(!infile){
								cout<<"���ļ�ʧ��"<<endl; 
							}
							ofstream outfile("studentcopy.txt",ios::app);
							if(!outfile){
								cout<<"�ļ���ʧ��"<<endl;
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
                                cout<<"�Ѿ�ɾ����ѧ��"<<endl;
                                
							}
							infile.get();
							if(infile.peek()=='\n')break;
								}
								if(!find){
									cout<<"���޴���"<<endl;
					
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
									cout<<"������Ҫ�޸ĵ�ѧ����ѧ��";
									cin>>findnum;
									cout<<"������Ҫ�޸ĵ�ѧ������";
									cin>>altername;
									ifstream infile("student.txt",ios::in);
									if(!infile){
										cout<<"�ļ���ʧ��"<<endl;
										
									}
									ofstream outfile("studentcopy.txt",ios::app);
									if(!outfile){
										cout<<"���ļ�ʧ��"<<endl;
										exit(0);
									}
									while(!infile.eof()){
										infile>>num>>name>>year>>month>>day;
										if(num!=findnum){
											outfile<<num<<""<<name<<""<<year<<""<<month<<""<<day<<endl;
											
										}else{
											outfile<<num<<""<<altername<<""<<year<<""<<month<<""<<day<<endl;
											find=true;
											cout<<"�Ѿ��޸ĸ�ѧ��"<<endl;
										}
										infile.get();
										if(infile.peek()=='\n')break;
									}
									if(!find){
										cout<<"���޴���"<<endl;
									}
									infile.close();
									outfile.close();
									remove("student.txt");
									rename("studentcopy.txt","student.txt");
									}
									};
									void MainShow(){
										cout<<"ѧ����Ϣϵͳ"<<endl;
										cout<<"1.����ѧ����Ϣ"<<endl;
										cout<<"2.���ȫ��ѧ����¼"<<endl;
										cout<<"3.��ѧ�Ų���ѧ����¼"<<endl;
										cout<<"4.��ѧ��ɾ��ѧ����¼"<<endl;
										cout<<"5.��ѧ���޸�ѧ������"<<endl;
										cout<<"6.�˳�ϵͳ"<<endl;
									}
									
									void Select(){
										int num;
										Student stu;
										Date birthday;
										cout<<"��ѡ����"<<endl;
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
											cout<<"ϵͳ������лл�ټ�"<<endl;
											exit(0);
											break;}
									}
									int main(){
										MainShow();
										Select();
										return 0;
									}
