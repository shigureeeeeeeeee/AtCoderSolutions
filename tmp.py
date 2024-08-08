def find_routes(N, M, rainfall):
    def dfs(x, y, path):
        if x == N-1 and y == N-1:
            routes.append(path[-1])
            return
        
        directions = [(0, 1), (1, 0)]  # 右と下のみ
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N and rainfall[nx][ny] < M:
                dfs(nx, ny, path + [nx * N + ny + 1])

    routes = []
    if rainfall[0][0] < M:  # 開始地点のチェック
        dfs(0, 0, [1])
    
    return sorted(routes) if routes else ["wait"]

# 入力を受け取る
N, M = map(int, input().split())
rainfall = [list(map(int, input().split())) for _ in range(N)]

# ルートを探索
result = find_routes(N, M, rainfall)

# 結果を出力
print(*result)