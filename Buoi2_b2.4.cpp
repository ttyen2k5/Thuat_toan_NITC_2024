#include <bits/stdc++.h>
using namespace std;

void findDuplicates(const string& s) 
{
    unordered_map<char, int> charCount;
    // Ðem so lan xuat hien cua moi ktu trong xau
    for (char c : s) 
	  {
        charCount[c]++;
    }
    cout << "Cac ky tu bi trung lap trong xau la: ";
    for (const auto& pair : charCount) 
  	{
        if (pair.second > 1) 
		    {
            cout << pair.first << " ";
        }
    }
    cout << endl;
}

int main() 
{
    string s;
    cout << "Nhap xau s: ";
    getline(cin, s);
    findDuplicates(s);
    return 0;
}
