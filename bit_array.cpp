#include <iostream>
#include <vector>

using namespace std;

void print_set(vector<int> set){
	for (int i=0; i<set.size(); i++){
		if (set[i]!=0){
			cout << i << " ";
		}
	}
	cout << endl;
}

void add_elements(vector<int> &set, int num_elements){
	int tmp;
	for (int i=0; i<num_elements; i++){
		cin >> tmp;
		set[tmp] = 1;
	}
}

//void set_union(set1, set2){
//	cout << "Add code here...";
//}

//void set_difference(set1, set2){
//	cout << "Add code here...";
//}

void set_intersection(vector<int> &set1, vector<int> &set2){
	int size = 1000000;
	cout << "Intersection: ";
	for (int i=0; i<1000000; i++){
		if (set1[i] && set2[i]){
			cout << i << " ";
		}
	}
}

int main(){
	int tmp;
	int array_max_size = 1000000;
	vector<int> set1(array_max_size, 0);
	vector<int> set2(array_max_size, 0);
	add_elements(set1, 5);
	add_elements(set2, 6);
	print_set(set1);
	print_set(set2);
	set_intersection(set1, set2);
}
