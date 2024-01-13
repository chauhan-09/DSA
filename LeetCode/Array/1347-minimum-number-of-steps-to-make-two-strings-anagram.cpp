class Solution {
public:
    int minSteps(string s, string t)
    {
        unordered_map<char,int> m(26);
   
        int n = s.length();
        int cnt = 0;
        
        for(int i=0;i<n;i++)
         m[s[i]]++;

        for(int i=0;i<n;i++)
        {
           char ch = t[i];

           if(m.find(ch) != m.end())  //find function takes constant time in unordered_map not confirm though
           {
               if(m[ch] > 0)
               {
                  m[ch]--;
               }
               else
               {
                   cnt++;
               }
           }
           else
           {
               cnt++;
           }
        }

        return cnt;

        //TC ----> O(n) + O(n)
        //SC ----> O(1)

        
        
    }
};