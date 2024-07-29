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

function main() {
    let t = parseInt(readLine());
    for (let i = 0; i < t; i++) {
        let input_line = readLine().split(' ');
        let n = parseInt(input_line[0]);
        let m = parseInt(input_line[1]);
        input_line = readLine().split(' ');
        let matrix = new Array(n);
        for (let i = 0; i < n; i++) {
            let a = new Array(m);
            for (let j = 0; j < m; j++) {
                a[j] = parseInt(input_line[i * m + j]);
            }
            matrix[i] = a;
        }

        let obj = new Solution();
        let res = obj.rowWithMax1s(matrix);
        console.log(res);
    }
}
// } Driver Code Ends


// User function Template for javascript

/**
 * @param {number[][]} arr
 * @param {number} n
 * @param {number} m
 * @returns {number}
 */
class Solution {

    rowWithMax1s(arr) 
    {
        var n = arr.length , m = arr[0].length , maxi = 0 , ans = -1;
        
        for(let i=0;i<n;i++)
        {
             let cnt = 0;
             for(let j=0;j<m;j++)
             {
                 if(arr[i][j] == 1) cnt++;
             }
             
             if(cnt > maxi) 
             {
                 maxi = cnt;
                 ans = i;
             }
        }
        
        return ans;
    }
}