#include<iostream>
#include<stdexcept>//�����쳣����
using namespace std;
const int MAXSIZE=100;//˳�����������
template<typename ElementType>
class SeqList{
	private:
		ElementType Data[MAXSIZE];
		int Last;
	public:
		SeqList():Last(-1){}//��ʼ��
		int Find(ElementType X)const{
			int i=0;
			while(i<=Last&&Data[i]!=X){
				i++;
			}if(i>Last){
				return -1;
			}else{
				return i;
			}
		}
	    void Insert(ElementType X,int i){
			if(Last==MAXSIZE-1){
				throw runtime_error("�������޷�����");
			}
			if(i<1||i>Last+2){
				throw runtime_error("λ�ò��Ϸ�");}
				for(int j=Last;j>=i-1;j--){
					Data[j+1]=Data[j];
				}
				Data[i-1]=X;
				Last--;
		}
		void Delete(int i){
			if(i<1||i>Last+1){
				throw runtime_error("�����ڵ�"+to_string(i)+"��Ԫ��");
			}
			for(int j=i;j<=Last;j++){
				Data[j-1]=Data[j];
			}
			Last--;
		}
		int length()const{
			return Last+1;
		}
		bool IsEmpty()const{
			return Last==-1;
		}
		void Printf()const{
			cout<<"[";
			for(int i=0; i<=Last;i++){
				cout<<Data[i];
				if(i<Last){
					cout<<",";
				}
			}
			cout<<"]"<<endl;
		}
};
int main(){
	try {
		SeqList<int>list;
		cout<<"��ʼ��˳���"<<endl;
		cout<<"���ȣ�"<<list.length()<<",�Ƿ�Ϊ�գ�"<<(list.IsEmpty()?"��":"��")<<endl;
        cout<<"\n����Ԫ��1��λ��1��"<<endl;
        list.Insert(1,1);
        list.Printf();
        cout<<"\n����Ԫ��2��λ��2��"<<endl;
        list.Insert(2,2);
        list.Printf();
        cout<<"\n����Ԫ��2��λ�ã�"<<endl;
        int pos=list.Find(2);
        cout<<"Ԫ��2��λ�ã�"<<(pos!=-1?to_string (pos+1):"δ�ҵ�")<<endl;
        cout<<"\n����ɾ�������ڵ�Ԫ�أ�"<<endl;
        list.Delete(5);
        	}
        	catch(const exception&e){
				cerr<<"����"<<e.what()<<endl;
			}
			return 0;
        	
}
