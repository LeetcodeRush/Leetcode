function partitionString(s: string): number {
    let arr: string[] = [];
    let count = 0;
    for(let i = 0; i < s.length; i++) {
        if(arr.indexOf(s[i])>= 0) {
            count ++;
            arr = [];
        }
        arr.push(s[i]);
    }
    return count+1;

};