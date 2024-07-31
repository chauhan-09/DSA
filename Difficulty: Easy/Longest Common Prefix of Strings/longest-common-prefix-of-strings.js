//{ Driver Code Starts
// Initial Template for javascript

"use strict";

process.stdin.resume();
process.stdin.setEncoding("utf-8");

let inputString = "";
let currentLine = 0;

process.stdin.on("data", (inputStdin) => { inputString += inputStdin; });

process.stdin.on("end", (_) => {
    inputString =
        inputString.trim().split("\n").map((string) => { return string.trim(); });

    main();
});

function readLine() { return inputString[currentLine++]; }

/* Function to print an array */
function printArray(arr, size) {
    let i;
    let s = "";
    for (i = 0; i < size; i++) {
        s += arr[i] + " ";
    }
    console.log(s);
}

function main() {
    let t = parseInt(readLine());
    let i = 0;
    for (; i < t; i++) {
        let inputAr = readLine().split(" ");
        let obj = new Solution();
        let res = obj.longestCommonPrefix(inputAr);

        console.log(res);
    }
}
// } Driver Code Ends


// User function Template for javascript

/**
 * @param {string[]} arr
 * @param {number} n
 * @returns {string}
 */

class Solution {
    longestCommonPrefix(arr) 
    {
        var n = arr.length , anss = "" , maxi = Infinity;
        if(n == 1) return arr[0];
        
        
        for(let i=0;i<n-1;i++)
        {
            let ans = arr[i] , ans2 = arr[i+1] , temp = "";
            
            for(let j=0;j<Math.min(ans.length,ans2.length);j++)
            {
                if(ans[j] == ans2[j])
                {
                    temp += ans[j];
                }
                else break;
            }
            
            if(maxi > temp.length) 
            {
                maxi = temp.length;
                anss = temp;
            }
        }
        
        if(anss.length == 0) return "-1";
        else return anss;
    }
}