class Solution {
public:
  int firstUniqChar(string s)
  {
      map<char, int>m;
      for(int i=0;i<s.size(); i++)
          m[s.at(i)]++;
      for (int i=0;i<s.size(); i++)
      {
          auto it = m.find(s.at(i));
          if (it->second == 1)
              return i;
      }
      return -1;
  }
};
