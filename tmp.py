def is_erasable(board, x, y):
    number = board[x][y]
    for dx, dy in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
        nx, ny = x + dx, y + dy
        if 0 <= nx < len(board) and 0 <= ny < 5 and board[nx][ny] != number:
            return False
    return True

def dfs(board, x, y, number, to_erase):
    if x < 0 or x >= len(board) or y < 0 or y >= 5 or board[x][y] != number:
        return
    to_erase.add((x, y))
    for dx, dy in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
        nx, ny = x + dx, y + dy
        if (nx, ny) not in to_erase:
            dfs(board, nx, ny, number, to_erase)

def erase_blocks(board):
    to_erase = set()
    for i in range(len(board)):
        for j in range(5):
            if board[i][j] != '.' and is_erasable(board, i, j):
                group = set()
                dfs(board, i, j, board[i][j], group)
                to_erase.update(group)
    
    if not to_erase:
        return False
    
    for i, j in to_erase:
        board[i][j] = '.'
    return True

def drop_blocks(board):
    for j in range(5):
        write_pos = len(board) - 1
        for i in range(len(board) - 1, -1, -1):
            if board[i][j] != '.':
                board[write_pos][j] = board[i][j]
                if write_pos != i:
                    board[i][j] = '.'
                write_pos -= 1

def solve_puzzle(board):
    while True:
        if not erase_blocks(board):
            break
        drop_blocks(board)

# 入力の読み取り
H = int(input())
board = [list(input().strip()) for _ in range(H)]

# パズルの解決
solve_puzzle(board)

# 結果の出力
for row in board:
    print(''.join(row))