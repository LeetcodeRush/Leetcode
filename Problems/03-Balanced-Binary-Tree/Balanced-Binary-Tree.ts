function isBalanced(root: TreeNode | null): boolean {
    if (!root) {
        return true;
    }
    console.log(balance(root));
    return balance(root) !== -1

    //自底至顶 后续遍历
    function balance(root: TreeNode | null): number {
        if (!root) {
            return 0;
        }
        let leftDepth = balance(root.left);
        if (leftDepth == -1) return -1;
        let rightDepth = balance(root.right);
        if (rightDepth == -1) return -1;
        if (Math.abs(leftDepth - rightDepth) > 1) return -1;
        return 1 + Math.max(leftDepth, rightDepth);
    }
};
