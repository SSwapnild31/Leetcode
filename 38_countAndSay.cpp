#include<iostream>
using namespace std;

class solution
{
public:
	string nextTerm(const string& s){
		string current;
		int i = 0;

		while(i < s.size()){
			int count = 1;

			while(i + 1 < s.size() && s[i] == s[i+1]){
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
		if(n <= 0) return "";

		string result = "1";
		for(int i=2; i<=n; i++){
			result = nextTerm(result);
		}
		return result;
	}
};

int main()
{
	int n;
	cout <<"n : ";
	cin >> n;
	
	solution sol;
	string s = sol.countAndSay(n);

	cout << s << endl;
	
	return 0;
}
