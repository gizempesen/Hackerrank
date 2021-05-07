from statistics import median  #import library

n=int(input())  #take input
arr=[int(x) for x in input().split()]  #split input and take in array
arr.sort()  #sort array
t=int(len(arr)/2)  #lenght is even or odd?
if len(arr)%2==0:  #if even
    L=arr[:t]  
    U=arr[t:]
else:              #if odd
    L=arr[:t]
    U=arr[t+1:]
    
#print medians    
print(int(median(L)))
print(int(median(arr)))
print(int(median(U)))
