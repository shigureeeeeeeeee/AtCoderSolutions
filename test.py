N = int(input())
values = list(map(int, input()))

total_sum = sum(values)
cumulative_sum = [0] * (2 * N)
for i in range(2 * N):
    cumulative_sum[i] = cumulative_sum[i - 1] + values[i % N]

min_fairness = float('inf')
for i in range(N):
    for j in range(i + 1, i + N):
        a = cumulative_sum[j] - cumulative_sum[i]
        for k in range(j + 1, i + N):
            b = cumulative_sum[k] - cumulative_sum[j]
            c = total_sum - a - b
            fairness = max(a, b, c) - min(a, b, c)
            min_fairness = min(min_fairness, fairness)

print(min_fairness)

