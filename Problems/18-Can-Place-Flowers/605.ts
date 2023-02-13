function canPlaceFlowers(flowerbed: number[], n: number): boolean {
    let num: number = 0;
    let flag: boolean = false;
    for (let i = 0; i < flowerbed.length; i++) {
        if (flag === true) i++;
        if ((flowerbed[i - 1] === 0 || flowerbed[i - 1] === undefined) && flowerbed[i] === 0 && (flowerbed[i + 1] === 0 || flowerbed[i + 1] === undefined)) {
            num++;
            flag = true;
        } else flag = false;
    }
    return num >= n;
};