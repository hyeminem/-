#分桃#

for i in range(1,10000):
        res = i
        for j in range(0,5):
                res = (res - 1) * 4/5
        if(res%5==0):
                print(i)
