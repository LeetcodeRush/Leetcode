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

function getMinimumDifference(root: TreeNode | null): number {
    let res: number = Infinity;
    let preNodeVal: number;
    //二叉搜索树采用中序遍历，其实就是一个有序数组。
    function recur(node: TreeNode | null) {
        if(node === null) return 
        recur(node.left);
        if(preNodeVal!==null && Math.abs(preNodeVal-node.val) < res){
            res = Math.abs(preNodeVal-node.val);
        }
        preNodeVal = node.val;
        recur(node.right);
    }
    recur(root);
    return res;
};