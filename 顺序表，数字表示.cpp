#include<iostream>
#include<stdexcept>//用于异常处理
using namespace std;
const int MAXSIZE=100;//顺序表的最大容量
template<typename ElementType>
class SeqList{
	private:
		ElementType Data[MAXSIZE];
		int Last;
	public:
		SeqList():Last(-1){}//初始化
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
				throw runtime_error("表满，无法插入");
			}
			if(i<1||i>Last+2){
				throw runtime_error("位置不合法");}
				for(int j=Last;j>=i-1;j--){
					Data[j+1]=Data[j];
				}
				Data[i-1]=X;
				Last--;
		}
		void Delete(int i){
			if(i<1||i>Last+1){
				throw runtime_error("不存在第"+to_string(i)+"个元素");
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
		cout<<"初始化顺序表："<<endl;
		cout<<"长度："<<list.length()<<",是否为空："<<(list.IsEmpty()?"是":"否")<<endl;
        cout<<"\n插入元素1到位置1："<<endl;
        list.Insert(1,1);
        list.Printf();
        cout<<"\n插入元素2到位置2："<<endl;
        list.Insert(2,2);
        list.Printf();
        cout<<"\n查找元素2的位置："<<endl;
        int pos=list.Find(2);
        cout<<"元素2的位置："<<(pos!=-1?to_string (pos+1):"未找到")<<endl;
        cout<<"\n尝试删除不存在的元素："<<endl;
        list.Delete(5);
        	}
        	catch(const exception&e){
				cerr<<"错误"<<e.what()<<endl;
			}
			return 0;
        	
}
