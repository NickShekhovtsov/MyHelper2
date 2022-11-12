//Опишите функцию группировки элементов вектора в ассоциативный массив со строковым ключом.
//Если элементов становится больше n то заводить новый ключи с суффиксом 2,3,4 итд.

#include <iostream>
#include <vector>
#include<map>
#include<string>
using namespace std;
const int n = 5;
const vector<int> Vec = { 1 ,2, 3, 4, 5, 6,7,8,9,10,11,12,13,14,15,16,17 };
int count_of_iteration();

string make_key(int index)
{
	return string("key" + to_string(index + 1));
}

vector<int> make_cycle(int start, int finish, vector<int> out_vec, vector <int> Vec)
{
	if (start < finish)
	{
		out_vec.push_back(Vec[start]);
		start++;
		return make_cycle(start, finish, out_vec, Vec);
	}
	else
	{
		return out_vec;
	}
}

map<string, vector<int>> map_cycle(int start, int finish, map<string, vector<int>> Map) //главная функция
{
	if (start < finish)
	{
		Map.insert(make_pair(make_key(start), make_cycle(start * n, start * n + n, vector<int>(), Vec)));
		start++;
		return map_cycle(start, finish, Map);
	}
	else
	{
		if (Vec.size() % n != 0)
		{
			Map.insert(make_pair(make_key(Vec.size() / n), make_cycle(count_of_iteration() * n, Vec.size(), vector<int>(), Vec)));

		}
		return Map;
	}
}

int count_of_iteration()
{
	return Vec.size() / n;
}
int mememain()
{
	setlocale(LC_ALL, "RUSSIAN");
	map <string, vector<int>> Map = map_cycle(0, count_of_iteration(), map <string, vector<int>>());

	map <string, vector<int>> ::iterator it = Map.begin();

	for (int i = 0; it != Map.end(); it++, i++) {  // выводим их
		cout << i << ") Ключ " << it->first << " ";

		for (int j = 0; j < it->second.size(); j++)
		{
			cout << it->second[j] << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;

}
