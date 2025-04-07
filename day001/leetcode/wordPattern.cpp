class Solution {
public:
vector<string>split(string s)
{
    vector<string>v;
    istringstream iss(s);
    string w;
    while (iss>>w)
        v.push_back(w);
    return v;
}

bool wordPattern(string pattern, string s)
{
    unordered_map<string, char>wtoc;
    unordered_map<char, string>ctow;
    vector<string>v = split(s);
    if (v.size() != pattern.size())
    return false;
    for (int i=0;i<pattern.size(); i++)
    {
        string w = v[i];
        char c = pattern[i];
        if (wtoc.count(w) && wtoc[w] != c)
            return false;
        if (ctow.count(c) && ctow[c] != w)
            return false;
        wtoc[w] = c;
        ctow[c] = w;
    }
    return true;  
}
};
