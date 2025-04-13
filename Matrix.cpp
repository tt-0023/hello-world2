#include<iostream>
#include<string>
using namespace std;
class Matrix{
	public:
		int rows;
		int cols;
		int **data;
	public:
		Matrix(int r,int c):rows(r),cols(c){
			data=new int *[rows];
			for(int i=0;i<=rows;++i){
				data[i]=new int [cols]();
			}
		}
		~Matrix(){
			 for (int i = 0; i < rows; ++i) {
			        delete[] data[i];
			    }
			    delete[] data;
		}
		int setElement(int i,int j,int value){
			if(i>=0&&i<rows&&j>=0&&j<cols){
				data[i][j]=value;
			}
			return value;
		}
		int  getElement(int i,int j)const{
			    if (i >= 0 && i < rows && j >= 0 && j < cols) {
			        return data[i][j];
			    }
			
		}
		void display() const {
		    for (int i = 0; i < rows; ++i) {
		        for (int j = 0; j < cols; ++j) {
		            cout << data[i][j] << " ";
		        }
		        cout << endl;
		    }
		}
		friend Matrix multiply(const Matrix& m1, const Matrix& m2) ;
		friend bool canMultiply(const Matrix& m1, const Matrix& m2);
};
bool canMultiply(const Matrix& m1,const Matrix& m2){
	return (m1.cols==m2.rows);
}
Matrix multiply(const Matrix& m1,const Matrix& m2){
	Matrix result(m1.rows, m2.cols);
    for (int i = 0; i < m1.rows; ++i) {
        for (int j = 0; j < m2.cols; ++j) {
            result.data[i][j] = 0;
            for (int k = 0; k < m1.cols; ++k) {
                result.data[i][j] += m1.data[i][k] * m2.data[k][j];
            }
        }
    }
    return result;
	}
int main(){
	Matrix s1(2,3),s2(3,2);
	s1.setElement(1,3,5);s1.setElement(2,4,6);s1.setElement(7,9,11);
	s1.setElement(2,4,8);s1.setElement(10,12,14);s1.setElement(16,18,20);
	
	s2.setElement(12,34,56);s2.setElement(54,32,10);
	s2.setElement(19,18,17);s2.setElement(16,15,14);
	s2.setElement(13,12,11);s2.setElement(10,9,8);
	if (canMultiply(s1, s2)) {
	        Matrix product = multiply(s1, s2);
	        product.display();
	    } 
	return 0;
}
