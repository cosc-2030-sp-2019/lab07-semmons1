//Stefan Emmons
//COSC 2030 - 01
//Lab 07
//Dr.Hill, or Pedro Marquez
//4_2_2019


#include <iostream>
#include <vector>

using namespace std;

void print_set(vector<int> set)
{
	for (int i=0; i<set.size(); i++)
	{
		if (set[i]!=0)
		{
			cout << i << " ";
		}
	}
	cout << endl;
}

void print_list(vector<int> list)
{
	for (int i = 0; i < list.size(); i++)
	{
		while (list[i] > 0)
		{
			cout << i << " ";
			list[i]--;
		}
	}
	cout << endl;
}

void add_elements(vector<int> &set, int num_elements)
{
	int tmp;
	cout << "Please enter " << num_elements << " elements for this set: ";
	for (int i=0; i<num_elements; i++)
	{
		cin >> tmp;
		set[tmp] = 1;
	}
}

void add_elements_list(vector<int> &list, int num_elements)
{
	int tmp_list;
	cout << "Now, enter " << num_elements << " elements into this list: ";
	for (int i = 0; i < num_elements; i++)
	{
		cin >> tmp_list;
		list[tmp_list]++;
	}
	cout << "Here are the ordered list elements you have entered.\n";
}

void set_union(vector <int> &set1, vector <int> &set2)
{
	int size = 1000000;
	cout << "Union: \n";
	for (int i = 0; i < 1000000; i++)
	{

		if (set1[i] == 1 || set2[i] == 1)
		{
			cout << i << " ";
		}
	}
	cout << endl;
}

void set_difference(vector <int> &set1, vector <int> &set2)
{
	int size = 1000000;
	cout << "Difference: \n";
	for (int i = 0; i < 1000000; i++)
	{
		if (set1[i] != set2[i])
		{
			cout << i << " ";
		}
	}
	cout << endl;
}

void set_intersection(vector<int> &set1, vector<int> &set2)
{
	int size = 1000000;
	cout << "Intersection: \n";
	for (int i=0; i<1000000; i++){
		if (set1[i] && set2[i]){
			cout << i << " ";
		}
	}
	cout << endl;
}

int main()
{
	int tmp;
	int tmp_list;
	int elementsOfSet1, elementsOfSet2;
	cout << "Please specify how many elements you want in the first set: ";
	cin >> elementsOfSet1;
	cout << "Please specify how many elements you want in the second set: ";
	cin >> elementsOfSet2;
	int array_max_size = 1000000;
	vector<int> set1(array_max_size, 0);
	vector<int> set2(array_max_size, 0);
	add_elements(set1, elementsOfSet1);
	add_elements(set2, elementsOfSet2);
	print_set(set1);
	print_set(set2);
	set_intersection(set1, set2);
	set_difference(set1, set2);
	set_union(set1, set2);
	vector<int> list(array_max_size, 0);
	add_elements_list(list, 6);
	print_list(list);
	system("pause");
	return 0;
}
