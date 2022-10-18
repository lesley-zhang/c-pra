#include<iostream>
#include<string>
#include<vector>
#include<complex>

using namespace std;

//class Triangular{
//	public:
//		Triangular();
//		Triangular(int len);
//		Triangular(int len, int beg_pos);
//	private:
//		int _length;
//		int _beg_pos;
//		int _next;
//};
//
//Triangular::Triangular(){
//	_length = 1;
//	_beg_pos = 1;
//	_next = 0;
//}
//
////Triangular::Triangular(int len, int bp){
////	_length = len>0 ? len : 1;
////	_beg_pos = bp>0 ? bp : 1;
////	_next = _beg_pos - 1;
////}
//
//
////这也是一种构造函数
//Triangular::Triangular(const Triangular &rhs): _length(rhs._length ), _beg_pos(rhs._beg_pos), _next(rhs._beg_pos-1)
//{
//	
//}

class Triangular{
	public:
		friend ostream & operator << (ostream &out, const complex &c);
    	friend istream & operator >> (istream &in,  complex &c);
		Triangular()=default;
		Triangular(int len);
		Triangular(int len, int beg_pos);
		int length() const{return _length; }
		int beg_pos() const{return _beg_pos; }
		int elem(int pos) const;
		bool next(int& ) const;
		void next_reset() const{_next = _beg_pos - 1; };
		
		
	private:
		string _name;
		int _length;
		int _beg_pos;
		mutable int _next;
		vector<int> _elems;
};

ostream & operator << (ostream &out, const Complex &c)
{
    out << c.real;
    out << "+i" << c.imag << endl;
    return out;
}
 
istream & operator >> (istream &in,  Complex &c)
{
    cout << "Enter Real Part ";
    in >> c.real;
    cout << "Enter Imagenory Part ";
    in >> c.imag;
    return in;
}

Triangular::Triangular(int len): _name("Triangular"){
	_beg_pos = 1;
	_next = _beg_pos - 1;
}

//构造函数
Triangular::Triangular(int len, int bp ): _name("Triangular"){
	_length = len > 0 ? len : 1;
	_beg_pos = bp > 0? bp : 1;
	_next = _beg_pos - 1;
}

bool Triangular::next(int& value) const{
	if(_next < _beg_pos + _length - 1){
		value = _elems[_next++];
		return true;
	}
	return false;
}

int Triangular::elem(int pos) const{
	return _elems[pos-1];
}

int sum(const Triangular& train){
	int beg_pos = train.beg_pos();
	int length  = train.length();
	int sum = 0;
	
	for(int ix = 0; ix < length; ++ix){
		sum += train.elem(beg_pos+ix);
	}
	return sum;
}

int main(){
	Triangular tri(4);
	cout << tri << "-- sum of elemens: " << sum(tri) << endl;
	
	Triangular tri2(4, 3);
	//cout << tri2 << "-- sum of elemens: " << sum(tri2) << endl;
	
	Triangular tri3(4, 8);
	//cout << tri3 << "-- sum of elemens: " << sum(tri3) << endl;
	return 0;
	
}



