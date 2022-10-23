#include <string>
#include <vector>
using namespace std;

int task1( int number ) {
  int result = number; //test solution, changes need to be made, implement stack
  int final =1;
  stack <int> numbers;
  for (int i = 0; i < number; i++)
  {
    numbers.push(result--);
  }
  for (int i = 0; i < number; i++)
  {
    int a =numbers.top();
    final *=a;
    numbers.pop();
  }
  
  return final;
}

bool task2 (const string& list) {
    return false;
}

bool task3(const vector<vector<int>>& g, unsigned from, unsigned to) {
	return false;
}

string task4 (const string& input) {
    return "";
}

bool task5(vector<vector<int>>g, unsigned from, unsigned to) {
	return false;
}

bool task6(const string& a, const string& b) {
	return false;
}