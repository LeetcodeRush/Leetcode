function balancedStringSplit(s: string): number {
    let res: number = 0;
    let x:number = 0;

    for(let i of s) {
        if( i === 'R') x++;
        else x--;

        if(x === 0) {
            res ++;
        }
    }
    return res;
};