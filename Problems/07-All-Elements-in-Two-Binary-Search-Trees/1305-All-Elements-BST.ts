/**
 * Definition for a binary tree node.
 * class TreeNode {
 *     val: number
 *     left: TreeNode | null
 *     right: TreeNode | null
 *     constructor(val?: number, left?: TreeNode | null, right?: TreeNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.left = (left===undefined ? null : left)
 *         this.right = (right===undefined ? null : right)
 *     }
 * }
 */

function getAllElements(root1: TreeNode | null, root2: TreeNode | null): number[] {
    function getElements(node: TreeNode | null): number[] {
        let res: number[] = [];
        let queue: TreeNode[] = [];
        while(node || queue.length) {
            if(node){
                queue.push(node);
                node = node.left;
                continue;
            }
            node = queue.pop();
            res.push(node.val);
            node = node.right;
        }
        return res;
    }
    let res :number[] = [];
    let arr1 = getElements(root1);
    let ptr1 = arr1.length-1;
    let arr2 = getElements(root2);
    let ptr2 = arr2.length-1;
    let ptr = arr1.length + arr2.length - 1;
    while(ptr >= 0){
        if(ptr2<0 || arr1[ptr1] > arr2[ptr2]) {
            res[ptr--] = arr1[ptr1--];
        } else {
            res[ptr--] = arr2[ptr2--];
        }
    }
    return res;
};