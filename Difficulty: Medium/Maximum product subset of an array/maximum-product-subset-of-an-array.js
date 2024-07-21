//{ Driver Code Starts
// Driver program to test the above  function
const readline = require('readline');

const rl = readline.createInterface({input : process.stdin, output : process.stdout});

let input = [];
rl.on('line', function(line) { input.push(line); });

rl.on('close', function() {
    let t = parseInt(input[0]);
    let index = 1;
    while (t--) {
        let n = parseInt(input[index]);
        let arr = input[index + 1].split(' ').map(Number);
        index += 2;
        let solution = new Solution();
        let ans = solution.findMaxProduct(arr);
        console.log(ans);
    }
});
// } Driver Code Ends

   

class Solution {
    /**
    * @param number[] a

    * @returns number
    */
    findMaxProduct(arr) 
    {
        var n = arr.length , ans = 1 , cnt = 0 , maxi = -Infinity , z = 0, mod = 1000000007;
        if(n == 1) return arr[0];
        
        for(let i=0;i<n;i++)
        {
           if(arr[i] > 0) ans = (ans * arr[i]) % mod;
           else if(arr[i] == 0) z++;
           else if(arr[i] < 0)
           {
               cnt++;
               maxi = Math.max(maxi,arr[i]);
           }
        }
        
        if(z == n || z == n-1 && cnt == 1) return 0;
       
        if(maxi != -Infinity && cnt % 2 != 0)
        {
            for(let i=0;i<n;i++)
            {
               if(arr[i] == maxi) 
               {
                   arr[i] = 1;
                   break;
               }
            }
        }
        
        for(let i=0;i<n;i++)
        {
            if(arr[i] < 0) ans = (ans * arr[i]) % mod;
        }
        
        return ans;
        

        
        
    }
}
