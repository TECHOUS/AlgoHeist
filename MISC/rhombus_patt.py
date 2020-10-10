# PATTERN 5 [ RHOMBUS]            [ my solution inspired by pepcode]

n = int(input("enetr no. : "))

nos = 1
space = n//2                                 # NO NEED TO COUNT SPACE AFTER CENTRE COLUMN 

for cr in range(1 , int(n/2)+1):
    for cst in range(1 , space+1):
        print(' ' , end=" ")
        
    for cst in range(1 , nos+1):
        print('*' , end= " ")
        
    nos +=2
    space -=1
    print()
    
for cr in range(int(n/2)+1 , n+1 ):
    for cst in range(1 , space+1):
        print(' ' , end=" ")
        
    for cst in range(1 , nos+1):
        print('*' , end= " ")
        
    nos -=2
    space +=1
    print()


#         LOGIC ::
#        FOR N = 5               SPACE = 2  NOS = 1                      
#         _ _ *
#         _ * * *
#         * * * * *
#         _ * * *
#         _ _ *