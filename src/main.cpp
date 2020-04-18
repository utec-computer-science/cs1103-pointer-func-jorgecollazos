#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void * _bubblesort_(
	void * _array_, 
	void (*_puntero_) (void *, int _i, int _k),
	int _tam_
){
	int _k = 0;
	for (int i = 0; i < _tam_ ; i ++)
		for(int k = 0; k < _tam_-1; k++)
				_puntero_(_array_,i,k);
	return _array_;
}

void  _b_int_ (void * _vector_, int _i,int _k){
	int* _vec = (int*)_vector_;
	if(_vec[_i] < _vec[_k])
		swap(_vec[_i],_vec[_k]);
}

void  _b_float_ (void * _vector_, int _i,int _k){
 	float* _vec = (float*)_vector_;
	if(_vec[_i] < _vec[_k])
		swap(_vec[_i],_vec[_k]);
}

void  _b_double_ (void * _vector_, int _i,int _k){
	double* _vec = (double*)_vector_;
	if(_vec[_i] < _vec[_k])
		swap(_vec[_i],_vec[_k]);
}

void  _b_char_ (void * _vector_, int _i,int _k){
	char* _vec = (char*)_vector_;
	if(_vec[_i] < _vec[_k])
		swap(_vec[_i],_vec[_k]);
}

int main(){
	int i = 0, n;
	int _array_1 [5];
    srand(time(NULL));
	for (int i = 0; i < 5 ; ++i){
		n =	rand()%500;
		_array_1[i] = n;

	}
	float _array_2 [5] = {4.4,5.4,9.1,7.4,2.2};
	double _array_3 [5] = {3.0,8.0,2.0,4.0,15.0};
	char _array_4 [6] = {'k','a','r','l','o','s'};

		
	cout<<"\tSort int array"<<endl;
	cout<<"Array: ";
	for(auto i : _array_1)
        cout << i << " ";
	cout<<endl;
	_bubblesort_(_array_1,_b_int_,5);
	cout<<"Sorted array: ";
	for(auto i : _array_1)
        cout << i << " ";
	cout<<endl;
	cout<<endl;

	cout<<"\tSort float array"<<endl;
	cout<<"Array: ";
	for(auto i : _array_2)
        cout << i << " ";
	cout<<endl;
	_bubblesort_(_array_2,_b_float_,5);
	cout<<"Sorted array: ";
	for(auto i : _array_2)
        cout << i << " ";
	cout<<endl;
	cout<<endl;

	cout<<"\tSort double array"<<endl;
	cout<<"Array: ";
	for(auto i : _array_3)
        cout << i << " ";
	cout<<endl;
	_bubblesort_(_array_3,_b_double_,5);
	cout<<"Sorted array: ";
	for(auto i : _array_3)
        cout << i << " ";
	cout<<endl;
	cout<<endl;
		
	cout<<"\tSort char array"<<endl;
	cout<<"Array: ";
	for(auto i : _array_4)
        cout << i << " ";
	cout<<endl;
	_bubblesort_(_array_4,_b_char_,6);
	cout<<"Sorted array: ";
	for(auto i : _array_4)
        cout << i << " ";
	cout<<endl;

    return 0;
}