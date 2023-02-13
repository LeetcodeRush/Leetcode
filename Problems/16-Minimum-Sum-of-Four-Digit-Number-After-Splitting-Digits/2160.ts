    

// minimum sum of any length of number.
function minimumSum(num: number): number {
    const str = num.toString().split('');
    let digits = str.map(Number);
    digits.sort((a,b)=>a-b);

    for(let i = 0; i< digits.length; i++) {
        if(digits[i] !== 0) {
            digits = digits.slice(i)
            break;
        }
    }
    let p1 = 0,p2 = 1;
    let num1: number[] = [];
    let num2: number[] = [];
    while(digits[p1]) {
        num1.push(digits[p1]);
        if(p2 < digits.length){
            num2.push(digits[p2])
        }
        p1 += 2;
        p2 += 2;
    }
    return Num(num1) + Num(num2);

    function Num(digits: number[]): number {
        let res : number = 0;
        let len = digits.length-1;
        for(let i = 0; i < digits.length; i++) {
            res += Math.pow(10,len)* digits[i];
            len --;
        }
        return res;
    } 

};