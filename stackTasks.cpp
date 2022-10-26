#include <string>
#include <vector>
#include <stack>
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
    stack <char> phrase;
    bool res = false;
    for (int i = 0; i < list.size(); i++)
    {
        phrase.push(list[i]);
    }
    for (int i = 0; i < phrase.size(); i++)
    {
      char sym1 = phrase.top();
    phrase.pop();
    char sym2 =phrase.top();
    phrase.pop();

    if (sym1==')' && sym2=='(')
    {
      res = true;
    }else if (sym1==']' && sym2=='[')
    {
      res = true;
    }else if (sym1=='}' && sym2=='{')
    {
      res = true;
    }
    }
    return res;
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