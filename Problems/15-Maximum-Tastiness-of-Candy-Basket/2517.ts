function maximumTastiness(price: number[], k: number): number {

    let n = price.length;
    price = price.sort((a,b)=> a-b);
    let left = 0, right = price[n-1] - price[0] , ans = 0;

    while(left <= right){
        let mid = Math.floor(left+(right-left)/2);
        if(possible(mid)){
            ans = mid;
            left = mid+1;
        }else{
            right = mid-1;
        }
    }

    function possible(diff){
        let count = 1;
        let curr = 0;

        for(let i=1; i<n; i++){
            if(price[i] - price[curr] >= diff){
                curr = i;
                count++;
            }
        }

        if(count >= k) return true
        else return false;

    }

    return ans;

};