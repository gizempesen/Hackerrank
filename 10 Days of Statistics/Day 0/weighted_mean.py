input()
X = map(float,raw_input().split())
W = map(float,raw_input().split())
print round(sum([i[0]*i[1] for i in zip(X,W)])/sum(W),1)
