H, W = map(int, input().split())
Si, Sj = map(int, input().split())
grid = [input() for _ in range(H)]
X = input()

current_i, current_j = Si - 1, Sj - 1  # 0-indexedに変換

directions = {
    'L': (0, -1),
    'R': (0, 1),
    'U': (-1, 0),
    'D': (1, 0)
}

for move in X:
    di, dj = directions[move]
    new_i, new_j = current_i + di, current_j + dj
    
    if 0 <= new_i < H and 0 <= new_j < W and grid[new_i][new_j] == '.':
        current_i, current_j = new_i, new_j

print(current_i + 1, current_j + 1)
