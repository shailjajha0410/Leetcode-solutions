class Solution:
    def isValidSudoku(self, board):
        rows = set()
        cols = set()
        boxes = set()

        for r in range(9):
            for c in range(9):

                value = board[r][c]

                if value == ".":
                    continue

                if (r, value) in rows:
                    return False

                if (c, value) in cols:
                    return False

                box = (r // 3, c // 3)

                if (box, value) in boxes:
                    return False

                rows.add((r, value))
                cols.add((c, value))
                boxes.add((box, value))

        return True
