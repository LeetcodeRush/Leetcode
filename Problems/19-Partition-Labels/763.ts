function partitionLabels(s: string): number[] {
    
    let map: Map<string,number> = new Map();
    let res: number[] = [];
    
    for(let i = 0; i < s.length; i++) {
        map.set(s[i],i);
    }

    let start = 0, end = 0;
    for(let i = 0; i < s.length; i++) {
        end = Math.max(map.get(s[i])!, end);
        if(i === end){
            end = i;
            res.push(end - start + 1);
            start = end+1;
        }
    }
    return res;

};