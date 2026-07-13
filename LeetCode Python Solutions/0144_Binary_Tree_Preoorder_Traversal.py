class Solution:
    def preorderTraversal(self, root):
        result = []
        
        def dfs(node):
            if not node:
                return
            
            # 1. Visit the root
            result.append(node.val)
            # 2. Traverse left
            dfs(node.left)
            # 3. Traverse right
            dfs(node.right)
            
        dfs(root)
        return result
