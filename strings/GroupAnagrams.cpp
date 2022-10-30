/*The two strings, X and Y, are anagrams if by rearranging X's letters,
we can get Y using all the original letters of X exactly once. For example, all these pairs are anagrams as lhs can be rearranged to rhs and vice-versa.*/



#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <set>
#include <algorithm>

using namespace std;
 

set<set<string>> groupAnagrams(vector<string> const &words)
{
  
    set<set<string>> anagrams;
 
    // constructing a vector from the given words with each word sorted
    vector<string> list(words);
    for (string &s: list) {        // don't forget to put `&`
        sort(s.begin(), s.end());
    }
 
   
    unordered_map<string, vector<int>> map;
    for (int i = 0; i < words.size(); i++) {
        map[list[i]].push_back(i);
    }
 
    
    for (auto itr: map)
    {
        set<string> anagram;
        for (int index: itr.second) {
            anagram.insert(words[index]);
        }
        if (anagram.size() > 1) {
            anagrams.insert(anagram);
        }
    }
 
    return anagrams;
}
 
int main()
{
    vector<string> words =
    {
        "CARS", "REPAID", "DUES", "NOSE", "SIGNED", "LANE", "PAIRED", "ARCS",
        "GRAB", "USED", "ONES", "BRAG", "SUED", "LEAN", "SCAR", "DESIGN"
    };
 
    
    set<set<string>> anagrams = groupAnagrams(words);
 

    for (set<string> anagram: anagrams) {
        for (string s: anagram) {
            cout << s << ' ';
        }
        cout << endl;
    }
 
    return 0;
}
