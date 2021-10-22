// que link : https://www.codechef.com/LTIME97C/problems/FALSNUM/

# cook your dish here
for _ in range(int(input())):
    a = input()
    if a[0]=='1':
        b = a[0]+'0'+a[1:]
        print(b)
    else:
        b = '1' + a
        print(b)
    
