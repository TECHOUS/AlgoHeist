# PATTERN 3 [ HALF reverse PYRAMID]
n = int(input("enter no. : "))

nos = 1
space = n-1

for cr in range(1 , n+1):
    for cst in range(1 , space+1):             #  HALF inverse PYRAMID of space " "
            print(' ' , end=" ")    
            # print('\t ' , end = " ")  [use \t  as this space is entered in then editor of pepcoding]
            
    for cst in range(1 , nos+1):               # HALF PYRAMID of stars " * "  after HALF inverse PYRAMID of space
        print('*' , end= " ")
        # print('*\t' , end=" ")     [use \t  as this space is entered in then editor of pepcoding]
    nos +=1
    space -=1
    
    print() 

#        EXAMPLE::
#         HALF inverse PYRAMID of space " "

#         _ _ _ _
#         _ _ _
#         _ _
#         _

#         HALF PYRAMID of stars " * " 

#             *
#            **
#           *
#          **
#         ***

#         HALF reverse PYRAMID
#         _ _ _ _ *
#         _ _ _ * *
#         _ _ * * *
#         _ * * * *
#         * * * * *