function minFlips(target: string): number {
    let init = 0;
    let flips = 0;

    for(let i = 0; i < target.length; i++) {
        if(Number(target[i]) !== init){
            init = Number(target[i]);
            flips ++;
        }
    }
    return flips

};