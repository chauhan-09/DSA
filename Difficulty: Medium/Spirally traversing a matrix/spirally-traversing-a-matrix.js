//{ Driver Code Starts
// Initial Template for javascript

'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => { inputString += inputStdin; });

process.stdin.on('end', _ => {
    inputString =
        inputString.trim().split('\n').map(string => { return string.trim(); });

    main();
});

function readLine() { return inputString[currentLine++]; }

/* Function to print an array */
function printArray(arr, size) {
    let i;
    let s = '';
    for (i = 0; i < size; i++) {
        if (arr[i] == -0) arr[i] = 0;
        s += arr[i];
        s += " ";
    }
    console.log(s);
}

function main() {
    let t = parseInt(readLine());
    let i = 0;
    for (; i < t; i++) {
        let input_ar0 = readLine().split(' ').map(x => parseInt(x));
        let n = input_ar0[0];
        let m = input_ar0[1];
        let matrix = new Array(n);
        for (let i = 0; i < n; i++) {
            let a = new Array(m);
            let input_ar1 = readLine().split(' ').map(x => parseInt(x));
            for (let j = 0; j < m; j++) a[j] = input_ar1[j];
            matrix[i] = a;
        }
        let obj = new Solution();
        let ans = obj.spirallyTraverse(matrix);
        printArray(ans, ans.length);
    }
}
// } Driver Code Ends


// User function Template for javascript
/**
 * @param {number[][]} matrix
 * @returns {number[]}
 */

class Solution {
    // Function to return a list of integers denoting spiral traversal of matrix.
    spirallyTraverse(arr) 
    {
        var n = arr.length , top = 0 , bottom = n-1 , left = 0 , right = arr[0].length - 1 , ans = [] , k = 0;
        
        while(top <= bottom && left <= right)
        {
            for(let i=left;i<=right;i++)
             ans[k++] = arr[top][i];
            
            top++;

            for(let i=top;i<=bottom;i++)
             ans[k++] = arr[i][right];
            
            right--;
            
            if(top <= bottom)
            {
                for(let i=right;i>=left;i--)
                ans[k++] = arr[bottom][i];
                bottom--;
            }
             
            if(left <= right)
            {
                for(let i=bottom;i>=top;i--)
                ans[k++] = arr[i][left];
                left++;
            }
        }
        
        return ans;
    }
}