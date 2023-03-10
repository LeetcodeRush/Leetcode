function numSplits(s: string): number {
    const left_set = new Set();
    const right_set = new Set();
    let arr = [];
    let res = 0;

    for(let i=0; i<s.length; i++) {
        left_set.add(s[i]);
        arr[i] = left_set.size
    }
    for(let i=s.length-1; i>=0; i--) {
        right_set.add(s[i]);
        if(right_set.size === arr[i-1]){
            res++
        }
    }
    return res;

};