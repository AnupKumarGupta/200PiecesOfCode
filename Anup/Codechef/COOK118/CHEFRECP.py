# cook your dish here
t = int ( input() )
while t != 0:
    t = t - 1
    N = int(input())
    arr = [int(x) for x in input().split()]
    # print (arr)
    d = {}
    for i in arr: 
        d[i] = 0
    d[arr[0]] = 1   
    
    flag = False
    
    for i in range(len(arr)):
        if i != 0:
            if arr[i] != arr[i-1]: # new character 
                if d[arr[i]] != 0:
                    flag = True
                    break
            d[arr[i]] = d[arr[i]] + 1
   
    if flag == False:
        vals = list(d.values())
        uniquevals =set(vals)
        if(len(vals) != len(uniquevals)):
            flag = True
    
    if flag:     
        print("NO")
    else:
        print("YES")
    
    # print(vals)    