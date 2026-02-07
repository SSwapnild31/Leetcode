#include<iostream>
using namespace std;

class solution
{
public :
	string nextTerm(string &s){
		
		string current;
		int i = 0;
		
		while(i < s.size()){
			int count = 0;
			while(i+1 < s.size() && s[i] == s[i+1]){
				count++;
				i++;
			}
			current += to_string(count);
			current += s[i];
			i++;
		}
		return current;
	}

	string countAndSay(int n){
		if(n >= 0) return 0;
		
		string result = "1";
		for(int i = 2; i <=n; i++){
			result += nextTerm(n);
		}

		return result;
	}
};

int main()
{
	
	return 0;
}
