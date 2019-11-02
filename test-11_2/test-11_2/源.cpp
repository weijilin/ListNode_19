#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;


#if 0
#include <list>

void TestList1()
{
	list<int> L1;
	list<int> L2(10, 5);

	//C++98
	int array[] = { 1, 2, 3 };
	list<int> L3(array, array + sizeof(array) / sizeof(array[0]));

	// C++11
	list<int> L4{ 1, 2, 3 };

	list<int> L5(L4);

	// C++98
	//list<int>::iterator it = L2.begin();

	// C++11
	auto it = L2.begin();
	while (it != L2.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	auto rit = L3.rbegin();
	while (rit != L3.rend())
	{
		cout << *rit << " ";
		++rit;
	}
	cout << endl;

	// auto e : L4--->让e按照值得方式去取L4中的每个元素---e实际是L4中每个元素的引用
	// auto& e : L4--->让e引用L4中的每个元素
	for (auto& e : L4)
		e *= 2;

	for (auto e : L4)
		cout << e << " ";
	cout << endl;
}


void TestList2()
{
	list<int> L{ 1, 2, 3, 4, 5, 6 };
	// O(N)
	auto it = find(L.begin(), L.end(), 5);
	if (it != L.end())
		cout << *it << endl;
	else
		cout << "5 is not in list" << endl;
}

void TestList3()
{
	list<int> L{ 1, 2, 3, 4, 5, 6 };
	auto it = L.begin();
	//L.clear();
	it = L.erase(it);
	cout << *it << endl;
}

void TestList4()
{
	list<int> L{ 1, 2, 3, 4, 5, 6 };
	L.reverse();
	for (auto e : L)
		cout << e << " ";
	cout << endl;
}

void TestList5()
{
	list<int> L1{ 1, 5, 2, 1 };
	L1.unique();

	L1.sort();
	L1.unique();

	list<int> L2{ 9, 1, 0 };
	L2.sort();

	L1.merge(L2);
	for (auto e : L1)
		cout << e << " ";
	cout << endl;


}

int main()
{
	//TestList1();
	//TestList3();
	//TestList4();
	TestList5();
	return 0;
}
#endif
