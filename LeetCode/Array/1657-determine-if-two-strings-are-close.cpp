class Solution {
public:
    bool closeStrings(string word1, string word2) 
    {
        int n = word1.length();
        int m = word2.length();

        if(n != m) return false;

        vector<int> v1(26,0);
        vector<int> v2(26,0);

        for(int i=0;i<n;i++)
        {
            v1[word1[i] - 'a']++;
            v2[word2[i] - 'a']++;
        }

        for(int i=0;i<26;i++)     //this is just checking whether ch. is present in both the strings
        {
            if(v1[i] == 0 && v2[i] == 0) continue;

            if(v2[i] != 0 && v2[i] != 0) continue;

            return false;         //flow will reach here 
        }


        sort(v1.begin(),v1.end());  //sorting 26 elements only so O(1)
        sort(v2.begin(),v2.end());

        if(v1 == v2) return true;

        return false;


        //TC ----> O(N)
        //SC ----> O(1)

    }
};