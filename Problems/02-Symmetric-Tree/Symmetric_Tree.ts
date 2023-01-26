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

// helper queue
function isSymmetric(root: TreeNode | null): boolean {
    let queue: TreeNode[] = [];
    queue.push(root.left);
    queue.push(root.right);
    while (queue.length) {
        let left = queue.shift();
        let right = queue.shift();
        if (left && right) {
            if (left.val !== right.val) return false;
            queue.push(left.left);
            queue.push(right.right);
            queue.push(left.right);
            queue.push(right.left);
        } else if (left || right) {
            return false;
        }
    }
    return true
};

// recursive
function isSymmetric(root: TreeNode | null): boolean {
    function recur(left: TreeNode | null, right: TreeNode | null) {
        if (!left && right) return false;
        else if (left && !right) return false;
        else if (!left && !right) return true;
        else if (left.val !== right.val) return false;
        let outside = recur(left.left, right.right);
        let inside = recur(left.right, right.left);
        return outside && inside
    }
    return recur(root.left, root.right);
};