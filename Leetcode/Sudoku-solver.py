class Solution:
    def solveSudoku(self, board: List[List[str]]) -> None:

        def empty(board):
            for i in range(9):
                for j in range(9):
                    if board[i][j] == '.':
                        return [i, j]
            return None

        def isValid(board, num, index):
            for i in range(9):
                if board[index[0]][i] == num and index[1] != i:
                    return False
            for i in range(9):
                if board[i][index[1]] == num and index[0] != i:
                    return False

            index_1 = index[0]//3
            index_2 = index[1]//3

            for i in range(index_1*3, index_1*3 +3):
                for j in range(index_2*3, index_2*3 +3):
                    if board[i][j] == num and [i, j] != index:
                        return False

            return True
        
        def solver(board):
            if not empty(board):
                return True
            else:
                row, col = empty(board)
            
            for i in range(1, 10):
                if isValid(board, str(i), [row, col]):
                    board[row][col] = str(i)
                    if solver(board):
                        return True
                    board[row][col] = '.'

            return False
        solver(board)
