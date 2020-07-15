n=int(input("enter num of rows : "))
k=65+n;
for i in range(65,k):
    k=i
    for j in range(65,i+1):
        print(chr(k),end=" ")
        k=k+1
    print()
