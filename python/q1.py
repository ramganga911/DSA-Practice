def mergeDic(d1,d2):
    for kd in d2:
        if kd in not d1:
            d1[kd]=d2[kd]
    return d1
key = list(map(int,input().split()))
val = list(map(int,input().split()))
d1= {}
for i in range(len(key)):
    d1[key[i]]=val[i]
    
d2 ={}
key = list(map(int,input().split()))
val = list(map(int,input().split()))
for i in range(len(key)):
    d2[key[i]]=val[i]
    
print(mergeDic(d1,d2))