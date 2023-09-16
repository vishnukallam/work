import numpy as np
row = int(input('Enter rows:'))
col = int(input('Enter col:'))
a = list(map(int,input('Enter values in row wise:').split(' ')))
arr =np.array(a).reshape(row,col)
print(f'the size of a given matrix is:{row} X {col}')
print('Given matrix')
print(arr)

print('''
    1.Det
    2.Transpose
    3.Eigen values and Vectors                                          
    4.Trace
    5.Inverse
    6.Addition of two matrices
    7.Multiplication of a matrix
    8.Matrix exponentiation
''')

while True:
    choice = int(input('Enter Choice:'))
    match choice:
        case 1:
            print()
            print('Det of the given matrix :')
            print(np.linalg.det(arr))
            print()
        case 2:
            print('Tranpose of the given matrix')
            print(np.transpose(arr))
            print()
        case 3:
            print()
            val,vec = np.linalg.eig(arr)
            print('eigen values:',val)
            print()
            print('eigen vectors')
            print(vec)
            print()
        case 4:
            print('Trace of the given matrix')
            print(np.trace(arr))
            print()
        case 5:
            print('Inverse of the given matrix')
            print(np.linalg.inv(arr))
            print()
        case 6:
            print("To add two matrices, please enter'Y'or, you can continue with'N'.")
            add = input("enter 'Y/N' :")
            if add.upper() == 'Y':
                ar = np.array(list(map(int,input('Enter values values into matrix:').split(' ')))).reshape(row,col)
                print(ar)
                print(f'Resultant matrix :\n{np.add(arr,ar)}')
            else:
                print(f'Resultant matrix :\n{np.add(arr,arr)}')
        case 7:
            print("To multiply two matrices, please enter'Y'or, you can continue with'N'.")
            mul = input("enter 'Y/N'")
            if mul.upper() == "Y":
                ar1 = np.array(list(map(int,input('Enter values values into matrix:').split(' ')))).reshape(row,col)
                print(ar1)
                print(f'Resultant matrix :\n{np.dot(arr,ar1)}')
            else:
                print(f'Resultant matrix :\n{np.dot(arr,arr)}')
        case 8:
            print("Matrix exponentiation")
            pow = int(input('Input the matrix exponentiation value'))
            print(np.linalg.matrix_power(arr,pow))
        case _:
            print("please choose option between 1 to 8")
            break
#nature of the qudratic form
#if possible rank
