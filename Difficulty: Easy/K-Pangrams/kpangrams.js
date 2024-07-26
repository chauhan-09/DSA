//{ Driver Code Starts

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => { inputString += inputStdin; });

process.stdin.on('end', _ => {
    inputString =
        inputString.trim().split("\n").map(string => { return string.trim(); });

    main();
});

function readLine() { return inputString[currentLine++]; }

function main() {
    let t = parseInt(readLine());
    let i = 0;
    for (; i < t; i++) {
        let str = readLine();

        let k = parseInt(readLine());

        let obj = new Solution();
        let res = obj.kPangram(str, k);
        if (res)
            console.log("true");
        else
            console.log("false");
    }
}

// } Driver Code Ends



class Solution {
    /**
    * @param string str
    * @param number k

    * @returns boolean
    */
    kPangram(s, k) 
    {
        var n = s.length , mpp = new Map();
        
        for(let i=0;i<n;i++)
        {
            if(! mpp.has(s[i])) mpp.set(s[i],1);
            else mpp.set(s[i],mpp.get(s[i]) + 1);
        }
        
        if(mpp.size == 26 && !mpp.has(' ')) return true;
        else if(mpp.size == 27) return true;
        
        if(mpp.get(' ') == undefined)
        {
            if(n >= 26 && k >= 26-mpp.size) return true;
            else return false;
        }
        else if(n - mpp.get(' ') >= 26 && k >= (26 - (mpp.size - 1))) return true;
        else return false;
    }
}
