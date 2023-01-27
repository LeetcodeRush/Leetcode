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

 function hasPathSum(root: TreeNode | null, targetSum: number): boolean {
    if(!root) return false;
    let res: boolean = false;
    let sum: number = 0;
    //不是简洁的写法，但是回溯思路比较清晰
    function dfs(node: TreeNode | null) {
        if(!node) return;
        if(node.left === null && node.right === null){
            if(sum + node.val === targetSum){
                res = true;
                return
            }
        }
        sum += node.val;
        dfs(node.left);
        sum -= node.val;
        
        sum += node.val;
        dfs(node.right);
        sum -= node.val;
    }
    dfs(root);
    return res;
}