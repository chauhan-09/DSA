class Solution {
    public int findContentChildren(int[] g, int[] s) {

        int n = g.length;
        int m = s.length;
        int content = 0;

        Arrays.sort(g); // sort the array and proceed accordingly as stated in problem
        Arrays.sort(s);
        int i = 0, j = 0;

        while (i < n && j < m) {
            if (g[i] <= s[j]) {
                content++;
                i++;
                j++;
            } else
                j++;
        }

        return content;

        // TC - O(n log n) + O(m log m) + O(n)
        // SC - O(1)

        /*
         * for(int i=0;i<n;i++)
         * {
         * int mini = Integer.MAX_VALUE;
         * flag = 0;
         * 
         * for(int j=0;j<m;j++)
         * {
         * if(g[i] == s[j])
         * {
         * content++;
         * s[j] = -1;
         * flag = 1;
         * break;
         * }
         * else if(g[i] < s[j])
         * {
         * mini = Math.min(mini,s[j]);
         * indx = j;
         * }
         * }
         * 
         * if(flag == 0)
         * {
         * if(mini > g[i] && mini != Integer.MAX_VALUE)
         * {
         * content++;
         * s[indx] = -1;
         * }
         * }
         * }
         */
    }
}